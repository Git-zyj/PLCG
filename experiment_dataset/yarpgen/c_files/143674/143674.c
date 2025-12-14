/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (((((((var_13 ? (arr_8 [i_4] [i_1] [i_1]) : (arr_11 [i_0] [i_0] [i_0] [i_4])))) ? 3332121862451402026 : ((((16320 < (arr_7 [i_0] [i_0] [i_0] [18]))))))) >= ((var_12 ? var_3 : (var_9 && -3332121862451402026)))));
                                var_16 = var_12;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((min(243, 7973015483032043499)), (((max(var_10, var_14))))));
                            }
                        }
                    }
                }
                var_17 = ((7973015483032043499 ? ((0 | ((((arr_11 [i_1] [i_0] [i_0] [7]) | var_13))))) : 7973015483032043499));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_10 [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5] [i_7 + 1] [1] [4]);
                        var_18 = (6562568375604795001 + 10473728590677508117);

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_8] [9] = (((arr_5 [i_9]) >= ((~(arr_10 [i_5] [i_5] [16] [i_5] [i_8] [i_9] [i_5])))));
                            arr_29 [i_5] [i_5] = (!var_4);
                            var_19 = ((((var_11 < (arr_23 [i_5] [i_6] [i_7]))) ? (arr_4 [i_5]) : (!var_2)));
                            var_20 = 18446744073709551615;
                            var_21 = (max(var_21, (arr_27 [i_9] [4] [i_7] [i_7] [i_7 + 2] [12])));
                        }
                    }
                    var_22 = ((var_1 ? (arr_16 [i_5 + 1]) : (arr_27 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5])));
                }
            }
        }
    }
    var_23 = ((var_1 ? var_2 : (((((var_3 ? 4904 : 53225))) ? (((var_4 ? 48736 : var_7))) : -6562568375604794995))));
    #pragma endscop
}
