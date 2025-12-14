/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((((var_1 ? (arr_0 [i_0] [i_0]) : 32256))) ? -var_5 : (arr_0 [i_0] [i_0])));
        arr_3 [i_0] [1] = 32256;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = -32256;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_2] [i_2] = (var_15 ? 32231 : ((var_10 ? -4289348705628936200 : (arr_10 [i_1] [i_1]))));
            arr_12 [i_1 - 1] [i_2] |= (arr_5 [i_1 + 3]);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_23 [i_5] [i_3] [i_4] [i_5] [i_5] [i_1] = var_0;
                        arr_24 [i_1] [i_5] = ((-(!-32256)));
                        arr_25 [i_3] [i_5] = var_9;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_29 [i_1 + 4] [i_3] [i_3] = (max(((~(arr_19 [1] [i_4] [i_1] [i_6]))), var_14));
                            arr_30 [i_1] [i_3] [1] [i_3] |= ((((arr_27 [i_1] [i_3] [i_4] [i_5] [i_6] [i_4] [i_3]) ? (((var_16 ? -32268 : -32256))) : (min(64, -4289348705628936200)))));
                            arr_31 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1 - 2] = (((max(var_1, var_13))));
                            arr_32 [i_3] [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 4] [1] = ((+(max(32256, (((arr_5 [i_1]) ? -112920562 : var_11))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_36 [20] [20] [i_5] [3] [i_7] = var_6;
                            arr_37 [i_1] [14] [i_4] [i_5] [i_3] |= 1;
                        }
                        arr_38 [i_1] [i_3] [i_4] &= (((var_6 <= (arr_4 [i_1 + 1]))) ? (!var_8) : (arr_8 [i_1 + 1]));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_43 [i_1] [i_1 + 2] [11] = ((((((~1) + 2147483647)) << (var_1 - 13))));
                        arr_44 [9] [i_3] [i_8] [i_9] = (arr_14 [i_1 - 2] [i_3] [i_3]);
                        arr_45 [i_1] [i_3] [i_8] [i_9] = max((((arr_14 [i_1] [i_1] [i_1]) ? ((((arr_15 [i_3] [i_3]) ? 112920562 : var_9))) : var_12)), ((((arr_19 [18] [18] [i_8] [18]) ? (arr_8 [i_1]) : (arr_19 [i_3] [i_3] [i_3] [i_3])))));
                    }
                }
            }
            arr_46 [i_3] [i_1 - 1] = var_1;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            arr_49 [20] [20] [20] |= 112920561;
            arr_50 [i_1] = 32273;
        }
        /* vectorizable */
        for (int i_11 = 4; i_11 < 18;i_11 += 1)
        {
            arr_53 [i_11] [i_11 + 2] [i_1] = var_1;
            arr_54 [17] = (arr_7 [i_1 + 4]);
        }
        arr_55 [i_1] |= ((max((arr_9 [i_1] [i_1]), (max(var_11, (arr_13 [i_1]))))));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 17;i_12 += 1) /* same iter space */
    {
        arr_58 [i_12] = (((arr_7 [i_12]) ? (arr_16 [3] [i_12] [i_12]) : (arr_19 [i_12] [8] [i_12] [12])));
        arr_59 [i_12 + 4] = (arr_33 [10] [i_12] [i_12] [6] [i_12]);
        arr_60 [i_12 - 1] = -4289348705628936180;
    }
    var_18 = (max((((((-4289348705628936211 ? var_2 : -32268))) ? (-25836 | 1056964608) : var_4)), ((((var_5 ? 1020 : var_12))))));
    var_19 = var_4;
    #pragma endscop
}
