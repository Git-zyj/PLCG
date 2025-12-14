/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -21323;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_0] = 21322;
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((-(arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                        arr_13 [15] [15] [i_0] [i_2] [i_3] = (((arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) && (arr_7 [i_3 - 1] [i_0] [i_3 + 1] [i_3 + 1])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_17 [i_0] = (max(var_5, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? -21300 : 1)))));
                        var_12 = var_0;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] = var_2;
                            arr_21 [i_0] = (((arr_19 [i_1] [i_2] [i_4] [i_5]) & (arr_4 [i_0] [i_1])));
                            arr_22 [9] [i_0] [i_2] [23] [i_2] = ((-(arr_6 [i_0] [i_1] [i_2] [14])));
                            arr_23 [i_0] = ((var_10 ? (var_7 / -1) : -21339));
                            arr_24 [i_0] [i_0] [i_2] [i_0] [i_5] = var_9;
                        }
                        arr_25 [i_0] [6] [i_2] [i_4] = (min((((((-21323 + 2147483647) >> (21323 - 21300))))), ((var_2 ? (arr_15 [i_1] [i_1] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [0])))));
                    }
                    var_13 = (((((((arr_7 [i_0] [i_0] [i_0] [i_2]) && (arr_7 [i_0] [i_0] [i_0] [i_2]))))) & ((-(arr_7 [i_0] [i_0] [i_1] [i_1])))));
                    arr_26 [i_0] [i_0] [i_0] = ((((arr_3 [i_0]) << (((arr_5 [23] [20] [23]) - 14826)))) + ((((arr_14 [i_0] [i_0] [i_0] [i_0]) >> ((((arr_6 [i_0] [i_0] [i_2] [i_2]) < (arr_4 [i_0] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                arr_32 [i_6] [i_6] [i_7] = var_10;
                var_14 = (max(var_14, 1433157218));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
