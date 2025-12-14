/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_6, ((861831434 ? (var_10 == 3433135862) : 3433135862))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_4] = (i_0 % 2 == zero) ? ((min((((arr_15 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((arr_2 [i_0]) - 3688592089597552737)))), (var_11 && 220)))) : ((min((((arr_15 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0]) << (((((arr_2 [i_0]) - 3688592089597552737)) + 1423511883750014562)))), (var_11 && 220))));
                                var_16 = (var_3 - 6237822975816416243);
                                arr_17 [i_0] [20] [i_0] [i_3] [i_4] = 166;
                                var_17 = ((((-(arr_12 [i_0] [i_0 - 2] [i_1 + 1] [i_2 + 3] [i_4]))) != ((min((arr_12 [i_0] [i_0 - 2] [i_1 - 2] [i_2 - 2] [i_2 - 2]), 36)))));
                                arr_18 [20] [22] [22] [22] [i_0] &= (((arr_9 [i_1]) || var_13));
                            }
                        }
                    }
                }
                var_18 = -24;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                var_19 = ((((var_6 ? (arr_8 [i_5 + 3] [i_5 + 3] [i_6 + 1] [i_6]) : var_2)) | -6237822975816416244));
                arr_24 [i_5] = ((!(var_11 - var_3)));
                var_20 ^= ((((((min(var_8, 1503318703))) - (max(var_7, var_12)))) + 1615812296));
                var_21 = ((126 ? (min(var_10, -1503318698)) : (((var_6 ? -4184 : (arr_0 [i_6 + 1] [2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            {
                var_22 = (11289004201146749102 == -2125549772);
                var_23 = (5685756484631565060 ^ 203);
            }
        }
    }
    #pragma endscop
}
