/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12691
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 ^= (unsigned short)52809;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)6821)) ? (-4115775647097115792LL) : (2527907631302631277LL))), (((/* implicit */long long int) arr_0 [i_3]))));
                                var_21 = ((/* implicit */unsigned int) (signed char)1);
                                arr_12 [i_0] [i_0] [4LL] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (~(arr_4 [i_4])));
                                var_22 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(var_13))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = var_5;
}
