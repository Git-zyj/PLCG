/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [1] [i_0] = ((((((max(-1, var_3))) ? 0 : (55 - 65535))) > ((2147483647 ? 0 : 36028797018963712))));
                    arr_11 [i_0] [24] [i_0] = (min(((240 ? 1 : 41717)), ((((((11 ? (arr_2 [i_0] [i_1]) : 0))) >= var_8)))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    arr_15 [i_0] [3] [i_3] = (((arr_12 [i_3 - 1] [i_3 - 2] [i_3 + 1]) <= (arr_12 [i_3 - 2] [i_3 - 2] [i_3 - 1])));
                    arr_16 [i_0] [i_0] [1] = (((arr_5 [i_3 - 1]) + var_6));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_21 [i_3 - 1] [i_0] = (-var_11 ^ 4294967295);
                                arr_22 [10] [10] [i_0] [20] = (65 / 18410715276690587901);
                                arr_23 [i_0] [i_1] [i_0] [i_4] [i_5] = ((((((arr_18 [i_0] [i_1] [i_3]) & 0))) && 36028797018963712));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_3] [i_0] = (18446744073709551611 & (arr_17 [i_0] [i_3 - 1] [i_0] [i_6] [i_7] [i_1]));
                                arr_32 [i_0] [i_3 - 2] [i_7] [i_6] [i_7] [i_0] = ((254 ? 255 : 18446744073709551615));
                                arr_33 [i_3] [i_0] [i_3] = (((((var_14 ? var_9 : (-9223372036854775807 - 1)))) > 18446744073709551615));
                            }
                        }
                    }
                    arr_34 [i_0] [1] [i_0] = ((!(arr_6 [i_0] [i_1])));
                }
                arr_35 [21] [i_0] = (((-((var_5 ? 11 : var_10)))));
            }
        }
    }
    var_18 = ((((max(var_6, var_14)))));
    #pragma endscop
}
