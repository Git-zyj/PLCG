/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(0, 0));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_16 *= ((-(arr_3 [i_1 - 1] [i_1 + 1])));
            arr_6 [i_0] [1] [i_1] |= ((((!(arr_1 [i_1 + 2])))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = ((0 ? ((24 ? 27 : (max(3106540792129138443, -24)))) : 246));
        var_17 = (min(var_17, (((((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2])))) ? (!1) : (((!(arr_1 [i_2])))))))));
        var_18 = (max(var_18, (((((max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2])))) ^ (((1 >= (arr_2 [i_2] [i_2])))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (max(var_19, ((min(1, ((3106540792129138443 < (arr_12 [i_3 + 1] [i_3 + 1]))))))));
                var_20 = (((((arr_10 [i_3 - 1]) | (arr_10 [i_3 - 1]))) ^ (arr_10 [i_3 - 1])));
                arr_14 [i_3] [i_4] = (((((arr_11 [i_3 - 1]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 - 1])))) ? ((24 ? var_10 : (-127 - 1))) : ((((arr_11 [i_3 - 1]) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, ((((max(-82, ((4208366875 ? (arr_11 [i_7]) : 15340203281580413191)))) * (((-(3 - -3)))))))));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_22 += (((((+((min((arr_5 [i_7]), (arr_21 [i_8]))))))) - (min((min(15340203281580413173, -11)), (((var_0 ? 1845968709 : (arr_28 [i_6] [i_7] [i_8]))))))));
                        var_23 = (-(271421727 / 1));
                        var_24 = ((!((min(var_13, (arr_17 [i_7 - 1]))))));
                    }
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_7] [i_6] [i_7] [i_9] = ((!((!(arr_3 [i_7] [i_9])))));

                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            arr_36 [i_5] [i_7] [i_10 + 2] = (((arr_29 [i_7] [i_7 - 1] [i_7 + 1] [i_9] [i_9 - 1] [i_7]) >> (arr_29 [i_7] [i_7] [i_7 + 2] [i_7 + 1] [i_9 - 1] [i_7])));
                            var_25 = (max(var_25, (arr_26 [i_6] [i_9 - 2] [i_10] [i_10])));
                            var_26 = (((arr_27 [i_7] [i_10 + 2] [i_10]) < (arr_29 [i_6] [i_9] [i_10] [i_10 + 2] [i_10] [i_7])));
                            arr_37 [i_5] [i_6] [i_7 + 2] [i_7 + 1] [i_7] [i_9] [i_10] = arr_11 [i_7 - 1];
                            var_27 = (min(var_27, (((var_0 ? (arr_2 [i_9] [i_10 + 2]) : (arr_33 [i_7] [i_10 + 1] [i_10] [i_10] [i_10]))))));
                        }
                        for (int i_11 = 4; i_11 < 9;i_11 += 1) /* same iter space */
                        {
                            var_28 = (((arr_17 [i_9 - 2]) ? (((arr_17 [i_9 + 1]) ? (arr_17 [i_9 - 1]) : (arr_17 [i_9 - 2]))) : (arr_17 [i_9 - 1])));
                            var_29 ^= ((!(((4208366869 ? -24 : -3462)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 9;i_12 += 1) /* same iter space */
                        {
                            arr_43 [i_5] [i_7] [i_6] [i_7 + 2] [i_9] [i_12] [i_12] = (((!2099564572) && (((-9223372036854775807 - 1) && (arr_10 [i_7])))));
                            arr_44 [i_5] [i_5] [i_5] [i_6] [i_7] [i_9] [i_12] = (-24 * 0);
                        }
                    }
                    var_30 = ((!((((arr_35 [i_5] [i_7] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7]) ? (arr_35 [i_6] [i_6] [i_6] [i_7 + 1] [i_7] [i_7] [i_7]) : -3462)))));
                    var_31 += var_6;
                    arr_45 [i_7] [i_6] [i_7] [i_7 - 1] = (((((arr_29 [i_6] [i_7] [i_7] [i_7 + 2] [i_7] [i_7]) ? (arr_29 [i_5] [i_6] [i_6] [i_7 - 1] [i_7 - 1] [i_7]) : (arr_29 [i_6] [i_6] [i_7] [i_7 - 1] [i_7] [i_7]))) ^ (arr_29 [i_6] [i_6] [i_7 + 1] [i_7 + 1] [i_7] [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
