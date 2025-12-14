/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124769
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (max((((/* implicit */long long int) arr_3 [0U] [i_0] [i_0])), (arr_7 [(signed char)8] [(signed char)8] [10LL] [i_2] [10LL] [(signed char)8]))) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_3 - 1] [i_3 - 1]))))));
                            var_18 ^= ((/* implicit */unsigned long long int) var_5);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((arr_7 [i_1] [i_1] [(unsigned char)4] [i_0] [i_0] [i_0]) / (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 2878621497U))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_4))));
}
