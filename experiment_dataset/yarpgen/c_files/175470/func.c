/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175470
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */int) var_14)))) + (((/* implicit */int) ((unsigned char) (signed char)-13)))))) ? (max((((((/* implicit */_Bool) arr_1 [(_Bool)0] [(_Bool)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (7132934225621186008ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [8LL]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)13)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-21)) ? (((((/* implicit */_Bool) (unsigned char)238)) ? (-6518023227551532294LL) : (3240907342240446013LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9))))), (((/* implicit */long long int) ((unsigned char) (signed char)-13)))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) * (((unsigned int) arr_1 [i_1] [i_1]))));
    }
    var_21 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)4)) ? (18LL) : (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)13))))) && (((/* implicit */_Bool) ((int) var_8)))))) : ((~(((/* implicit */int) ((unsigned char) -19LL))))));
}
