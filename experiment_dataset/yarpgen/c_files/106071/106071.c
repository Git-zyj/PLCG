/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_0);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? ((((((arr_0 [i_0]) + 9223372036854775807)) >> (arr_1 [i_0])))) : ((((((((arr_0 [i_0]) - 9223372036854775807)) + 9223372036854775807)) >> (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, var_14));
                    var_21 = (max(var_21, (var_2 & -18132)));
                    arr_9 [i_0] [i_0] [i_2] = ((-18131 ? 1 : -47));
                }
            }
        }
        arr_10 [i_0] = (((arr_4 [i_0]) == (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = var_4;

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            var_22 = ((-5750363337730185505 != (arr_12 [i_3] [i_4 + 1])));
            var_23 -= (~var_16);
            var_24 &= ((!(var_4 / var_1)));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_25 = (55 | 10827034585674735994);
        arr_23 [i_5] = (((min(var_18, 51)) >> (18131 - 18122)));
        var_26 = (max(var_26, ((((-var_9 ^ (min(var_7, var_4)))) >> (var_17 - 97)))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_27 &= (((arr_11 [i_6]) ? 4294967292 : (arr_18 [i_6] [i_6] [i_6])));
        var_28 = var_7;
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7] = ((~(min((~32), 32))));
        arr_30 [i_7] [21] = ((5750363337730185505 ? 18157 : 5750363337730185505));
        arr_31 [i_7] = var_10;
        var_29 &= (((((28907 ? (arr_28 [i_7]) : var_3))) ? -1 : (max(((-5750363337730185505 ? 245 : (arr_28 [i_7]))), (arr_28 [i_7])))));

        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_30 = ((((max((arr_27 [i_7]), (max(var_13, (arr_27 [17])))))) & ((~((var_3 | (arr_26 [i_7] [i_8])))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_31 = ((~((~((2593984959 ? (arr_40 [i_7] [i_7] [7] [i_7] [i_7]) : var_11))))));
                            var_32 = (((var_7 + var_12) ? (9048163858065721224 >= 1) : (var_7 == -7271)));
                            var_33 = 255;
                        }
                    }
                }
            }
            arr_42 [i_8] [i_8] [i_7] = ((var_18 ? ((max(((~(arr_36 [i_7] [i_8] [i_8] [i_8]))), var_9))) : (max((((var_14 & (arr_40 [i_7] [i_7] [i_8] [i_8] [i_8])))), -1))));
            var_34 = (max(var_34, (((min(((222 ? -18129 : -5750363337730185489), (0 / 1))))))));
        }
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_35 = (min(var_35, (max(28906, 122))));
            arr_45 [i_12] = ((max((min(-1, -28903)), (((var_1 ? -1 : 1))))));
            arr_46 [6] [i_7] = max((((!((var_4 && (arr_28 [i_7])))))), ((var_5 | (arr_35 [i_7] [i_7] [i_12] [i_12]))));
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        var_36 *= (((((((-9110122723903650556 ? var_12 : (arr_48 [i_13])))) + -var_8)) / (((var_5 ? 223 : ((min(223, var_13))))))));
        var_37 = (arr_41 [i_13] [i_13] [i_13] [i_13]);
        var_38 = (max(var_38, var_15));
    }
    #pragma endscop
}
