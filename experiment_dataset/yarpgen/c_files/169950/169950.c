/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [8] [i_0] [i_1] |= (max((min(18, (-2147483647 - 1))), var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_18 = ((~(arr_12 [i_1] [i_3] [i_2] [i_1] [i_1])));
                                arr_14 [i_1] [i_1] = var_13;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_13 [i_1]);
                            }
                            var_19 = (((((arr_10 [i_1] [i_1] [i_1] [i_1]) * (arr_11 [i_1] [i_1] [11] [i_3] [i_3]))) <= ((((arr_11 [i_1] [1] [i_2] [i_3] [17]) <= (arr_10 [i_1] [i_1] [i_2] [i_0]))))));
                        }
                    }
                }
                arr_16 [i_1] [i_1] [i_1] = (max((var_8 * 0), (((var_1 / (arr_4 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_20 += (((arr_4 [i_6] [i_7]) | (arr_17 [0])));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = ((65535 ? ((((var_4 && var_4) || (((107 ? 65535 : (arr_18 [i_7]))))))) : (((arr_7 [i_5 - 3] [i_8 + 3]) ? (arr_23 [i_5] [i_5]) : (arr_12 [i_5 - 2] [i_6] [i_8 + 3] [i_5] [i_5])))));
                                var_22 -= ((((max((arr_27 [i_6] [i_7] [i_8] [9]), (arr_4 [i_5 - 2] [i_8 + 2])))) % ((max(40844, (arr_28 [0] [i_5] [i_6] [0] [i_8] [i_6]))))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (((+(((((~10) + 2147483647)) << ((((var_9 ? 200 : 232)) - 200)))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_35 [18] [18] [i_7] [i_7] [12] [i_7] [i_7] |= arr_20 [i_5 - 1] [i_6] [i_6];
                                arr_36 [i_5] [i_5] [i_7] [i_10] [i_11] = (((((38986 ? (1 & 0) : ((24681 ? 27825 : 4))))) && 0));
                            }
                        }
                    }
                    var_24 = (max(var_24, ((min(var_10, ((((arr_13 [i_5 + 2]) <= 40844))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_51 [i_13] [i_13] [i_13] [i_13] = ((65535 ? var_3 : var_16));
                            arr_52 [i_12] [i_12] [i_15] [i_13] [i_14] [i_12 + 1] = ((((65535 < var_14) ? ((max(var_12, 1))) : (38 <= var_4))) != (arr_38 [i_12 + 2] [i_12 + 2]));
                        }
                    }
                }
                var_25 = 27825;
            }
        }
    }
    #pragma endscop
}
