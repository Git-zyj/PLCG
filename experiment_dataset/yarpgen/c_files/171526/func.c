/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171526
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) 1921932384U)))))))), (min((((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_12))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [i_0])))))));
                var_15 *= ((/* implicit */long long int) min((((((((/* implicit */_Bool) 1921932384U)) && (((/* implicit */_Bool) 1624020588U)))) ? (min((2373034921U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [0LL]))))), (((/* implicit */unsigned int) arr_0 [(short)14]))));
                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [10ULL] [2ULL]))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_12))))))))));
            }
        } 
    } 
}
