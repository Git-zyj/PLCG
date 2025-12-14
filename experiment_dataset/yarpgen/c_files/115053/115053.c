/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (~-22857);
    var_20 = (0 != var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((var_14 ? ((65535 ? (var_10 != var_6) : (~65535))) : (var_5 - 11)));
                            var_21 = (max(var_21, (arr_8 [i_0] [i_0] [i_0] [i_0])));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                var_22 -= (((arr_9 [i_0] [i_1] [i_2] [i_3 + 1]) ? (arr_9 [i_3] [i_3] [i_3] [i_3 - 2]) : (arr_9 [i_0] [i_1] [i_3] [i_3 + 2])));
                                var_23 = (11079 | 2147483647);
                                var_24 = (arr_14 [i_1 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_4 + 1]);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_20 [i_2] [i_2] [i_5] [i_2] [i_2] = ((!(((((max((arr_16 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_0]), 1))) ? ((65535 - (arr_16 [i_5] [i_3 + 1] [i_2] [i_2] [i_2] [i_1] [i_0]))) : 1015386302007452574)))));
                                arr_21 [i_2] [i_2] [i_5] [i_2] [i_2] = (((((arr_17 [i_0] [i_1] [i_2] [i_3]) % 65515)) << (!var_18)));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_25 = ((((((((-16 ? 15720800334956350338 : 0))) ? (((max((arr_11 [i_1] [i_1] [i_1] [i_1] [3]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (65533 + -2407357528080284296)))) ? 180 : (arr_9 [i_1] [i_2] [i_3 - 1] [i_6])));
                                var_26 = ((((max((arr_11 [i_1 + 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3]), (arr_15 [i_1 + 1] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_6])))) ? ((1 ? 2407357528080284283 : -7173663242058660674)) : 76));
                                arr_26 [i_0] [i_1] [i_0] [i_1] [i_0] [i_3] [i_6] = ((((!(((180 ? (arr_22 [i_0] [12] [i_3] [i_3]) : (arr_3 [i_0])))))) ? var_2 : 2));
                                arr_27 [i_0] [i_1] [i_2] [i_3] = 13791;
                                arr_28 [i_0] [i_1 + 1] [i_1 + 1] [i_3 + 2] [i_1 - 1] [i_2] [i_6] = 1;
                            }
                        }
                    }
                }
                var_27 -= min((arr_17 [i_0] [i_0] [i_0] [i_0]), var_18);
            }
        }
    }
    #pragma endscop
}
