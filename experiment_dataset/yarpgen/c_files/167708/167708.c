/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((min(var_9, ((var_0 >> (var_7 - 15123))))), var_13);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_0] = ((-((((var_6 ? var_4 : var_5)) % (arr_0 [i_1])))));
            var_16 = 460723025;
            arr_5 [i_1] [i_0] = var_14;
            var_17 = (min(-90, (min(((((arr_1 [i_0] [i_1]) == var_1))), var_10))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 ^= var_8;
            var_19 = (72057594037927935 >= 72057594037927915);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_10 [i_0] [i_3] [i_0] = (max(18374686479671623681, 65528));
            arr_11 [i_3] = 61008;
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 = var_14;
                    var_21 ^= ((min(var_11, (613 ^ var_2))));
                }
            }
        }
        var_22 = (min(var_22, (((1350740162253609452 ? (arr_9 [i_0] [i_0] [i_0]) : var_0)))));
        var_23 = var_11;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_24 = (((arr_19 [i_6]) ? ((1 % (arr_19 [i_6]))) : ((min((arr_19 [i_6]), (arr_19 [i_6]))))));
        arr_20 [i_6] = (max(4282917435, 4282917435));
        var_25 = (arr_18 [i_6]);
        var_26 = var_3;
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_27 = ((-(min((arr_0 [i_7 - 2]), (arr_23 [i_7])))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 22;i_10 += 1)
                {
                    {
                        var_28 += (max((arr_32 [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_10 - 2]), (((var_11 == (((var_11 ? var_8 : 15))))))));

                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            var_29 = (((((((arr_33 [i_7] [i_8] [i_9] [i_10 - 3] [i_11 + 2] [i_11]) * 4282917435)))) << (-122 + 122)));
                            var_30 = (min(3449, 81));
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            var_31 = 254;
                            var_32 = ((((max((arr_24 [i_10 - 2]), (arr_24 [i_10 - 4]))))) * (min(-1, 3282739159525360279)));
                        }
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            var_33 = var_1;
                            arr_43 [i_13] [i_8] [i_9] [i_8] [i_7 + 1] = (((var_2 + 2147483647) >> ((((var_3 ? (min((arr_42 [i_13] [i_10] [i_9] [i_8]), (arr_16 [i_9]))) : (((min(3440, (arr_25 [i_8] [i_13]))))))) - 3866562335))));
                            var_34 = (min((min((max((arr_26 [i_7] [i_8] [i_8]), (arr_42 [i_13] [i_10] [i_9] [i_7]))), (8176 >= 15317))), (min(((min(var_8, 81041831))), -4294959119))));
                        }
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_46 [i_7] [i_8] [i_9] [i_9] [i_8] = (((((arr_16 [i_14]) ? 18374686479671623694 : ((((arr_1 [i_10] [i_14]) * var_2))))) <= var_10));
                            var_35 |= arr_3 [i_10] [i_8] [i_9];
                            arr_47 [i_14] [i_8] [i_9] [i_8] [i_7] = (((((var_10 ? ((-(arr_42 [i_14] [i_9] [i_8] [i_7]))) : -79))) ? (min((arr_29 [i_10 - 3] [i_8] [i_9] [i_8]), ((min(var_2, 1))))) : ((((arr_14 [i_7 + 1] [i_8] [i_9] [i_10]) >> (122 - 98))))));
                        }
                        var_36 = (((var_10 ? -3469 : var_6)) ^ (min(121, -971431395)));

                        for (int i_15 = 2; i_15 < 21;i_15 += 1)
                        {
                            var_37 = 4294959120;
                            var_38 = (max(var_38, var_9));
                        }
                        for (int i_16 = 3; i_16 < 21;i_16 += 1)
                        {
                            var_39 = 18374686479671623681;
                            var_40 = (min((arr_34 [i_16 + 2] [i_8] [i_9] [i_8] [i_16] [i_7]), (((arr_34 [i_7 - 1] [i_8 - 1] [i_9] [i_8] [i_16] [i_10]) ? (arr_16 [i_16 - 2]) : (arr_34 [i_7] [i_8 - 1] [i_9] [i_8] [i_10 - 4] [i_16 - 1])))));
                            var_41 = (min(((((4294959120 ? 72057594037927935 : 0)) ^ (((min(var_2, -26182)))))), ((min(((-122 ? var_0 : var_8)), (arr_34 [i_7] [i_8] [i_9] [i_8] [i_8] [i_9]))))));
                            var_42 = (min(((((arr_7 [i_10 - 2] [i_10]) && (arr_36 [i_8] [i_7] [i_8 + 1] [i_16 - 3] [i_16] [i_16])))), var_1));
                            var_43 = var_14;
                        }
                    }
                }
            }
        }
        var_44 = (((var_6 ^ (min((arr_44 [i_7 - 2] [i_7]), -887722436)))));
        arr_52 [i_7] [i_7] = (min((((arr_32 [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1]) - (arr_32 [i_7] [i_7] [i_7] [i_7 - 2] [i_7 - 2]))), (arr_32 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1])));
    }
    var_45 = -1;
    var_46 = (min(var_1, 26084));
    #pragma endscop
}
