/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10097
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
                var_12 = ((-(max((501 | -501), ((-6988 ? 8932946025091821154 : 9513798048617730462))))));
                arr_6 [i_0] |= ((9513798048617730466 ^ (-2147483647 - 1)));
                arr_7 [i_1] [i_1] [i_0] = var_8;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_13 = (((arr_3 [i_3 - 2]) | (arr_11 [i_3 - 3] [i_3 + 1] [i_3 + 1])));
                        arr_13 [2] [i_1] [i_0] [i_1] = 8932946025091821154;
                        arr_14 [i_1] [i_2] [3] [i_1] [i_1] = (((((var_7 ? (arr_5 [11]) : 2147483647))) ? (((arr_5 [23]) ? 1470013069 : (arr_10 [i_3 - 2] [i_1] [i_2] [i_1] [i_0]))) : (arr_9 [i_1] [i_2] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_14 |= ((arr_5 [i_1]) < -1);
                        var_15 = -9222940053977539333;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = (max(var_16, 24));
                        var_17 = (min(var_17, (((!(var_1 ^ -27642))))));
                    }
                    var_18 = ((arr_0 [i_2]) & (arr_0 [i_0]));
                    var_19 = ((((((arr_16 [13] [15] [21] [i_2]) * var_3))) ? 16860 : (arr_0 [i_2])));
                    var_20 = (max(var_20, (arr_2 [i_0])));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_21 ^= (28672 == 1);
                    arr_21 [i_1] [i_1] [i_6] = ((8932946025091821154 & (((-498 ? -19195 : (-9223372036854775807 - 1))))));
                    var_22 = 28496;
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    arr_24 [i_0] [11] [i_0] [i_1] = 7;
                    var_23 = 28570;
                    arr_25 [i_0] [i_1] [i_0] = ((!(!var_10)));
                }
                var_24 = (max(var_24, ((((min(7680, 4231178645992829268)) ^ (~255))))));
            }
        }
    }
    var_25 *= (((((var_11 ? 58 : var_2))) / var_8));
    #pragma endscop
}
