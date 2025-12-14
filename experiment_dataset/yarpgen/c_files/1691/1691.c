/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 ^= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_6 [i_0] [i_1])));
                                arr_15 [i_3] [i_4] [i_3] [i_3] [i_2] [i_1] [8] = (224 > 112);
                                var_20 += (((arr_6 [i_3] [i_3]) ? (arr_2 [i_0]) : ((((arr_3 [i_2]) > 93)))));
                                arr_16 [i_3] [i_3] [i_2] [i_1] [i_0] = 1990384636391454364;
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_1] = (((arr_10 [i_0] [i_2]) ? (-1725223287924395514 > var_9) : (arr_7 [i_2 + 2] [i_2 + 1])));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_2] = (((arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 4]) ? (arr_11 [i_2 + 2] [i_2 - 2] [i_2 - 4] [i_2]) : (arr_11 [i_2 - 2] [i_2 - 4] [i_2 + 1] [i_2])));

                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [i_5] = ((24 >= (arr_6 [i_1] [i_2 - 4])));
                        var_21 = (arr_0 [i_5] [i_1]);
                        var_22 = -1725223287924395514;
                        var_23 ^= 70368744177663;
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_24 [i_0] [i_6] [i_2] [i_6] = ((((((arr_20 [i_6] [i_2 + 1] [i_2] [i_1] [i_6]) ? 14308 : var_7))) ? (arr_4 [i_2 - 3] [i_2] [i_2 - 2]) : (arr_22 [i_0] [i_6])));
                        var_24 = (min(var_24, var_6));
                        arr_25 [i_1] [i_1] [i_6] [i_6] [i_2] = arr_13 [i_2 + 2] [i_2 - 1];
                    }
                }
            }
        }
        var_25 = (arr_22 [i_0] [i_0]);
        var_26 = (min(var_26, (((-255 > ((14602432525277818819 ? var_4 : 8)))))));
        var_27 = (min(var_27, -2860413153066135366));
    }
    #pragma endscop
}
