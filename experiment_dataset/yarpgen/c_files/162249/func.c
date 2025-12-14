/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162249
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */long long int) ((unsigned char) var_0));
                var_20 = ((/* implicit */unsigned long long int) var_17);
                var_21 = ((/* implicit */int) min((var_21), (min((((/* implicit */int) var_6)), (511)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (var_18) : (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3 + 1] [i_0 + 4])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (min((17060957124248076278ULL), (((/* implicit */unsigned long long int) 274877906943LL))))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) 4294967295U))));
                            var_24 = ((/* implicit */long long int) max((((/* implicit */int) min((((unsigned char) var_2)), (((/* implicit */unsigned char) var_1))))), (-2147483643)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_0)));
    var_26 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) max((var_2), (((/* implicit */short) var_7))))) ? (((/* implicit */int) var_11)) : (var_17)))));
}
