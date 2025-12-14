/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123413
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */short) arr_3 [i_0]);
                arr_6 [i_1] = ((/* implicit */long long int) (+((-(arr_4 [i_0])))));
                arr_7 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_10 [i_0] [i_0] [i_0]));
                    arr_13 [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_3 [i_0])))));
                    arr_14 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(arr_3 [4])));
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_24 [i_4] [i_1] [0U] = ((/* implicit */unsigned long long int) ((int) (~(arr_20 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5]))));
                                arr_25 [(unsigned short)9] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_3] [i_4] [i_1]);
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((int) arr_1 [i_3]));
                    arr_27 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_1] [i_3]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_21 [i_7] [i_6] [i_1] [i_1] [i_1] [i_1] [i_0]);
                                arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] &= ((unsigned short) arr_1 [i_3]);
                                arr_34 [i_6] [i_6] [i_6] [i_1] [i_6] [(short)0] = ((/* implicit */signed char) arr_4 [i_7]);
                                arr_35 [i_0] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */int) ((unsigned short) ((short) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_9);
}
