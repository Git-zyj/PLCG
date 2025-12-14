/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (((arr_0 [i_1]) || ((((((arr_3 [i_0] [7] [i_2]) - (arr_0 [i_0]))) - (var_16 * 127))))));
                        arr_8 [i_0] [13] [13] [i_1] [2] [i_0] = ((!(arr_7 [i_0] [i_1] [i_2 + 2] [i_3])));
                        var_18 += (min(65530, 3105207575));
                        var_19 ^= -1334078509428817193;
                        var_20 = (min(var_20, (((((arr_4 [i_3] [i_2] [i_3]) ? (arr_6 [i_0] [i_3] [i_2 + 2] [i_2 + 1]) : var_1))))));
                    }
                    arr_9 [i_0] [i_1] [i_0] [i_2 + 2] = (max(((-(arr_4 [i_0] [i_2 + 1] [16]))), ((-(arr_4 [i_0] [i_2 + 1] [i_2 - 1])))));
                    arr_10 [i_0] [i_0] [1] = ((var_15 ? (arr_2 [i_2 - 1] [i_0] [i_2 + 1]) : (((arr_2 [i_2 + 1] [i_0] [i_2 - 1]) ? (arr_2 [i_2 + 1] [i_0] [i_2 + 2]) : var_11))));
                }
            }
        }
        var_21 = (max(var_21, (((~(arr_2 [4] [14] [4]))))));
        var_22 = (((arr_3 [i_0] [i_0] [i_0]) | ((~(max((arr_1 [i_0]), var_11))))));
        var_23 = (min(var_23, (((((~30680) ? (((arr_7 [i_0] [i_0] [i_0] [i_0]) & 1189759721)) : -89))))));
    }
    var_24 = (((((~(~var_13)))) ? 70 : var_12));
    #pragma endscop
}
