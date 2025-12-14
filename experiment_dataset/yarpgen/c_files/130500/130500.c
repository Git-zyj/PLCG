/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((min(((~(arr_6 [10] [i_0] [i_1] [i_0]))), (((~18446744073709551608) ? -1333130555 : ((0 << (18446744073709551588 - 18446744073709551562))))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((((18446744073709551603 ? (arr_6 [i_2 - 1] [2] [i_2 + 2] [i_2 - 1]) : (arr_6 [16] [i_2] [i_2 + 1] [i_2 - 1]))) | (536870911 < 1)));
                            var_20 += ((!((1 && (((~(arr_2 [i_0]))))))));
                            var_21 *= ((!((max((arr_6 [i_1] [i_1] [i_2 + 1] [i_2 + 1]), 1)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_22 = (max((((!(arr_4 [13])))), (max((arr_4 [i_5]), (arr_4 [i_1])))));
                                var_23 = (min(-8093895644822460792, -124));
                                arr_21 [i_0] [i_1] [i_4] [i_5] [i_5] = (max(((min((min((arr_6 [i_0] [i_0] [i_4] [i_5]), 39)), (arr_3 [i_6])))), (max((18446744073709551612 && 1), ((123 ? var_4 : (arr_12 [i_0] [i_1] [i_4] [i_5])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_33 [i_8] [i_8] [i_8] [i_8] = ((~((max((!var_17), (max(111, -114)))))));
                            arr_34 [i_8] [i_8] [i_8] = ((((max(var_10, 3758096376))) ? ((max((arr_5 [i_7 + 4]), var_0))) : 536870920));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_24 *= 1;
                            arr_40 [i_8] = (max(((max(-1, (arr_31 [i_7 - 1] [i_12] [i_7 - 1])))), (max(((min((arr_39 [i_8] [i_8] [i_8] [i_8] [i_7]), 123))), (1 / var_1)))));
                            var_25 = ((((-(arr_20 [i_11]))) ^ ((max((min(var_14, (arr_25 [i_8]))), (arr_15 [i_11 - 3] [i_11 - 3] [18]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_26 = (~var_16);
                            var_27 = var_8;
                            var_28 = (((max((arr_19 [i_7] [i_8] [i_13 + 1] [2] [i_13] [i_14 - 1]), (arr_19 [i_7 + 1] [i_7 + 1] [i_13] [i_13 + 1] [i_7 + 1] [i_7 + 1])))) ? -87 : var_12);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
