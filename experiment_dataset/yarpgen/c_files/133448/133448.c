/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 |= (-42 || -115);
            arr_7 [i_1] [i_1] [i_0] = var_6;
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_0] = -115;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_16 = 106;
                        var_17 = -86;
                        arr_18 [i_4] [19] [7] [19] |= (arr_16 [13] [i_3] [i_2]);
                    }
                }
            }
            arr_19 [i_0] [i_0] [i_2] = -86;
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_18 = (arr_20 [i_0] [i_6]);
                    var_19 = ((!((((max(1, (arr_0 [i_6]))))))));
                }
            }
        }
        var_20 = -24654;
        arr_24 [i_0] = ((!(~1429793767)));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_21 = var_11;
        var_22 ^= var_9;
        arr_27 [i_7] [17] = (((~(((arr_25 [i_7]) ? 1 : (arr_26 [i_7] [i_7]))))));
        arr_28 [1] [1] = -1361655353;
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_23 -= ((!(!var_2)));
                            arr_43 [i_12] [i_10] [i_10] [i_10] [i_8] = ((!(2 >= var_12)));
                        }
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_24 = (max(var_24, var_12));
                            var_25 = 0;
                            arr_47 [12] [i_8] [i_8] [i_8] [12] |= (((!1429793767) - 1429793775));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_50 [i_10] [i_9] [i_10] [i_11] [i_14] = -1373317484;
                            var_26 = (!var_1);
                            var_27 = ((145 ? ((((max(-22417, 234))))) : 1));
                        }
                        arr_51 [i_11] [2] [i_10] [i_10] [0] [i_8] = (!56235);
                    }
                }
            }
        }

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        arr_60 [i_8] [i_15] [i_8] [i_17] = (max(((!(var_12 && -24))), (!-73)));
                        var_28 -= -8955904759901565998;
                        var_29 = (min(var_29, 1));
                        arr_61 [12] = var_8;
                    }
                }
            }
            arr_62 [i_15] = (max((1 + -8955904759901565998), (!4400248598989315163)));
        }
    }
    var_30 -= ((var_14 + ((((var_14 | 24) != (var_11 - var_5))))));
    var_31 = 0;
    var_32 ^= 6;
    #pragma endscop
}
