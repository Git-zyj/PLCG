/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_9;
    var_20 = var_3;
    var_21 = var_12;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_22 = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_23 -= (arr_9 [1] [1] [i_2] [i_2]);
                                var_24 = (min(var_24, ((((arr_2 [i_0 + 1]) ? 8869612524181234037 : ((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))))))));
                                arr_15 [2] [2] [0] [i_4] [i_4] |= (((arr_4 [2] [10] [i_2 - 2]) ^ (((max(1, 246))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] = (max(-7942719865362317521, (max((((242 ? 1 : 1))), 2745689263807059666))));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_25 ^= (((arr_8 [i_2 - 2] [i_0 - 1] [1] [i_0 + 2]) - 2745689263807059666));

                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            arr_21 [i_6] = ((var_1 & (arr_6 [i_0] [i_1])));
                            var_26 = 27;
                            var_27 = var_7;
                        }
                        arr_22 [11] = (((((68 > (arr_6 [i_1] [i_5])) ? 242 : (29405 && 203)))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_28 = ((((((((1 ? 1 : 220))) ^ (((arr_13 [i_5] [i_0] [10] [i_0] [i_0] [i_5]) ? (arr_6 [i_0] [i_1]) : 3113797422))))) ? (arr_23 [i_2]) : (min((((4006237024 ? 2 : 96))), (arr_17 [3] [i_1] [10] [i_1])))));
                            arr_25 [i_0] [i_1] [i_2 - 2] [i_5] [14] = (((((1 ? (arr_3 [i_0 + 3]) : -61))) ? ((((((arr_12 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0 + 3]) * var_7))) ? ((((arr_13 [i_2] [i_0 + 4] [0] [i_5] [10] [i_5]) * var_9))) : (max(3294776891314749551, 1)))) : -3294776891314749535));
                            arr_26 [6] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = var_16;
                            var_29 -= ((-((-755716056 ? 61 : 121))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_2] = ((min(((740322005 ? 0 : 5348372485349095936), (((64 - (arr_12 [i_0] [i_0] [14] [6] [i_0] [i_0 + 2]))))))));
                        var_30 &= (arr_1 [i_2]);
                        arr_30 [i_0 + 3] [i_1] [i_1] [0] [i_8] = (arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [3] [i_0]);
                    }
                }
            }
        }
        var_31 = (~755716055);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = 147;
        arr_34 [9] = arr_31 [i_9];
        var_32 = (((arr_32 [i_9]) * (arr_32 [i_9])));
        var_33 = (((arr_31 [i_9]) ? ((var_18 ? (arr_32 [i_9]) : (arr_32 [i_9]))) : (arr_32 [i_9])));
    }
    var_34 |= ((((max(var_7, var_18))) ? var_2 : (max(var_7, (max(var_10, var_16))))));
    #pragma endscop
}
