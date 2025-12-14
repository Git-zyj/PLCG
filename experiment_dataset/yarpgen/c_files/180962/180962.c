/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((min(var_5, var_13)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_8 [2] [2] &= (max(-var_6, (((0 == (arr_4 [i_0] [6] [i_2] [i_3]))))));
                        var_16 += (((var_1 * var_4) / ((-((min(65525, (arr_1 [6]))))))));
                        var_17 += (((max(((min((arr_3 [i_0] [i_1] [12]), var_10))), (((arr_3 [i_0] [i_1 - 1] [6]) / var_12)))) / (arr_2 [i_2] [i_2])));
                        arr_9 [i_0] [i_1] [i_2] [15] = 65535;

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [i_4] [i_3] [i_1 - 1] [i_3 - 1] |= -16067;
                            var_18 = var_9;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_19 += var_10;
                            arr_16 [i_5] [i_0] [i_2] [i_0] [i_0] = (max(39011, -16532));
                        }
                    }
                }
            }
        }
        var_20 |= var_8;
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_21 = (max(((-((-(arr_5 [i_0] [i_6] [i_6 + 2] [i_7]))))), (((((arr_17 [i_0]) ? (arr_19 [i_0] [i_0] [i_7]) : (arr_1 [i_7]))) / ((max(0, (arr_7 [i_0] [i_6] [i_0] [i_0] [i_6 + 1] [i_6]))))))));
                    var_22 -= -6231;
                    var_23 += (((arr_13 [i_6 + 1] [i_7] [i_6]) <= var_4));
                }
            }
        }
        arr_21 [i_0] = (min((min((max(8361, -8496)), var_10)), (!var_11)));
        arr_22 [12] |= (arr_10 [6] [i_0] [6] [i_0] [6]);
    }
    #pragma endscop
}
