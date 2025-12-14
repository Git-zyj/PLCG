/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-68 & var_0);
    var_21 = var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = -541151119;
        var_23 = (((!(arr_2 [i_0] [i_0]))));
        var_24 = (min(var_24, -3861852648));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_25 = (arr_0 [4]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_26 = (arr_8 [i_2]);
            var_27 = var_8;
            arr_9 [i_2] = (~2794030803);
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] [i_3] [i_6] = ((((max(8176, -19007))) <= ((((min(8195, var_16))) & var_11))));
                            var_28 = (((((-(max(var_17, (arr_19 [0] [i_4] [0] [i_4])))))) ? (~var_18) : ((((!((!(arr_10 [3] [i_4])))))))));
                        }
                    }
                }
            }
            var_29 = (min((((arr_14 [i_3]) / (arr_22 [i_4]))), (arr_22 [i_4])));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_31 [i_3] [i_9] [i_8] [i_9 - 1] = -939699596;
                        var_30 ^= var_10;
                        var_31 |= (arr_28 [i_8] [12] [2] [2] [i_8]);
                        var_32 = ((3861852648 ? 19006 : -91));
                        arr_32 [i_3] [i_4] [9] [i_8] [i_3] [9] = (max(((((var_6 && (arr_20 [i_3] [8]))) ? (((var_0 + (arr_20 [i_3] [i_3])))) : (max(var_0, (arr_17 [i_3] [8]))))), ((((arr_10 [i_9 + 1] [i_9 + 1]) ? (arr_10 [i_9 - 1] [i_9 - 1]) : -8177)))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    {
                        var_33 = (((((var_13 ? var_2 : 18997))) ? ((var_15 ? 1 : -8163)) : (76 || 6)));
                        var_34 = (arr_19 [i_3] [i_3] [i_3] [i_12 - 1]);
                    }
                }
            }
            var_35 = (((~(arr_36 [i_3] [9] [i_10]))));
            arr_44 [i_3] = ((~(-92 ^ -2004189047)));
        }
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            arr_47 [i_3] [i_3] = ((((((((var_15 == (arr_46 [i_3])))) == (((arr_20 [i_3] [i_13 - 1]) | (arr_13 [i_3] [i_13 - 1])))))) / ((-19022 | (!-8178)))));
            arr_48 [i_3] [i_13 - 1] = ((+((-((var_0 ? (arr_19 [i_3] [1] [i_13] [i_13 + 1]) : (arr_17 [i_3] [i_13])))))));
        }
    }
    #pragma endscop
}
