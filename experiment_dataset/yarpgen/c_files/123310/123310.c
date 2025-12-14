/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (max((arr_3 [i_1 - 3]), ((2048746346 ? var_0 : -var_9))));
                arr_6 [i_0] [1] [i_1] = (min((var_9 < 163), var_4));
                var_15 = var_8;
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = (((((2048746339 ? (arr_7 [i_2] [i_2]) : var_2))) ? var_7 : (((((var_4 ? 65 : (arr_1 [i_2])))) ^ ((var_4 ? var_12 : var_1))))));
        var_17 = (max(var_17, ((min(((max(469762048, 31934))), ((1 ? 21331 : (~var_6))))))));
        arr_9 [i_2] = var_4;

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_18 += (((1 >> 1) ? (((var_2 <= (((var_11 ? 39330 : 1)))))) : -2097024));

            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_19 = (-var_0 || var_1);
                            var_20 = (min(var_20, ((((((var_6 ? (arr_13 [i_6] [i_4 + 1] [i_4 + 1]) : (arr_11 [i_2] [i_4 + 1] [i_4 + 1])))) ? var_8 : var_11)))));
                            arr_21 [i_2] [i_6] [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_3] [i_2] = ((!((max((!1), (arr_4 [i_6] [i_2]))))));
                        }
                    }
                }
                var_21 &= ((((((44 & var_2) ? (~var_12) : (~127)))) ? -var_12 : (1 + 1)));
                arr_22 [i_2] [i_2] [i_3] [i_3] = 4294967295;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_22 = (min((min(var_11, var_5)), (arr_27 [i_2] [9] [i_2])));
                            var_23 = var_11;
                        }
                    }
                }
                var_24 = var_10;
            }

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_25 -= 8036280701051787347;
                arr_32 [i_2] [i_3] [i_2] = (0 == 81);
                var_26 = (min((((!((((arr_19 [i_9] [i_3 + 1]) ? (arr_16 [i_9] [i_2] [i_2] [i_2] [i_2] [i_2]) : var_5)))))), ((-108 - ((86 ? (arr_19 [i_2] [i_2]) : -15))))));
            }
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                arr_35 [i_2] [i_2] = ((!(arr_29 [i_10 - 1] [i_10 - 1] [0] [i_3])));
                arr_36 [i_2] = (4 ? 1 : -3);
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_27 = ((((-3921740566248703626 ? 26197 : var_3))) ? (arr_3 [i_11]) : (((arr_3 [i_3 - 2]) ? (arr_3 [i_2]) : (arr_3 [i_2]))));
                arr_39 [i_11] [i_2] [i_2] [i_2] = (arr_23 [i_11] [i_3 - 2] [i_2] [i_11] [i_2] [i_2]);
            }
        }
    }
    #pragma endscop
}
