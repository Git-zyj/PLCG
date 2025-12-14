/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177910
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */int) (unsigned char)225)))))))) <= (((/* implicit */unsigned long long int) ((long long int) min((var_13), (arr_4 [1U] [i_0])))))));
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0 + 2] [i_1 + 1]), (((signed char) arr_1 [i_1])))))) : (((((/* implicit */_Bool) max((arr_3 [i_0 + 3] [(short)7] [(unsigned char)2]), (((/* implicit */short) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 + 2] [i_1]), (((/* implicit */signed char) arr_1 [i_0 - 3])))))) : (((long long int) arr_0 [i_0] [i_1 - 1]))))));
                var_16 |= ((/* implicit */unsigned char) ((signed char) var_10));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_1 - 1]))) : (6471008695615700323LL)));
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) 6471008695615700323LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (3138813554U)));
                }
            }
        } 
    } 
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)28)) && (((/* implicit */_Bool) (signed char)38)))))) && (((/* implicit */_Bool) var_4))));
}
