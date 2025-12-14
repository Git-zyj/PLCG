/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [19] [19] [19] [i_3] [i_3] = 186;
                        var_12 = (arr_0 [i_0]);
                        var_13 = (max(var_13, ((((min((((203 << (((arr_3 [i_0] [13] [1]) - 236))))), (min((-9223372036854775807 - 1), 78)))) < ((((arr_4 [i_0] [i_0] [i_0]) / var_9))))))));
                        var_14 ^= (arr_5 [i_1] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_15 = var_1;
                        var_16 = (((arr_2 [i_0]) == var_9));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_17 -= (var_6 > 51);
                        var_18 = (((((((-127 - 1) + 2147483647)) << (((arr_13 [i_0] [i_1] [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 + 3]) - 22)))) * (((208 > ((max(78, 208))))))));
                        var_19 = 433689207;
                    }
                    var_20 = var_0;
                }
            }
        }
        var_21 &= (((max((max(var_0, (arr_18 [i_0] [i_0] [i_0] [i_0]))), 219))) - var_3);
    }
    var_22 = var_2;
    var_23 = (min((var_5 || 70), (max(var_5, var_3))));
    var_24 = 2818572409683690327;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((min(var_8, (max(((var_6 ? var_1 : -2030839734350672443)), -75)))))));
                            var_26 = (((((max((arr_15 [i_9]), (arr_7 [i_6])))) ? (var_1 | 13312660666201086129) : 117)) + ((((((max((arr_29 [i_6] [i_7 - 1] [i_6]), 3669362977))) || (var_8 & var_4))))));
                        }
                    }
                }

                for (int i_10 = 1; i_10 < 17;i_10 += 1)
                {
                    arr_34 [i_6] [i_7] [i_6] [i_10] = (max((arr_11 [i_6]), (((178 - var_11) + (205 - var_7)))));
                    arr_35 [14] [i_7] &= (max(var_9, ((((max((arr_31 [i_6] [i_7]), var_6))) >> (-14 + 26)))));
                    var_27 = (((((((var_0 <= (arr_23 [i_6] [i_7]))) ? var_2 : (max(189, (arr_32 [i_6] [i_6 + 1] [i_6 + 2])))))) * (min(((((arr_27 [i_6 + 1] [i_6 - 1] [9]) * 171))), (max((arr_29 [i_6] [i_6] [i_6 + 1]), var_8))))));
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    var_28 = 206;
                    var_29 += -11;
                    var_30 = var_8;
                    var_31 = var_9;
                }
                for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                {
                    var_32 *= var_5;

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_33 = var_4;
                        arr_42 [i_6] = var_3;
                        arr_43 [i_6] [i_6] [8] [i_12] [i_6] [i_6 - 1] = var_5;
                    }
                    var_34 = min((arr_31 [i_6] [i_6]), var_1);
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    arr_48 [i_14] [i_7 + 1] [8] &= (min(78, (((var_3 % var_1) ? (min(-14, 477540902)) : (53 * 68)))));
                    var_35 = var_10;

                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        var_36 = (min(var_36, (((!((min(var_6, (arr_11 [i_15])))))))));
                        var_37 = var_3;

                        for (int i_16 = 1; i_16 < 17;i_16 += 1)
                        {
                            var_38 = (min(var_38, ((min(60, (~var_4))))));
                            var_39 = 0;
                            var_40 = (((((var_3 >= 0) ? var_0 : (max(var_7, 205)))) & ((min((arr_41 [i_6] [i_7 + 1] [i_7] [i_7 + 1] [i_7]), (var_9 * var_6))))));
                            var_41 = 73;
                            arr_55 [i_6] [i_15] [i_6] [12] [i_6] &= ((+(((arr_17 [i_6] [i_6 - 1] [i_14] [i_6]) / 50))));
                        }
                        var_42 *= 1;
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        arr_59 [i_6] [i_6 - 1] [i_6] [i_6] = max(((((min(var_7, (arr_23 [i_6] [i_7 + 1]))) >= (((var_3 ? var_3 : (arr_20 [11] [11]))))))), (((arr_21 [i_6 - 1]) >> 0)));
                        var_43 *= (((min((!var_4), 6864036205433203201)) - 86));
                        var_44 = (min(var_44, ((min((((((arr_3 [i_6] [i_6 + 1] [i_6]) ? (-127 - 1) : (arr_47 [i_6 + 1] [i_6 + 2] [i_6]))) * var_1)), ((((arr_10 [i_6] [i_6] [i_6] [i_6 - 1]) != 59))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 3; i_18 < 19;i_18 += 1) /* same iter space */
                    {
                        var_45 = ((var_1 == (arr_1 [9])));
                        arr_62 [i_14] |= var_8;
                        var_46 = var_6;

                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_66 [i_6 + 1] [i_6 + 1] [17] [i_6] [i_6 + 1] = (-6864036205433203201 <= 8780515604429730194);
                            arr_67 [i_6 + 2] [i_6 + 2] [i_6] [i_6] [i_6 + 2] = 110;
                        }
                        var_47 = (arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [7]);
                    }
                    for (int i_20 = 3; i_20 < 19;i_20 += 1) /* same iter space */
                    {
                        arr_70 [i_6] [i_6] [i_6 + 2] [i_6 + 1] = arr_61 [i_6] [i_6] [i_6 - 1];
                        arr_71 [i_6] [i_7] = 18446744073709551614;
                    }
                }
            }
        }
    }
    #pragma endscop
}
