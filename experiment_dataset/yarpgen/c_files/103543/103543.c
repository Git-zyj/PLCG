/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((-32291 ? 50915 : 181));
                    var_13 -= (min(-74, (((arr_6 [i_0] [i_0]) ? var_8 : (arr_5 [6])))));
                    var_14 = (max(var_14, (((((min(var_3, var_6)) != var_7))))));
                    arr_11 [i_1] [i_1] = var_10;

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_15 = (min(var_11, 0));
                        var_16 = (min(((min((~var_8), 181))), (max((((2047 <= (arr_2 [i_3 + 1])))), 2472427888))));
                        var_17 = (((40594 >> 1) < (max(var_3, (arr_12 [i_0 - 2] [i_1] [i_2 + 1] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_18 = (arr_9 [i_0 + 1] [i_2 + 2] [i_2] [i_2 + 1]);
                        var_19 = (min(8191, 255));
                        var_20 = (max(4294967295, 3067846078));
                    }
                }
            }
        }
    }
    var_21 += var_8;
    var_22 = ((!(!var_5)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_5] [i_7 - 1] = (min(3115229513, -67));
                    arr_25 [6] [i_6] [i_7] [2] = ((((min(((~(arr_16 [12]))), ((max(41, -31))))) + 2147483647)) >> (2047 - 2020));
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_28 [6] [i_6] [i_6] [i_6] = (max(((max(258, -256))), (max(((min(259, var_1))), (arr_14 [i_6] [14] [i_8] [i_5] [i_5])))));
                    var_23 = var_1;

                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_24 = (max(1, var_3));
                        arr_31 [5] [i_9 + 1] [i_8] [i_9] [i_6] [i_6] = ((~(arr_1 [i_5] [i_8 - 2])));
                        var_25 = ((-((min(-67, 0)))));

                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            var_26 = ((max(9049005909716324550, (arr_26 [8] [8]))) & (((0 / (arr_2 [i_6])))));
                            var_27 = max((101 & -42), 184);
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_28 = (min(var_28, (((~((min(0, 116))))))));
                        arr_37 [i_5] [i_6] [i_8] [1] [i_11] = (((((max(0, 0)))) << ((((max(255, (1 <= 2047)))) - 228))));
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {

                            for (int i_14 = 2; i_14 < 8;i_14 += 1)
                            {
                                var_29 = (~1600881969);
                                arr_44 [i_12] [i_5] [i_12] [i_5] [i_5] = -1002953375;
                            }
                            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                            {
                                var_30 = 1600881962;
                                var_31 *= var_8;
                                var_32 = (max(var_32, ((((181 < (arr_40 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                            }
                            for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                            {
                                arr_53 [i_16] [i_16] [i_16] = max((((max((arr_6 [i_5] [i_13]), 68697068)) >> (2047 == 17179869183))), (max(67108863, ((2147483647 ? -32762 : var_12)))));
                                var_33 += (min((arr_4 [i_5]), (((1 > (arr_51 [i_5] [i_13] [i_13] [i_5] [i_6] [i_6] [i_5]))))));
                                var_34 = (~4294967295);
                            }
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                            {
                                var_35 = (max(var_35, 1));
                                var_36 = (!var_7);
                                arr_58 [i_12] [i_5] [i_12] [i_12] [i_5] [i_5] = (0 <= 32757);
                            }
                            var_37 = (max((arr_19 [i_6] [i_13]), ((((181 ? 255 : -1))))));
                            var_38 -= (155 / 3167);
                        }
                    }
                }
                var_39 = (min(var_39, (!17)));
                var_40 = (max(var_40, (~181)));
                var_41 &= 2147483647;
            }
        }
    }
    #pragma endscop
}
