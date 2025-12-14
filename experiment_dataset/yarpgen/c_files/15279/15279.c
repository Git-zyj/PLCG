/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_14 = (((((((var_5 ? (arr_6 [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 1]) : var_11))) || (arr_6 [i_2 - 3] [i_1] [i_0 - 2] [i_0 - 2]))) ? (((!((((arr_2 [i_0] [i_1] [i_2]) ? (arr_5 [i_0 - 1] [i_1] [i_1] [i_0 - 1]) : (arr_0 [i_1]))))))) : (((159 != (max((arr_6 [i_2] [3] [i_0] [i_0]), (arr_6 [i_0] [i_0 - 1] [4] [i_2]))))))));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (((((~var_13) & ((min(var_10, var_4)))))) ? ((-(var_11 <= 2978424349))) : (((arr_1 [i_1] [i_0 - 2]) ? (arr_1 [7] [i_0 - 2]) : (arr_1 [i_1] [i_0 + 1]))));
                }
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    var_15 -= (((((~(arr_2 [i_0] [i_0] [i_0])))) ? (((arr_6 [i_0] [i_0 + 1] [i_0] [i_0 - 2]) ? (arr_6 [i_0] [i_0] [i_0] [i_0 + 1]) : (arr_6 [8] [i_0] [20] [i_0 + 2]))) : (((arr_6 [i_0] [i_0] [i_0] [i_0 + 2]) * (arr_2 [i_0] [i_0] [i_0])))));

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_16 = (min(var_16, (47659350 * 1041308587)));
                        var_17 *= (((arr_13 [i_3 - 1] [i_3 - 2] [i_3 + 3] [i_3]) * (max((arr_8 [i_3 - 3] [i_3] [i_3] [i_0]), (arr_13 [i_3 + 2] [i_1] [i_1] [i_1])))));
                        var_18 = (((((var_12 ? ((var_5 >> (var_11 + 549598673))) : (arr_3 [2] [i_3] [i_3])))) * (((47659358 > 157) / ((var_11 & (arr_5 [i_0] [i_1] [8] [9])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [4] [4] [4] = (arr_10 [i_5] [1] [1]);
                        var_19 = (min(var_19, (arr_17 [i_0 + 2])));
                        var_20 ^= (((arr_16 [i_0] [i_0 - 1] [i_0 + 1] [i_3 - 2]) && (arr_16 [i_0] [i_0 + 2] [i_0 + 1] [i_3 - 2])));
                        var_21 |= var_13;
                    }
                    var_22 = (max(var_22, (((((((arr_2 [i_0] [21] [i_0]) >= (arr_3 [i_3] [0] [0])))) != (arr_17 [i_0 + 1]))))));
                }
                var_23 = (((~63) > -62));
            }
        }
    }
    var_24 = (~var_4);
    #pragma endscop
}
