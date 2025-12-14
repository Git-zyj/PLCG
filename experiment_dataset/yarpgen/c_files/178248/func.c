/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178248
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
    var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : ((~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((-1374314536430322071LL) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)0)))))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_3 [i_0])))) >> (((min((arr_2 [i_0]), (((/* implicit */long long int) arr_3 [i_0])))) - (3935274976LL)))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2353010253U)))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)511)))))));
        var_22 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_7)))) ? (var_9) : (arr_1 [i_0]))))));
    }
}
