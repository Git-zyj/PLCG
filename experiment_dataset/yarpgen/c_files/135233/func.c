/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135233
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
    var_14 *= ((/* implicit */signed char) var_11);
    var_15 = var_13;
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_13 [i_0] [i_1] [i_2 - 2] [i_0 - 2] [i_4]);
                                var_18 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)23))))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(-3913748425450574148LL))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(-5571601234713959568LL))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) var_9);
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_5 + 1] [i_0] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                                var_22 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) var_8)), (arr_2 [i_5 - 1] [i_2 - 2] [i_0 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
