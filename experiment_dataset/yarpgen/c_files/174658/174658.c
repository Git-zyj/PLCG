/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(3921161033, 1));
    var_17 = var_7;
    var_18 = (!-var_10);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] = ((((((~26) ? 3507066724311942193 : ((var_8 ? var_14 : (arr_3 [i_0] [i_1])))))) ? (arr_4 [i_1]) : var_0));
                    var_19 = (min(var_19, (min(1, (((((((arr_2 [10]) ? (arr_0 [1] [6]) : (arr_8 [i_0] [i_1] [i_1 - 1] [1])))) < ((3507066724311942170 ? 1 : 8375923808283562779)))))))));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_0 + 1] [i_1] [i_2] [i_2] [i_0] [i_3] = ((((arr_9 [i_2] [i_3 + 1] [i_2] [i_3]) && (arr_9 [4] [i_3 - 1] [12] [i_3 - 1]))));
                        arr_15 [i_3 - 1] [i_0] [i_0] [i_0 - 1] = var_4;
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        var_20 = ((-(((arr_12 [i_0 + 1] [i_0 + 4]) & (arr_17 [i_0 + 1] [i_0])))));
                        arr_18 [i_0 + 1] [i_1] [11] [i_0] = ((-(arr_9 [i_0] [i_1 - 1] [i_2] [i_4 + 1])));
                        var_21 = ((((((-var_10 >= (arr_5 [i_0]))))) * ((-820726669 ? ((max(-51, var_8))) : 2392156207))));
                        var_22 = max(var_2, (arr_9 [i_4 + 1] [i_4 + 2] [i_4] [i_4]));
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_23 = 2924628846;
                        var_24 = (((((1368896721120358409 ? (arr_13 [i_0 + 3] [i_0]) : (max(13491001597699530105, 15401))))) ? (((~(arr_3 [i_0] [i_0])))) : 1902811074));
                        arr_22 [5] [5] [i_2] [i_0] = 7206468830987232320;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((~(((arr_4 [4]) ? -26998 : var_10))));
                        var_25 = (max(var_25, (arr_6 [i_0])));
                        var_26 = (min(var_26, (((!(arr_12 [i_1 + 1] [i_1]))))));
                        var_27 = ((!(((-6415 ? 12135924363022026135 : (arr_24 [i_2] [i_2] [0] [i_6] [i_2] [i_0]))))));
                    }
                    arr_28 [i_0] = (((((!(arr_17 [i_0 + 1] [i_0]))))) - ((176956280 ? var_13 : (arr_17 [i_0 + 1] [i_0]))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_28 = 20165;
                        var_29 = (min(var_29, (!2222898148)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
