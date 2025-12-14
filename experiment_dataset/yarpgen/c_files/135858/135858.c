/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_18 = (min(-12970, ((((-9223372036854775807 - 1) >= 5)))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        var_19 |= ((6 ? 1632181473196618473 : 34));
                        arr_10 [i_2] [i_0] [i_2 + 1] [10] = (((((arr_6 [i_0] [1] [i_2 - 1] [i_3]) > ((~(arr_3 [i_1]))))) && (((~((var_1 ? var_9 : var_17)))))));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_20 = (arr_3 [i_4]);
                        var_21 ^= (((((((-8531183736817908727 ? (arr_13 [i_1]) : var_5))) ? var_12 : var_12)) < ((((968426927 > 0) && (var_17 / var_15))))));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_22 = (((arr_5 [i_0]) ? (((((min(34, (arr_4 [i_1] [i_4 + 1])))) ^ ((max((arr_1 [i_1] [i_4]), (arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2]))))))) : (((((min((arr_3 [i_1]), 1)))) ^ var_8))));
                            var_23 = max((max((max(40, var_4)), -127)), (((arr_9 [i_0] [i_1] [i_2 + 3] [i_4] [i_4] [i_5 - 1]) << (arr_0 [i_4 + 1]))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_19 [1] [1] [1] [i_0] = ((arr_18 [i_0]) ^ (max((arr_16 [i_0] [i_0] [i_0] [0] [2]), var_10)));
                            var_24 = (arr_2 [i_0]);
                            arr_20 [i_0] [i_2] [i_0] = var_17;
                            arr_21 [i_0] [i_1] [i_2 + 3] [i_0] [i_2 + 3] = (arr_16 [i_0] [i_1] [i_0] [i_4 + 1] [i_0]);
                            arr_22 [i_0] [i_1] [i_2 + 2] [i_2 + 3] [i_1] [i_6] [i_6 - 1] |= ((((min((0 == 123), var_11))) ? ((((var_11 >= (arr_16 [i_0] [i_1] [i_1] [i_4 - 2] [i_6]))) ? (min(5346552190376854753, 188)) : ((0 ? -5086310188531745467 : var_16)))) : ((max((max(var_4, var_7)), (arr_8 [i_0] [i_1] [i_2 + 3] [i_4 - 1] [i_6 - 1]))))));
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_25 = ((var_16 ? var_13 : (arr_13 [i_0])));
                    arr_25 [4] [i_0] = (arr_0 [i_7]);
                }
                for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_26 = (min(4036378098, (((!(arr_13 [i_0]))))));
                    var_27 = ((((arr_6 [i_0] [i_1] [i_0] [i_8 - 1]) ? (arr_6 [i_0] [i_0] [i_0] [i_8 + 1]) : var_6)));

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        var_28 = (max(var_28, (((!(arr_7 [i_8 - 2] [i_8] [i_8]))))));
                        arr_32 [i_0] [i_0] [i_8] [i_8] = (((arr_18 [i_0]) >> (((arr_31 [i_8] [i_1] [i_9 - 1] [i_8 - 2] [i_1] [0]) + 3361723622299471959))));
                        arr_33 [8] [i_0] = (arr_12 [i_8 - 1] [i_8 - 1]);
                    }
                    var_29 += max((arr_16 [i_0] [i_1] [i_1] [i_1] [i_8 + 1]), (max((arr_13 [i_1]), (min((arr_1 [i_0] [i_0]), (arr_28 [i_0] [i_1]))))));
                }
                arr_34 [i_0] [i_0] [i_1] = (min((((arr_11 [i_0] [13] [i_0] [i_1] [i_1] [i_1]) % (arr_31 [i_0] [i_1] [6] [i_0] [6] [i_0]))), ((((((arr_29 [i_0] [i_0] [i_0] [i_0]) ? 4833101237517086586 : 3084))) ? (arr_13 [i_0]) : (max(4294967291, -2233805249478230063))))));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        var_30 += ((max((min(var_8, var_13)), (arr_37 [i_1] [i_1] [i_10] [i_11 + 2]))));
                        var_31 = (min(var_31, ((((var_14 ? (((((arr_38 [i_0] [i_1] [i_0] [i_11]) >= -18737)))) : (arr_18 [i_1])))))));
                        var_32 = (min(var_32, ((max((max((((0 ? (arr_12 [i_0] [i_1]) : var_4))), ((5716184559992932820 ? -3 : var_1)))), ((max((-4441715837496268673 * var_2), ((min((arr_23 [i_0] [i_1] [i_1] [i_1]), (arr_40 [i_0] [i_0] [i_1] [i_1] [i_11] [2]))))))))))));
                    }
                    var_33 = 6948675318180721654;
                    arr_42 [i_0] [i_0] [i_10] = var_16;
                    arr_43 [i_0] [i_0] [i_10] = (arr_1 [i_0] [i_1]);
                    var_34 ^= min(249, -16993);
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    arr_48 [i_0] [3] [i_1] [i_12] = ((var_8 ? (!var_12) : (arr_6 [i_12] [i_12 + 3] [i_12] [i_12 + 2])));
                    var_35 |= (((arr_29 [i_0] [i_0] [i_1] [i_0]) >= (-6240882364998681810 <= 58010)));
                }
                for (int i_13 = 0; i_13 < 0;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_36 += (((((arr_31 [i_15 + 1] [i_15] [i_15] [i_15] [i_15 + 1] [i_15 - 1]) / (arr_52 [i_15 + 1] [i_15] [i_15] [1] [i_15 - 1] [7]))) > ((((!(arr_8 [i_15 - 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1])))))));
                                var_37 = 18446744073709551615;
                                var_38 += ((!(arr_52 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])));
                            }
                        }
                    }
                    arr_55 [i_0] [i_1] [i_1] [i_1] = -40;
                }
                for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
                {
                    var_39 = -3662237511451801058;
                    var_40 = (max((!254), ((((arr_3 [i_0]) <= var_6)))));
                }
            }
        }
    }
    var_41 |= 222;
    #pragma endscop
}
