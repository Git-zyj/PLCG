/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 38;
    var_18 = -var_15;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = (!((((arr_12 [i_2 + 3] [i_0]) + (arr_12 [i_2 + 2] [i_0])))));
                            var_19 = 185;
                            arr_14 [i_0] [i_1 - 2] [i_4] [i_2 + 1] [i_0] [i_0] [i_3] = 1515042589;
                            var_20 = ((!((max((((arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]) / 185)), (-7004 * 1))))));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, (((70 ? (((!(((arr_0 [i_5]) <= (arr_3 [i_0] [i_1])))))) : ((-(arr_7 [i_2 + 1] [i_1 + 2] [i_1]))))))));
                            var_22 = 185;
                            var_23 = (((((!(arr_16 [i_3 + 1] [i_3 - 1] [i_2 + 1] [i_1 + 1] [i_1])))) % ((-(arr_16 [i_3 - 1] [11] [i_2 + 2] [i_1 + 1] [11])))));
                        }
                        var_24 = (i_0 % 2 == zero) ? ((((arr_12 [i_0] [i_0]) << (!var_9)))) : ((((((arr_12 [i_0] [i_0]) + 2147483647)) << (!var_9))));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_25 = (((((arr_9 [3] [3] [i_1]) % 116))));

                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_24 [i_6] [i_1 - 2] [i_6] [i_7] |= (((~var_8) && (((185 % ((max(31301, 167))))))));
                    var_26 = ((((((var_12 ? 18 : (arr_15 [i_7] [i_1]))) & ((max((arr_2 [i_0]), (arr_0 [i_0])))))) ^ var_2));
                }
                for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_27 = (((((max((arr_6 [i_0] [i_0]), 186)))) % (max(-7955972152398032309, 196))));
                    var_28 = (arr_5 [i_0] [11] [i_0]);
                }
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
            {
                var_29 = ((var_10 >= (!var_12)));
                arr_31 [i_0] [i_0] [i_0] = ((2 + ((((var_0 + -6391374930410690828) - -3680746632410004409)))));
                arr_32 [i_0] = (~1013026901);
                var_30 = (arr_23 [1] [i_1 - 1] [i_1 - 3] [i_9]);
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_10] [i_0] = (arr_0 [i_10]);
                var_31 = (max(var_31, ((((arr_10 [i_1 - 4]) ? (~4398046511040) : ((((arr_17 [i_0] [i_1 + 3] [i_10] [i_10]) * (arr_30 [i_1 + 1] [i_1 + 1] [i_1 + 3])))))))));
            }
            arr_36 [i_0] [i_0] = (-2147483647 - 1);
            var_32 = (min(var_32, var_3));

            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                arr_40 [i_0] [i_0] [i_11] [i_11] = 176;
                var_33 = (((!(arr_12 [i_1 + 3] [i_0]))));
                arr_41 [i_0] [i_0] [6] = (arr_38 [i_1] [i_1 - 1] [i_1] [i_11 - 1]);
                var_34 = (((arr_18 [i_1] [i_1 + 2] [i_11 + 2]) ? 8676 : ((((arr_11 [i_11 + 2] [i_11 + 1] [i_11] [i_0] [i_11 + 1] [4]) || (arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                var_35 = var_6;
            }
        }
        var_36 = (max(((max(55, 7))), (max((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : -7955972152398032301)), (((var_8 <= (arr_0 [i_0]))))))));
        arr_42 [i_0] = ((max(var_13, (arr_5 [i_0] [i_0] [i_0]))) <= (((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0]))))));
    }
    var_37 = (max(var_4, (~var_5)));

    for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
    {
        arr_45 [i_12] = ((((max((arr_21 [i_12 + 2] [i_12 - 1]), (arr_5 [i_12 + 3] [i_12 - 1] [i_12])))) | (max(var_0, (163 ^ 71)))));
        var_38 = max((max((arr_6 [i_12] [i_12]), -var_16)), ((198 >> (((arr_17 [i_12] [i_12 - 1] [i_12] [i_12]) - 77)))));
    }
    for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
    {
        var_39 = (((arr_47 [3] [i_13 + 1]) || ((((-1 ? 9705 : -4398046511040)) == 147))));
        var_40 = 1;
        var_41 = (((-1 - 0) - (arr_48 [i_13 - 1])));
    }
    #pragma endscop
}
