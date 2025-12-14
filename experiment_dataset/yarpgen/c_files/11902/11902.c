/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_16 = var_6;
                        arr_10 [i_1] [i_1] [i_1] [i_1] = (((arr_4 [i_0] [i_1]) ? ((var_4 ? (arr_3 [i_3] [i_0] [i_0]) : -100)) : (var_11 <= var_3)));
                        var_17 = (((!-1) || (!var_8)));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (min(var_18, (8 * 0)));
                        arr_13 [i_1] [i_2] [i_1] [i_1] = (~var_1);
                        arr_14 [i_1] [i_4] [3] [i_4 + 2] = -14;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_5] [i_1] [i_1] = var_11;
                                var_19 = -9;
                                var_20 = var_5;
                                arr_20 [i_5] [i_5] [1] [i_1] [i_5] [20] [10] = ((var_10 >> (var_9 + 31)));
                            }
                        }
                    }
                    var_21 = (604307272 <= 1);
                }
            }
        }
        arr_21 [i_0] [i_0] = var_4;
        var_22 = 1048575;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_23 = (((((arr_3 [i_7] [i_8] [i_7]) ? (((var_12 / (arr_7 [i_8] [i_7] [i_7])))) : 18014398241046528)) + (((-(arr_12 [i_8] [i_8] [0] [i_8]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_24 = ((((((arr_29 [i_10 - 2]) ? var_3 : (arr_29 [i_10 + 1])))) ? ((min(var_1, var_12))) : ((min(var_14, var_9)))));
                            var_25 = (arr_16 [i_10] [i_9]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            {

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_26 = (min(var_26, ((((604307272 % var_6) & (((var_3 < ((2918502602 ^ (arr_5 [i_11] [i_11])))))))))));
                    arr_42 [i_11] [i_12] [i_12] [i_13] = ((54713 + (((arr_7 [i_11] [i_12] [i_11]) ^ (min(var_7, 2915555359))))));
                    var_27 = var_12;
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                var_28 = var_13;
                                var_29 = (((((!((((arr_4 [i_12] [i_12]) ? 0 : var_9)))))) >> (4055665961 - 4055665953)));
                            }
                        }
                    }
                }
                var_30 = (~(((((71 ? (arr_25 [i_11] [i_12]) : (arr_36 [i_11] [i_12] [i_12])))) * ((-(arr_22 [i_12]))))));
            }
        }
    }
    var_31 = var_14;
    #pragma endscop
}
