/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? var_10 : var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_1 [17])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (!171);
                    var_21 = var_6;
                }
            }
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_22 |= 9307526929288582917;

                        for (int i_6 = 4; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [3] [i_6] [i_5] = (arr_4 [i_6 - 3] [i_6 - 4]);
                            var_23 = (min(var_23, var_10));
                            arr_24 [8] [i_6] [i_4] [i_6] [i_6] = ((-((-(arr_0 [i_0] [i_3])))));
                        }

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = (max(var_24, 9307526929288582907));
                            arr_28 [i_3] [i_4] [i_5] [i_7] &= 5099557094691874389;
                            arr_29 [14] [i_3] [i_4] [i_5] [i_7] = 9139217144420968699;
                            var_25 = (arr_8 [10] [i_3] [i_4]);
                        }
                        var_26 = (((arr_26 [i_0] [i_0] [i_3] [9] [i_4] [i_5] [i_5]) ? (arr_26 [i_0] [i_3] [i_5] [i_5] [i_4] [i_4] [9]) : var_2));
                        var_27 = (((((var_15 ? (arr_11 [i_5]) : var_15))) ? (arr_26 [i_0] [i_0] [i_3] [1] [i_4] [i_5] [12]) : (arr_17 [1] [i_0] [i_3] [i_3] [2] [i_5])));
                    }
                }
            }
            arr_30 [i_0] [i_0] [i_0] = (((arr_5 [i_3]) ^ var_5));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_28 = var_7;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_39 [i_0] [i_0] [i_0] |= (((87 >= 9307526929288582917) ? (((arr_27 [14] [15] [i_10] [i_0] [i_9]) & -1)) : (((!(arr_21 [i_0] [i_8] [12] [i_9] [i_0] [i_10]))))));
                        var_29 = var_9;
                        var_30 = (((!var_10) >> (((!(arr_21 [18] [i_8] [i_8] [i_9] [i_9] [i_10]))))));
                        var_31 = (!9307526929288582911);
                    }
                }
            }
            var_32 = (min(var_32, ((!(arr_34 [i_0])))));
            var_33 = (((arr_1 [i_8]) << (arr_18 [14] [i_0] [i_0] [i_0] [i_8] [i_8])));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
        {
            var_34 = 9307526929288582911;
            var_35 = (max(var_35, (((!(arr_25 [i_0] [i_11] [i_0] [i_11] [i_11]))))));
            var_36 = (max(var_36, ((((arr_7 [16] [i_11] [i_11]) - (arr_19 [i_0] [16] [i_11] [14]))))));
        }
    }
    #pragma endscop
}
