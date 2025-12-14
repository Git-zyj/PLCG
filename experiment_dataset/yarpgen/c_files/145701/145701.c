/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 6;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = 48105;
                                var_19 &= (max(((+(((arr_11 [i_0] [i_0] [i_0]) ? var_13 : 18446744073709551615)))), 1));
                                var_20 = (arr_12 [i_0] [i_0] [i_2] [i_0] [i_1] [i_0] [i_2]);
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] [i_3] &= 1;
                                arr_14 [i_0] = ((((min(17430, 65533))) ? (arr_7 [i_2 - 3] [i_0 + 1] [i_2 - 3]) : 8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 6;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 = ((59921 ? ((0 ? (min(var_9, 0)) : 1)) : (arr_17 [3] [i_0] [8] [i_1])));
                                var_22 *= (~((~(arr_18 [i_1] [i_5 - 1] [i_2 - 1] [i_1]))));
                                arr_19 [i_0] [i_1] = 127;
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_2] [i_6] [9] = 3209403588;
                                var_23 = -1388562405;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_24 &= 232396586;
                                arr_28 [7] [i_1] [i_1] [i_1] [i_0] = 727639077776505792;
                                var_25 = (((((-4096 ? var_10 : var_15))) ? 15950496283413585652 : (((57344 ? 0 : 2491984454)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_26 = -1099081008;
                                var_27 = -2071931908;
                                arr_34 [i_10] [1] &= var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_28 = ((((((arr_35 [i_13 - 1]) / ((9 ? var_4 : var_6))))) < (min((((arr_35 [i_12]) ? 4783 : 765316293)), -1099080991))));
                            var_29 = (arr_42 [i_11] [i_13 - 1] [i_13]);
                            arr_46 [i_14] [i_12] [i_14] [i_14] [14] = (((((var_0 ? ((7458 ? -4096 : -8)) : 31154))) && var_15));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_51 [i_11] [1] [i_15] [8] &= -198620840;
                            var_30 = (max((((arr_48 [i_11]) ? 2071931907 : (~2136345673))), ((~(max(var_1, -1099080978))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((+(max(((-5 ? (-2147483647 - 1) : (arr_41 [i_18] [i_11] [i_12] [i_11]))), 3)))))));
                            var_32 = (!var_2);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
