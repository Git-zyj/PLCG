/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173687
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
    var_17 = ((/* implicit */unsigned char) max(((+((+(((/* implicit */int) (unsigned char)255)))))), (var_8)));
    var_18 = min(((~(1494323774U))), (((1494323774U) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (var_10))))))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) max((min((2800643522U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) min((var_2), (var_0))))))), (-9223372036854775793LL)));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), ((-((-(8437789507746590986LL))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_11 [18U] [i_1] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) (((~(8437789507746590986LL))) & (min((var_4), (((/* implicit */long long int) var_16))))));
                            var_21 = ((/* implicit */unsigned long long int) 1494323767U);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 2046U))));
                            arr_18 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) var_15);
                            arr_19 [i_0] [14] [i_4] [14] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1494323759U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
