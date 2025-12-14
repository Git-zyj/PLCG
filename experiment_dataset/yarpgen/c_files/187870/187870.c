/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    var_16 = ((-(!var_14)));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((((min((0 | 999460653), (~var_13)))) ? (~var_3) : (min(var_13, var_11))));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = 0;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [4] [4] &= (~var_7);
            arr_11 [i_1] [7] [i_2] = ((~(~var_2)));
        }
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 6;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] [i_3 + 1] [i_3 + 1] [i_1] = var_1;
                        arr_19 [2] [i_1] [i_1] [i_3] [i_1] [i_3] = ((min(var_7, var_6)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [1] [1] [1] [1] = (~-1);
                        arr_26 [i_1] [i_3] [i_6] [i_7] = 80;
                    }
                }
            }
            arr_27 [1] = (((var_11 ? ((max(var_6, var_5)) : var_14))));
        }

        /* vectorizable */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 8;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_38 [i_1] [i_1] [1] [i_8] = (((arr_5 [i_9] [i_1]) ? 88 : var_10));
                        arr_39 [i_1] [i_8 + 1] [i_8] [7] = 104;
                        arr_40 [i_1] [i_8] [i_1] [i_10] = ((((arr_5 [i_1] [i_9 + 2]) ? 11970799517922079033 : 248)) & (arr_7 [i_1] [i_1]));
                    }
                }
            }
            arr_41 [i_8] [i_8] = -2351913048567019654;
        }
        for (int i_11 = 1; i_11 < 7;i_11 += 1)
        {
            arr_45 [i_1] [i_1] [i_11 + 2] = ((31 ? 80 : 8));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_54 [i_11] [i_13] = (arr_22 [i_1] [i_1]);
                        arr_55 [i_1] [i_1] [i_1] [i_1] = var_1;
                    }
                }
            }
            arr_56 [i_1] = (((!var_7) ? (((((1 ? (arr_52 [i_1] [2] [2] [i_1] [i_11]) : (arr_14 [i_1] [i_1] [i_1]))) | var_6))) : ((-(~-4464006972560573825)))));
            arr_57 [i_1] = (arr_16 [i_11 + 2] [i_11 + 3] [i_11 + 2] [i_11 + 3] [i_11 - 1] [i_11]);
            arr_58 [i_1] = -1;
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            arr_61 [i_14] [i_14] [3] = ((18446744073709551585 ? (~-32762) : ((var_1 ? (arr_46 [i_1]) : var_10))));
            arr_62 [i_1] [i_14] = (min(((var_5 ? ((~(arr_47 [i_1] [i_1] [1]))) : (~5629757285579648862))), -var_4));
            arr_63 [i_1] = ((+((var_4 ? (arr_32 [i_14] [i_1] [i_1]) : (arr_32 [i_1] [i_1] [i_14])))));
        }
    }
    var_17 = var_3;
    #pragma endscop
}
