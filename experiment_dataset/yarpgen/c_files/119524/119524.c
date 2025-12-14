/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 44467;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_15 += 1048575;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((var_13 || (((arr_4 [i_0]) <= 84))));
                    var_17 = ((var_10 ? (arr_1 [i_0 - 2]) : ((var_2 ? (arr_5 [10] [17] [i_0 - 2] [i_0 - 1]) : (arr_0 [i_0] [i_0])))));
                    var_18 -= (((35625 ^ 20) - (arr_4 [6])));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_19 ^= 1;
                        var_20 = (((((var_4 ^ (arr_2 [i_2 - 1] [i_0])))) & ((var_2 ? (-127 - 1) : (arr_3 [i_0])))));
                        var_21 = (max(var_21, (0 < 20)));
                        arr_9 [i_0] = (arr_7 [i_0] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_0] = ((arr_14 [i_0] [i_1] [i_1] [i_1] [14]) || (arr_5 [i_0 + 1] [i_1] [i_4] [i_0 - 2]));
                            var_22 = var_12;
                            var_23 ^= 248;
                            arr_16 [6] [i_5] [i_0] [i_2 + 1] [i_5] = (((arr_7 [i_0 - 1] [i_0 - 1]) ? var_7 : (arr_8 [i_0] [i_1] [i_1])));
                            var_24 = (min(var_24, (((var_5 <= (var_12 > 16))))));
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 *= (((arr_1 [i_0 + 1]) << (((arr_1 [i_0 - 1]) - 137))));
                            var_26 = 170;
                        }
                    }
                }
            }
        }
        arr_20 [i_0 + 1] [i_0] = (var_10 / 17214);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {

                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        var_27 = (((arr_11 [i_0] [i_9 + 1]) ? 1 : (arr_8 [i_0] [i_9 + 1] [i_9 - 1])));
                        var_28 = (((0 && 53806622) || (((186869950497124803 ? var_1 : 0)))));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, ((((41 ? (arr_12 [i_11] [i_11 + 1] [i_11 + 1] [i_11]) : 275399532)) <= (((((arr_28 [7] [i_7] [16] [7]) || var_11))))))));
                            var_30 += ((((-(arr_6 [i_10] [1] [1]))) * ((-1 + (arr_32 [i_10] [i_10] [i_10] [i_10])))));
                            var_31 = ((-42 >= (arr_5 [i_0 - 1] [i_0 - 3] [i_11 + 1] [i_11])));
                            var_32 = (arr_34 [i_0] [i_0] [i_8] [i_0 - 1] [i_0]);
                        }
                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_33 += (((arr_18 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_7] [i_12] [i_12]) - 0));
                            var_34 &= ((~((18446744073709551615 << (60982 - 60927)))));
                        }
                        var_35 = (max(var_35, ((((arr_23 [i_0] [i_0 - 1] [i_10]) ? (arr_23 [i_0 - 3] [i_0 + 1] [i_8]) : 149)))));
                        arr_38 [i_0] [9] [i_0] [i_0] = -2909408333593573181;
                        var_36 ^= (((-1 + 2147483647) << (var_1 - 61103)));
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_37 = 223;
                        var_38 = (min(var_38, (60 - 792304411)));
                        var_39 -= ((((-264379641 ? (arr_6 [i_0] [i_0] [0]) : (arr_21 [i_0 + 1] [i_0 + 1] [i_8]))) ^ -1));
                        var_40 |= (arr_19 [i_13] [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_42 [i_0 - 1] [i_0] [i_7] [i_8] = (var_0 / -1850342289);
                }
            }
        }
        var_41 = ((-697883344 ? ((1 % (arr_3 [i_0]))) : ((((arr_18 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) ^ (arr_33 [i_0 + 1] [2] [i_0] [i_0] [i_0]))))));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_42 = max(((((((((arr_43 [i_14]) && 1)))) > (((arr_44 [i_14]) ? var_10 : var_2))))), (max((arr_43 [i_14]), ((6 << (1975995748 - 1975995733))))));
        var_43 = (min(var_43, ((((-457091180 <= 38) - ((min(0, (((14479 >= (-2147483647 - 1))))))))))));
        var_44 ^= (((max(((-(arr_44 [12]))), 5628)) >= (max((((-2557559419819535186 ^ (arr_43 [i_14])))), (max(2147483647, (arr_44 [i_14])))))));
        var_45 = (max(var_45, 42));
    }
    var_46 = (((var_6 / var_5) ? ((var_4 ? var_10 : 175)) : var_4));
    #pragma endscop
}
