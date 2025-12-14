/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, 235));
                        arr_11 [i_3] [i_1] [i_1] = ((((min(var_2, ((14 ? (arr_10 [i_0]) : 3857783563))))) ? ((((max(1, (arr_7 [i_0]))) ? -7389 : -7389))) : (arr_8 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 2])));
                        var_17 = (min(var_17, (((((max(((~(arr_9 [i_0] [i_0] [i_0]))), var_3))) ? (arr_7 [i_3]) : (((((((arr_10 [1]) - 28579)) + 2147483647)) >> (((arr_6 [i_3 + 1] [i_1 + 1] [i_2]) + 9086825495304938803)))))))));
                    }
                }
            }
        }
        var_18 = (max(((((arr_9 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_1 [i_0])))), ((max(var_12, var_10)))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_19 ^= max((((arr_8 [i_4] [i_4] [i_4] [i_4]) ? ((max(var_13, (arr_2 [i_4])))) : -2722)), (((max(var_11, 7388)))));
        arr_14 [i_4] = (~86);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_25 [11] [i_5] [i_5] [i_5] [i_5] = (var_5 / var_0);
                        var_20 = (arr_6 [i_7 + 1] [i_7] [i_7 - 2]);
                    }
                }
            }
        }
        var_21 = (max(var_21, (((((arr_20 [i_4]) ? var_14 : 7377))))));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_22 = (max(((-1606375239 ? var_12 : (arr_6 [i_11 + 2] [i_10] [i_10 + 2]))), ((-(arr_6 [i_11 + 1] [i_10] [i_10 - 1])))));
                                var_23 -= (max(var_15, var_4));
                                var_24 *= ((max(var_13, -7384)));
                            }
                        }
                    }
                    var_25 = ((+(max((~var_6), (arr_18 [8] [4] [i_9] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_26 = (min(var_26, -112));
                                var_27 = (arr_35 [i_4] [i_4] [i_4] [i_4] [5] [i_4] [i_4]);
                                var_28 = (((max(-199209124, 0))) ? (arr_33 [i_8 - 1] [7] [i_8 + 2] [i_8] [i_8 - 1] [i_8 + 2]) : -199209124);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 3; i_14 < 16;i_14 += 1)
    {
        var_29 = (max((min(var_11, -63)), (arr_40 [i_14 + 2])));
        var_30 = (min(var_30, ((max(1, (((max(1, 22762)))))))));
    }
    var_31 = (min(var_31, ((max(var_1, ((-120 ? 7402 : 3456127189)))))));
    #pragma endscop
}
