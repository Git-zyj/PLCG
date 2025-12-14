/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_16 += (arr_0 [i_0 + 3]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 ^= ((!(((((-(arr_3 [i_2] [i_1] [i_0 - 2]))) * ((((arr_2 [i_2]) + (arr_0 [1])))))))));
                    arr_9 [i_0] [i_0] [i_0] [3] = arr_1 [i_2];
                    arr_10 [4] [1] [8] [4] &= (((arr_4 [i_0] [24] [i_2]) ? (((arr_0 [i_1]) ? (arr_7 [i_0 + 1] [i_0] [i_0] [9]) : (arr_8 [i_0] [i_1] [i_2]))) : (((max((13 || 20313), (!var_10)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((((0 ? 1 : (var_5 / var_14))) << (((1 ? 1 : 1)))));
                                arr_15 [i_3] [i_3] [i_0] [i_3] [1] = (min(-2758230330593499311, 30999));
                                arr_16 [i_0] [i_0] [22] [i_0 + 1] [i_0] |= 1;
                                var_19 += var_5;
                            }
                        }
                    }
                }
            }
        }
        var_20 ^= (((((arr_11 [i_0] [1] [i_0 - 2] [i_0 - 1] [i_0 + 3]) ? var_6 : (arr_1 [i_0 - 2]))) + (-26989 - 13)));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_21 = (((min(1, -89))) ? (((((335368099 ? var_15 : 2264952689))) ? (((3848691129 ? -89 : 0))) : ((1 ? 0 : 12100378830328901819)))) : (((max((arr_7 [i_5] [i_5] [10] [i_5]), (1 && 918286939))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_22 = (max(4099, 1));
                    arr_24 [i_5] [i_6] [i_7] &= var_13;
                }
            }
        }
        arr_25 [i_5] |= (max(((+(((arr_4 [i_5] [i_5] [i_5]) ? (arr_6 [i_5] [i_5 + 1] [i_5]) : 56249100402413674)))), 13));
        var_23 -= (max((((arr_0 [i_5 + 1]) & (arr_21 [i_5 + 1] [i_5 - 1] [i_5 - 1]))), (45 * 1)));
    }
    var_24 &= min(((var_11 + (1 | var_2))), var_15);
    #pragma endscop
}
