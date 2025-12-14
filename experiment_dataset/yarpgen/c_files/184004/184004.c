/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 2639845796680532197;
    var_11 = 60554;
    var_12 *= ((((min(((min(var_0, 60554))), var_3))) ? ((min(var_4, var_3))) : (min(var_3, (4981 % var_8)))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 *= ((!((((arr_1 [1] [i_0]) ? (arr_1 [0] [i_0 - 1]) : 60554)))));
        var_14 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_1 [i_0] [i_0]);
                    var_15 = 60577;
                }
            }
        }
        var_16 = var_9;
    }
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_17 = var_1;
            var_18 = (min(var_18, (((min(((min(60554, 40861))), (((-3853922212029780266 + 9223372036854775807) << (var_6 - 35920)))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 1] = (min((((!(!4958)))), (arr_2 [i_3])));
                        var_19 = (max(var_19, var_6));
                        arr_22 [i_3] [i_5] [i_3] [i_3] = ((!0) ? (min((min(var_1, (arr_0 [i_3]))), ((((arr_12 [1] [i_4]) ? (arr_1 [i_3] [i_3]) : (arr_5 [i_3] [i_5] [i_5] [i_6])))))) : 60591);
                        arr_23 [i_3] [i_3] [i_3] [i_6 + 1] = (max((arr_11 [i_6]), -3853922212029780266));
                    }
                }
            }
        }
        var_20 = -3853922212029780266;
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 8;i_9 += 1)
                {
                    {
                        var_21 = min(-91759335229065510, (min(var_4, 2357848578197192659)));
                        var_22 = var_6;
                        arr_30 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 1] = (arr_5 [i_9] [i_9 + 2] [i_3 - 2] [i_3 - 2]);
                        var_23 = 4980;
                    }
                }
            }
        }
        var_24 = (min(((((4970 ? var_6 : (arr_19 [i_3] [i_3 - 1]))) | -91759335229065512)), (min(60578, (min(-91759335229065510, 24674))))));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_35 [i_10] = ((((!60565) - (2147483648 ^ var_2))) | ((((arr_8 [i_10] [i_10] [i_10]) & var_0))));
        var_25 = var_5;
        var_26 = (min(((var_0 ? var_1 : (var_1 | 60578))), (((-(arr_3 [i_10] [i_10] [i_10]))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                {
                    var_27 = ((((min(((min(var_9, var_7))), 24674))) >> (((var_6 << var_7) - 35902))));
                    arr_42 [i_10] = (max((((4974 & (var_6 <= var_9)))), (max(-2357848578197192660, (((var_0 ? (arr_1 [i_10] [i_10]) : var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
