/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = var_11;
    var_16 = (min(var_16, ((var_13 ? (((var_6 == ((-24627 ? var_13 : -16324))))) : 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = var_2;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_18 = ((72123066 ? var_1 : 1));
                            var_19 = var_9;
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_20 = (-72123067 & var_11);
                var_21 ^= (~221272178);
            }
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_22 = (~var_8);
                            var_23 = ((var_2 ? var_10 : (6564 || 25916)));
                            var_24 = 5334695454318441309;
                        }
                    }
                }
                var_25 = var_0;
                var_26 ^= (~-95);
            }
            var_27 = -16319;
        }
        var_28 = 15;
        var_29 = var_2;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_30 -= (max(((-(~var_13))), (((max(11742, 47))))));
                    var_31 = var_10;
                    var_32 = 1;

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_33 = (!var_1);
                        var_34 = ((~(max(var_2, (~var_0)))));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 15;i_13 += 1)
                    {
                        var_35 = (var_11 - 30603);
                        var_36 = var_3;
                        var_37 = var_5;
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                    {
                        var_38 = (min(var_38, 5));
                        var_39 = (((var_10 != var_9) >> (var_4 - 98133145261230923)));
                        var_40 = ((max((min(42881180, var_11)), 1)));
                    }
                    for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
                    {
                        var_41 = ((-121 / (((1 == (6449 < 20958))))));

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            var_42 = (max(var_42, 8796803280838960718));
                            var_43 = ((var_5 ? var_11 : var_4));
                        }
                        for (int i_17 = 0; i_17 < 16;i_17 += 1)
                        {
                            var_44 = (max(var_1, -30));
                            var_45 = (max((~64612), var_3));
                            var_46 = (max(var_46, (((-812118277 ? 1 : var_10)))));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_47 ^= min(1, (((1972872303 - (max(2992908076, var_9))))));
                            var_48 = 1;
                            var_49 = (1 && var_5);
                        }
                        for (int i_19 = 0; i_19 < 16;i_19 += 1)
                        {
                            var_50 = var_6;
                            var_51 = ((~(max(var_10, 891136082))));
                        }
                    }
                    var_52 = (max(var_52, (((var_7 > (((1 ? var_5 : ((min(var_5, 53)))))))))));
                }
            }
        }
    }
    #pragma endscop
}
