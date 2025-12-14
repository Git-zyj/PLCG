/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((var_12 ^ (max(((61686 ? 1 : 58160318670801389)), 2146959360))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = arr_1 [i_0];
                    arr_6 [i_0] [i_0] [i_0] [i_0] = 1;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 -= (arr_3 [i_3] [i_3]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_22 = (-10 ? (arr_5 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_1 - 3]) : (arr_1 [i_0]));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_4] = (((1600755944 ^ 1152921367167893504) & (arr_1 [i_0])));
                            var_23 = (max(var_23, (arr_13 [i_3] [i_1 - 3] [i_1])));
                            var_24 = 1;
                        }
                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            arr_17 [11] [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] = 14977;
                            arr_18 [i_0] [i_1 + 2] [i_0] [i_2] [i_1 + 2] [i_3] &= (((arr_10 [i_0] [i_1] [i_2] [i_3]) ? (arr_4 [i_0] [i_0] [i_2] [i_3]) : -1));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_25 = (max(var_25, (((arr_19 [i_3] [i_3] [i_2] [i_1 + 2] [i_0]) == (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                            var_26 &= (((arr_12 [i_1 + 2] [i_3]) != (arr_12 [i_1 - 3] [i_6])));
                            var_27 &= ((~(arr_3 [i_6] [i_3])));
                            var_28 += ((6713771389609396142 - (arr_20 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])));
                            var_29 = 2146959370;
                        }
                        var_30 = ((97 & (arr_21 [i_3] [i_3] [i_2] [i_2] [i_2] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    var_31 = (((103 ? var_0 : ((31 >> (7359069125049136682 - 7359069125049136655))))));
    var_32 = var_5;
    var_33 = ((-(~1)));
    #pragma endscop
}
