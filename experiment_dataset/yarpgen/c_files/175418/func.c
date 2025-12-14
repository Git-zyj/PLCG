/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175418
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
    var_20 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [18U] [i_2] [18U] [i_0] [i_2] [i_4] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))));
                                var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61340)) - (((/* implicit */int) (_Bool)0))));
                                arr_15 [i_0] [19] [17] [i_4] [19U] = ((/* implicit */unsigned long long int) arr_10 [i_4] [i_3] [12U] [(signed char)5] [i_0]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) arr_3 [8U] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
