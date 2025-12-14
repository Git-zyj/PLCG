/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113247
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
    var_11 = var_8;
    var_12 *= ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] = var_5;
                                arr_12 [i_0] [i_3] = ((/* implicit */unsigned long long int) var_9);
                                var_14 = ((/* implicit */unsigned long long int) var_4);
                                arr_13 [i_4] [7U] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_15 = var_3;
                                arr_21 [7ULL] [i_5] [i_1] = ((/* implicit */unsigned char) var_9);
                                arr_22 [i_0] [i_0] [i_1] [(unsigned char)1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_10);
}
