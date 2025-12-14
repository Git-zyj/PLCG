/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10484
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
    var_13 = ((/* implicit */signed char) ((min((var_8), (((/* implicit */unsigned int) var_2)))) >= (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (-645821456) : (((/* implicit */int) (unsigned char)112)))) : (((/* implicit */int) var_0)))))));
            var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_1] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_1] [i_0 + 1]))));
        }
        arr_5 [6U] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_4 [10] [10])) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_2 [11ULL]) : (((/* implicit */int) var_2))))));
    }
}
