/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((((min((arr_2 [i_0]), (arr_0 [i_0])))) ? (((arr_3 [i_0]) ? (arr_1 [i_0]) : var_3)) : (arr_3 [i_0]))))));
        arr_5 [i_0] = ((-2882817361229442566 | (((-(min(var_12, var_11)))))));
        var_14 = (arr_3 [i_0]);
        var_15 = (min(var_15, (((-(((((var_7 && (arr_3 [i_0])))) ^ (((var_9 + 2147483647) << (((var_11 + 7206660702052414514) - 18)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = (arr_7 [6]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = (((((var_3 ? var_8 : 0))) ? (arr_2 [i_1 - 1]) : ((1 ? (arr_6 [i_1]) : var_11))));

            for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_17 = (arr_11 [i_3] [i_2] [i_1]);
                var_18 = ((((((arr_13 [i_1 + 1]) - var_6))) ? ((0 - (arr_8 [8]))) : (var_9 * var_13)));

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    arr_19 [i_4] = var_6;
                    arr_20 [i_1] [i_2] [i_3] [i_4] = (((((arr_14 [i_3] [i_2] [i_1]) + var_7)) + var_7));
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_19 = ((525413101 + (arr_0 [i_5])));
                    var_20 = ((~(arr_13 [i_1 - 1])));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (arr_3 [i_6])));
                    var_22 *= (((arr_24 [i_3 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 1]) ? (arr_24 [i_3 - 2] [i_1 + 1] [i_1 - 3] [i_1 - 1]) : var_2));
                    arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] = (((arr_26 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (arr_26 [i_1 - 3] [i_1 - 1] [i_1 + 1]) : (arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 3])));
                    var_23 = ((((((arr_3 [i_1]) ? var_13 : (arr_16 [i_1] [i_2] [i_2] [i_6])))) & ((var_1 & (arr_22 [i_1] [i_2])))));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (((arr_13 [i_2]) - (arr_0 [1])))));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_33 [i_7] [i_7] [i_3] [i_2] [i_7] = var_1;
                        var_25 = var_1;
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_26 = (((var_11 + 9223372036854775807) << (((arr_23 [i_1] [6] [i_1 - 3] [i_1] [i_1] [i_1]) - 14000))));
                        var_27 *= ((((arr_13 [i_1]) & 1717475804)));
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_28 *= (((arr_2 [i_1 - 1]) - (arr_2 [i_1 - 3])));
                        arr_38 [i_1] [i_2] [i_7] [i_3] [i_10] = (arr_31 [i_10] [i_1] [i_7] [i_7] [i_1] [i_1]);
                        arr_39 [i_7] [i_7] [i_3] [i_2] [i_2] [i_7] = (arr_29 [i_1] [i_7]);
                        var_29 = ((~(arr_16 [i_1] [i_1] [i_1] [i_1 - 3])));
                    }
                }
                arr_40 [i_1] [i_2] [i_2] [i_3] = var_1;
            }
            for (int i_11 = 2; i_11 < 13;i_11 += 1) /* same iter space */
            {
                var_30 ^= (arr_3 [i_11]);
                var_31 = ((12465 ? 846741633 : 15547578130773889610));
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_32 = ((((((arr_11 [i_1] [i_12] [i_12]) ? var_7 : var_10))) ? (arr_2 [i_12]) : var_9));
            arr_48 [i_1] [i_12] = (((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2]) ? (arr_21 [i_1] [i_1] [i_12] [i_12] [i_12] [i_12]) : (arr_29 [i_1 - 1] [10])));
            var_33 ^= -var_11;
            var_34 = var_13;
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_51 [i_13] [i_13] = (((arr_8 [i_1 - 2]) ? (arr_8 [i_1 + 1]) : (arr_8 [i_1 + 1])));
            var_35 = -0;
        }
        arr_52 [i_1] = ((var_2 ? ((var_12 ? (arr_2 [i_1]) : (arr_7 [i_1 - 3]))) : var_10));
    }
    for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_36 |= var_2;
        arr_56 [i_14] = (min((((0 >= 1) && ((max(var_0, 6))))), ((((var_12 ? (arr_30 [i_14] [i_14] [i_14] [i_14] [i_14]) : var_0)) != (arr_18 [i_14] [i_14] [i_14] [i_14] [i_14 - 3])))));
        var_37 = arr_9 [i_14];
    }

    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        var_38 = ((-((var_4 ? (arr_58 [i_15]) : (arr_58 [i_15])))));
        arr_59 [i_15] [i_15] = (max((((((3769554195 >> (7137879084702964604 - 7137879084702964574)))) ? (((1 ? (arr_58 [i_15]) : var_12))) : (arr_57 [i_15]))), ((18596 ? (arr_57 [i_15]) : var_13))));
    }
    #pragma endscop
}
