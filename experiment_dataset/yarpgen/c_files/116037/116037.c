/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 = ((!(((arr_8 [i_3] [i_0]) == (arr_7 [i_4] [i_3] [i_0] [i_0])))));
                                arr_14 [6] [i_1] [i_1] [i_0] = (min((arr_2 [i_0]), (arr_0 [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_9 [i_0])));
                                var_17 = (max((((4095 ? 359393015 : 2530181417))), (arr_3 [i_0] [i_0])));
                                var_18 = (arr_11 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [2] [i_0] [i_7] [i_8] = (((arr_15 [i_1 + 1] [i_1 - 1] [i_1 - 1] [14]) ? ((((arr_23 [9] [9] [i_2] [i_2] [12] [i_2]) <= var_11))) : (arr_15 [i_0] [i_1] [i_2] [i_8])));
                                var_19 = ((~(((((arr_21 [i_2] [i_7]) == var_0))))));
                            }
                        }
                    }
                    var_20 = var_9;
                    arr_27 [13] [13] [i_0] = (var_15 || -2383);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_21 = (max(var_21, (arr_23 [i_9] [i_10] [i_10] [i_10] [i_11] [i_12])));
                            arr_38 [i_11] [6] = var_10;
                        }
                    }
                }
                var_22 ^= (((-256407278294395752 != (134217600 || 3935574281))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        {
                            var_23 = ((((var_13 <= (((4 << (133169152 - 133169124)))))) ? (~var_4) : var_9));
                            arr_44 [i_14] [i_10] = (~var_2);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
