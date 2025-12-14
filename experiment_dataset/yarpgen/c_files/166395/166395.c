/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((min(((((min(var_12, 0))) ? ((var_3 ? (arr_0 [i_0]) : var_4)) : 30)), ((((arr_1 [i_0]) || ((((arr_7 [i_0] [i_0] [i_2] [i_2]) << (var_0 - 1975554194))))))))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (((((((((arr_1 [i_2]) ^ 151))) && ((((arr_1 [i_2]) >> (72 - 43))))))) + (((-57 ? 18 : -1)))));
                        var_17 = (max((min((arr_0 [i_0]), 255)), (min((arr_0 [i_3]), (arr_0 [i_3])))));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_18 = 40;
                        arr_12 [i_4] = (((((((arr_11 [i_4] [i_1] [i_1] [i_4]) ? -1495141351 : 1137619901)))) ? 0 : (((arr_1 [i_2]) ? ((min((arr_0 [i_2]), var_11))) : ((0 ? 2147483632 : var_6))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = -0;
                                arr_19 [i_6] [i_6] [i_6] [0] [i_6] = (((((min((arr_2 [i_1] [3]), (arr_3 [i_0] [i_1] [i_1]))) != ((var_4 ? 1137619901 : 26)))) ? (((arr_13 [i_6] [i_5] [10] [i_1] [i_0]) ? (min(0, (arr_14 [i_0] [i_1] [2] [1] [i_6] [i_0]))) : (((((arr_11 [i_1] [i_5] [i_1] [i_1]) >= (arr_1 [i_0]))))))) : (var_13 / var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 ^= -799548674;
    var_21 = (min(var_21, (((-(min((max(var_14, (-2147483647 - 1))), (0 * var_10))))))));
    var_22 = (min(var_22, (((((max((2686838994 <= -997225333), (var_12 + var_1)))) > (min(var_11, (min(0, var_5)))))))));
    #pragma endscop
}
