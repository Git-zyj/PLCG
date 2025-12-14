/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_10 = (((arr_9 [i_2] [i_1 + 2] [i_1] [i_1 - 1] [i_1]) ? (arr_11 [i_0 + 1] [i_1]) : ((((!(arr_8 [i_1 + 2] [i_0 - 4] [7])))))));
                        var_11 = var_5;
                        arr_12 [i_3] [i_2] [i_0] [i_1] [i_2] [i_0] = ((((max((max(19, 3022712192)), (arr_0 [i_0 - 1])))) ? (arr_1 [9]) : -20));
                    }
                }
            }
        }
        var_12 += (((~13062713438654482700) ? (((arr_10 [i_0] [i_0 - 4] [i_0 - 4] [i_0 + 1] [1]) ? (arr_1 [9]) : var_9)) : (((!(arr_2 [i_0]))))));
        arr_13 [i_0] = (max((arr_1 [i_0 + 1]), (~13062713438654482721)));

        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_13 = ((arr_5 [i_5 + 2] [6]) ? ((-(arr_17 [i_0 + 1] [i_4] [i_5 - 1] [i_5 - 1]))) : (arr_10 [i_0] [i_4] [i_4] [i_0] [i_5]));
                arr_19 [1] = (((arr_3 [i_4] [i_5 - 1]) ? (arr_3 [i_0] [i_5 + 1]) : (arr_3 [i_5] [i_5 + 2])));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_14 &= 1;

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_15 = ((((((~(arr_15 [i_0] [i_4] [i_4])))) ? (max((arr_21 [2] [1] [i_0] [i_0]), 4397979402240)) : ((min((arr_25 [i_7]), (arr_17 [i_0] [i_4] [i_6] [i_7])))))));
                    var_16 = 65527;
                    var_17 = (min(var_17, (((!(arr_26 [i_0] [i_7]))))));
                }
                var_18 &= (((arr_17 [i_0] [i_4] [i_4 + 4] [5]) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_21 [i_0] [i_4] [i_0] [4])));
                var_19 &= (arr_1 [i_0]);
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_20 = (arr_2 [1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_21 = (arr_0 [i_10]);
                            arr_35 [i_0] [i_0 + 1] [i_0 + 1] [4] [i_0 + 1] = var_7;
                        }
                    }
                }
                var_22 = (arr_11 [i_0] [1]);
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
            {
                var_23 = (-128775654 / 1073741823);
                arr_38 [1] [i_4] = (max(var_8, (arr_15 [i_0] [i_0] [i_0])));
                var_24 = (((arr_33 [i_0 - 3] [i_0 - 3] [i_0 - 3] [1] [9]) || ((((~(arr_3 [i_4 + 3] [0])))))));
            }
            arr_39 [i_0] = var_8;
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_25 = (+(((arr_42 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_13]) ? (arr_16 [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 4]) : (arr_26 [i_4] [i_4 - 1]))));
                            arr_49 [i_13] [i_13] [i_12] [i_4] [i_13] = (arr_22 [i_0] [i_4 + 3] [i_0 - 4]);
                            arr_50 [5] [i_4] [i_12] [i_13] [i_13] = (!(arr_21 [i_0] [i_4] [i_12] [i_13]));
                        }
                    }
                }
            }
            var_26 = min((arr_44 [i_0 - 3] [i_0 + 1] [i_4 + 2] [i_4 + 1]), (((arr_44 [i_0 - 1] [i_0 + 1] [i_4 + 4] [i_4 + 4]) ^ 1)));
            var_27 = 0;
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 8;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_28 |= (arr_30 [i_17] [i_15]);
                        arr_57 [i_0] [3] [i_16] [i_16] [i_17] = var_4;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 9;i_19 += 1)
                {
                    {
                        var_29 = (min(0, var_7));
                        arr_64 [i_0] [i_18] [i_18] [4] [i_18] = ((var_5 ? (((((((arr_48 [i_18]) / (arr_7 [1] [i_15] [1] [i_19])))) ? (arr_27 [i_0 - 3] [i_15] [i_15]) : (arr_58 [i_0])))) : (((arr_8 [i_19 - 1] [i_19 - 2] [i_19 - 2]) ? 3221225471 : (arr_48 [i_18])))));
                        var_30 &= (!(max((arr_6 [i_19 - 2] [i_19] [1] [1]), (arr_6 [i_19 + 1] [i_19] [5] [i_19]))));
                    }
                }
            }
        }
        for (int i_20 = 2; i_20 < 7;i_20 += 1)
        {
            var_31 = -1638598177;
            var_32 = var_7;
            var_33 = (arr_30 [1] [i_20 + 1]);
        }
        var_34 = (min(10652, 5384));
    }
    for (int i_21 = 1; i_21 < 1;i_21 += 1)
    {
        var_35 = (!-var_9);
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 23;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 20;i_23 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        for (int i_25 = 2; i_25 < 22;i_25 += 1)
                        {
                            {
                                var_36 = ((var_2 || ((!(((~(arr_72 [i_23 - 1] [i_22] [i_21]))))))));
                                var_37 = (0 - var_2);
                                var_38 = 13062713438654482724;
                                var_39 = (max((arr_75 [i_21] [i_21]), ((min(var_3, (arr_80 [i_23 + 2] [i_22] [i_22] [22]))))));
                            }
                        }
                    }
                    var_40 = (min(var_40, (((min(7, (arr_76 [i_21] [4] [i_21 - 1] [i_21])))))));
                }
            }
        }
    }
    var_41 = var_0;
    var_42 = (max(var_6, var_1));
    var_43 = (max(-512835059, ((((max(var_4, var_5))) ? (!var_7) : var_6))));
    #pragma endscop
}
