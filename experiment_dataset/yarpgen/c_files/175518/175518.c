/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? -2781026045192883616 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (arr_5 [2] [1] [0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (((!(arr_2 [i_0]))));
                            var_14 = (max(var_14, (1218665497 / 1)));
                            arr_13 [i_0] [i_1] [i_1] [12] = ((((((29741 ? 2781026045192883615 : 64)) ? ((2147483638 ? 3948569792390981752 : -2781026045192883628)) : var_9))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                            {
                                var_15 = var_2;
                                var_16 = (max(var_16, (arr_2 [i_0])));
                                var_17 *= var_8;
                                arr_18 [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_17 [i_0] [i_1] [i_2] [4] [i_4] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_18 += (arr_10 [i_0] [i_1] [i_2] [i_2] [12] [i_2]);
                                var_19 += arr_4 [i_5] [i_5];
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [10] = var_6;
                                var_20 += (((((~30763) + 2147483647)) << (2147483640 - 2147483640)));
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_3] [i_0] [i_7] = ((~((18014398509481984 ? (arr_15 [i_2] [9] [19]) : -15))));
                                var_21 = var_1;
                            }
                        }
                    }
                }
                var_22 = (min(-2887, 805306368));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_23 &= (max((((((~(arr_23 [i_8] [4] [i_8] [i_8] [0] [i_1]))) < (((var_1 ? (arr_34 [i_1]) : (arr_34 [16]))))))), (arr_5 [6] [6] [i_9 - 2])));
                            var_24 = (max(-1, 2066478382));
                            arr_35 [6] = ((-(((arr_21 [i_9] [i_1] [i_1] [i_0]) + ((3489660910 ? -6754353223335909229 : 27))))));
                            arr_36 [3] [i_1] [3] [i_1] = ((((arr_16 [i_0] [15] [i_8] [i_9 + 1] [15]) ^ ((~(arr_0 [i_8] [9]))))));
                            arr_37 [i_0] [8] = (((arr_9 [i_0] [i_8] [i_1] [i_0]) ? ((((!(arr_8 [i_9 - 4] [i_9] [i_9 - 3]))))) : (max(var_8, (!1)))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (~124);
    #pragma endscop
}
