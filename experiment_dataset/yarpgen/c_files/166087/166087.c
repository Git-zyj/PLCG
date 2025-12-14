/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((~(max(0, (((arr_3 [i_0] [i_0 + 2]) ? 16383 : 27565))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = ((-4269642891892027384 != ((((-1904932497 ? (arr_3 [i_0] [i_1]) : 6310)) >> (((arr_8 [i_3] [i_3] [i_2] [i_1 - 1]) - 1314076453808958126))))));
                                var_21 = (max(var_21, ((((max((arr_8 [i_2 + 2] [i_2] [i_0] [i_0]), (arr_8 [i_2 - 1] [i_2 + 2] [i_2] [i_1 + 2]))) | (arr_8 [i_2 - 1] [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }
                    var_22 &= ((-((0 ? (arr_1 [i_0 - 1] [i_1]) : 15360))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = max((arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 + 1]), (((arr_17 [i_6 - 1] [i_6 - 1] [i_5] [i_6] [i_6]) ? 2472326931 : var_9)));
                                arr_18 [i_5] [i_5] [i_2] [i_1 - 1] [i_1 - 1] = (min(var_8, (!1822640365)));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        var_24 -= ((var_3 + ((max(((max(1822640333, (arr_5 [i_0] [i_0] [i_0] [i_0])))), (((arr_1 [i_9 + 1] [i_0 + 1]) / (arr_25 [i_9 + 1] [i_8] [i_0] [i_7] [i_0 + 1] [i_0]))))))));
                        var_25 = var_2;
                        var_26 = ((-0 == ((3962255148 << (255 - 238)))));
                        arr_27 [i_9] = min(((((arr_5 [i_0 + 1] [i_8 - 1] [i_9 + 3] [i_0 + 1]) - (arr_5 [i_0 + 2] [i_8 - 1] [i_9 + 2] [i_0 + 2])))), ((255 ? var_12 : (arr_10 [i_0 + 2] [i_8 + 1] [i_9]))));
                    }
                }
            }
            arr_28 [i_0] [i_0] = ((((~(~43937))) << ((((~((~(arr_8 [i_0] [i_7] [i_0] [i_0]))))) - 1314076453808958146))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_27 ^= ((((((((arr_15 [i_0 - 2] [i_0]) + var_9))) ? ((6628580872670402804 ? 3962255150 : var_16)) : (arr_3 [i_0] [i_10]))) < (arr_24 [i_0] [i_0] [i_0] [i_0])));
            arr_31 [i_0 + 1] [i_10] = (max(var_16, var_6));
            var_28 = 65535;
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        {
                            var_29 = (arr_38 [i_0] [i_10] [i_0] [i_12 - 1] [i_13]);
                            arr_42 [i_0] [i_0] [i_11] [i_11] [i_12] [i_13] [i_13] = var_13;
                            var_30 = (min(var_30, 7));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_50 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 2] = (((arr_11 [i_0 + 2] [i_0 + 1] [i_14 + 1] [i_15 - 1]) >> ((((((var_11 ? var_4 : 255))) && var_1)))));
                        var_31 += ((1 > (arr_38 [i_15 - 1] [i_15 - 2] [i_0 + 2] [i_15 - 2] [i_0])));
                    }
                }
            }
        }
    }
    var_32 = (min((min(var_9, (254 == 1167911938))), 0));
    #pragma endscop
}
