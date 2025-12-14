/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((!(var_0 || var_5))))));
    var_19 = ((((-(min(1006986247102282079, var_15)))) ^ var_4));
    var_20 = (min(var_20, ((0 ? ((-((var_13 ? var_11 : var_4)))) : 12266187685005944006))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((53 ? (3662813066895378085 * var_1) : var_9))) ? (min((((arr_2 [i_0] [i_1] [i_1 - 1]) ^ 18446744073709551615)), (arr_0 [2]))) : (arr_0 [0])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_22 = var_0;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_23 = (max(var_23, (arr_4 [i_0 - 3] [i_3])));
                        arr_10 [i_0 + 3] [i_0] [i_3] [i_3] [i_2] = (((arr_4 [14] [i_1 + 3]) & (arr_8 [i_2 + 1] [i_0] [i_0] [i_0])));
                    }
                    var_24 = 10416350716132778353;
                    arr_11 [9] [i_1] [i_0] = (-39 < 18446744073709551612);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_25 = (max(var_25, (((~((var_3 ? ((64818 ? 24145 : 7405236955789993992)) : 64819)))))));
                    var_26 &= (((((((((arr_9 [i_0] [i_4] [14] [6]) ? (arr_14 [14]) : var_10))) ? var_7 : -120))) ? 8030393357576773262 : (((arr_3 [i_1 + 3]) ? 10416350716132778353 : (min((arr_12 [i_0] [8] [i_4]), 18446744073709551610))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_27 = (min(var_27, (((((((arr_4 [i_5] [i_7]) ? -4807490906059996777 : (arr_24 [i_7])))) ? (arr_4 [1] [i_1]) : (~var_11))))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-0 * (((!(arr_18 [i_1] [i_0] [i_5] [i_6] [i_7]))))));
                            }
                        }
                    }
                    var_28 = ((202 ? (21 >= var_15) : (((arr_9 [i_0] [i_0 + 3] [i_1 + 3] [i_0]) ? -4807490906059996763 : var_11))));
                    var_29 = 3;
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_30 = (min(var_30, (((((((arr_20 [i_8 - 2] [2] [i_8] [i_8] [i_8 + 2] [i_8 + 2]) + 230))) ? 2907788250 : ((max((arr_20 [i_8] [0] [i_8] [i_8 + 2] [i_8 + 1] [i_8 - 2]), (arr_20 [i_8] [12] [i_8] [i_8] [i_8 + 2] [i_8 - 1])))))))));
                                var_31 -= ((~((((2907788250 != (arr_8 [i_0 + 3] [1] [1] [i_10]))) ? (min(1387179030, 0)) : 21713))));
                            }
                        }
                    }
                    arr_33 [i_0] [i_0] [i_0] [i_0 + 1] = (arr_0 [i_0]);
                }
                var_32 = var_11;
                var_33 ^= (min(((((((arr_23 [i_0] [i_0] [i_0] [i_0] [4] [i_1] [i_1 + 3]) ? var_4 : (arr_1 [12])))) ? -var_12 : 1008398107)), (((min((arr_28 [4]), (arr_21 [6])))))));
            }
        }
    }
    #pragma endscop
}
