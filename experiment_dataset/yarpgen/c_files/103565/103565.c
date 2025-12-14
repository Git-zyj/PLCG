/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min((max((min(10, var_6)), (min(2562658028966660506, 2032928122)))), (min((min(var_12, 15884086044742891109)), ((max(var_2, -426007154))))));
    var_19 = (min(-2032928122, 9275582717953994070));
    var_20 = (min(((max(((min(var_1, var_11))), (min(var_7, var_15))))), (min((min(15884086044742891109, 4451527046138771464)), ((min(239, 0)))))));
    var_21 = min(((max((max(var_0, var_9)), (max(0, var_7))))), (min((min(var_2, 0)), (min(var_10, var_16)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_22 += 4903370744729723433;
                arr_8 [i_0] = 86;
                var_23 = 7567540539467518383;
                arr_9 [i_0] [i_1] [i_1] = 18446744073709551615;

                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_24 &= 1;
                    arr_12 [i_0] [i_0] [i_2] [1] [i_0] = 0;
                    var_25 = 1;
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_26 = 231;
                    arr_15 [i_0] [i_0] [6] [i_4] = 0;
                    arr_16 [i_0] [i_0] = 0;
                }
            }
            var_27 -= -2032928122;
            arr_17 [i_0] [i_0] = 70368744177663;
            var_28 = -2032928122;
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            arr_22 [i_0] [i_0] = 6;
            var_29 ^= 1;
            var_30 = 48268;

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_31 = 5086423901156927798;
                    var_32 ^= 448;
                    var_33 = 239;
                    var_34 = -64;
                }
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    var_35 = 18446744073709551615;
                    arr_33 [i_0] = 8722034341184345206;
                }
                arr_34 [10] [i_0] [i_0] [i_0] = 120;
            }
            arr_35 [i_0] = 2147483520;
        }
        var_36 = 18446744073709551615;
        var_37 = 1;
    }
    for (int i_9 = 4; i_9 < 10;i_9 += 1)
    {
        var_38 = (max(var_38, ((min(((min((min(var_5, (arr_1 [i_9]))), ((min((arr_2 [i_9] [i_9 - 1] [0]), var_3)))))), (min((min(var_10, 8388608)), (min((arr_3 [0] [14] [2]), 2101955830)))))))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_39 = (max(((min(((min(var_14, 0))), (min(var_8, -86))))), (min((min(var_10, (arr_23 [i_9] [i_9] [1] [i_9 - 3]))), ((max(124, (arr_6 [12] [i_9] [i_10] [i_10]))))))));
            var_40 = (min((min((min((-127 - 1), (arr_30 [i_9] [i_10] [i_9]))), ((min(var_9, (arr_7 [i_9] [i_9] [i_9] [i_9])))))), (min((min(var_13, 1)), ((min(2121386198, (arr_18 [i_9] [i_9] [i_9]))))))));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            var_41 |= (min((min(((min(var_7, (arr_2 [i_11] [i_9] [i_9])))), (max((arr_41 [i_11] [i_11] [i_11]), var_15)))), (min((min((arr_14 [i_9] [i_9] [i_9] [i_9]), 24699)), ((max(var_9, var_6)))))));
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 4; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        {
                            var_42 = (min(var_42, ((max(((min((min(var_12, 240)), ((min(var_3, 0)))))), (max((min(511, var_3)), (min((arr_4 [i_11] [i_13] [i_14 + 1]), (arr_10 [i_9 - 4] [i_9] [i_9] [i_9 - 4] [i_9]))))))))));
                            var_43 = (min(((min(((min(0, (arr_39 [i_9])))), (min(-86, 28))))), (max(227, 2121386198))));
                            var_44 |= min((max(((min((arr_24 [i_11]), (arr_20 [i_9 - 1] [i_11])))), (min(6692182662487365103, (arr_50 [i_9] [i_12] [i_12]))))), ((max((min(var_1, var_2)), ((min(var_12, 1)))))));
                            var_45 = (min((-32767 - 1), 203));
                        }
                    }
                }
            }
            var_46 |= min((min(((min(69, 0))), (min(var_3, (arr_32 [i_9 - 2] [3] [i_9] [i_9 + 1]))))), ((min(((min(var_11, var_4))), (min(129, var_7))))));
        }
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            arr_55 [i_9 + 1] [4] [i_9] = (min((min((min(-1785152539, var_10)), ((min(209, 25))))), ((min(34, -2121386214)))));
            arr_56 [i_15] [i_9] = (min((min(((min((arr_51 [i_9 - 4] [i_9 - 4] [3]), (arr_45 [i_9] [i_15 - 1])))), (max((arr_50 [i_9] [i_9] [i_15 - 1]), (arr_54 [5]))))), ((min((min(1, var_8)), (max(var_8, 0)))))));
        }
        arr_57 [i_9] = (min((max((min(var_11, (arr_40 [i_9 - 1]))), ((min(var_2, 0))))), ((max(((min(var_13, (arr_46 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 3] [i_9] [i_9])))), (min((arr_2 [i_9 + 1] [i_9 - 4] [i_9 - 2]), (arr_10 [i_9] [5] [0] [1] [1]))))))));
    }
    #pragma endscop
}
