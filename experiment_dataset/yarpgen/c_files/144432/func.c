/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144432
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
    var_14 = ((((/* implicit */_Bool) min((((long long int) var_1)), (((/* implicit */long long int) ((unsigned int) (unsigned short)8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (3398314786U)))) ? (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) var_3))))) : (min((var_2), (((/* implicit */long long int) var_1))))))) : (max((((((/* implicit */_Bool) 2147483647)) ? (1662999328379687873ULL) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_6))))))));
    var_15 = ((/* implicit */unsigned int) var_13);
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((int) 2116556208U)) : (var_13)))) : (((unsigned long long int) ((unsigned short) var_2)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))), (((/* implicit */unsigned long long int) var_4))));
        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((900567470U), (4172132873U)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1984)))));
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] [13U] |= ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527))))))));
        var_18 = ((/* implicit */unsigned short) (~(arr_5 [i_1] [i_1 - 1])));
        var_19 = (~(((((/* implicit */_Bool) ((unsigned long long int) 434138179U))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9223372036853727232ULL) : (((/* implicit */unsigned long long int) 63U)))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (917478440528940687ULL) : (arr_5 [i_1] [i_1]))))));
    }
}
