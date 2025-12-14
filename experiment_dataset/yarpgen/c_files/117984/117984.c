/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = 32384;
                var_19 = (max(var_19, ((max(((((max(var_16, var_15))) ? (-546691437 >= -913632439) : var_18)), var_3)))));
                var_20 = -1998170070;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] |= 1;

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            arr_17 [i_0] [1] [i_0] [i_0] [i_0] = var_9;
                            var_21 = (max(var_21, (+-32385)));
                            arr_18 [i_4] [i_3 + 2] [i_2] [i_1] [7] [11] [i_0] = (var_5 ? 1 : ((-4162 ? 27375 : 4161)));
                            var_22 = (~17533944);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_0] [3] [i_1] [i_1] [i_0] [i_0] = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0 + 2]) : (arr_9 [i_0] [i_0 + 1])));
                            arr_23 [i_0] [16] [i_3 + 2] |= (((arr_20 [i_0 + 1] [i_3 - 1] [i_3 - 1]) ? var_3 : (arr_20 [i_0 + 2] [i_3 + 2] [i_3 - 1])));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_23 = ((-(arr_5 [i_0 + 1])));
                            var_24 = ((!(arr_1 [i_0 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_30 [i_7] [21] [i_0] [6] [i_1] [i_0] [i_0] = ((~((4171 ? 35 : 1811155087))));
                            arr_31 [i_2] [i_3] &= (((var_16 >= 1) ? var_12 : ((var_3 ? -11226 : var_4))));
                            var_25 = ((((((arr_14 [i_3]) ? -1116650204 : var_18))) ? (arr_20 [i_0] [i_0] [i_3]) : -15204));
                        }
                    }
                    var_26 = (~var_17);
                    var_27 = (arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_42 [i_1] [i_1] [i_8 + 4] = ((((((max(var_11, -1550636443)) + 1))) ? (~-913632413) : (((((-22 ? var_3 : -408950374))) ? (arr_39 [i_0 + 2] [i_0 + 1] [i_0 + 2]) : var_18))));
                                arr_43 [i_9] [i_0] [i_0] = ((((((arr_6 [i_0 - 1] [i_8 + 3] [i_10]) ? -1761312097 : -1748464280))) ? (max(var_9, (arr_13 [3] [3] [i_8 - 1] [i_8 + 2] [i_8]))) : (arr_6 [i_1] [i_8 + 3] [i_9])));
                            }
                        }
                    }
                    var_28 = (max(var_28, (((931402516 ? (arr_29 [i_0] [i_8] [i_0] [i_1] [i_0] [i_0]) : (arr_9 [i_1] [i_1]))))));
                }
            }
        }
    }
    var_29 = -1099674468;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                arr_48 [i_12] [i_12] [i_11] = (1 || 1);
                var_30 += ((!((((((1234568682 ? 1935749558 : -21912))) ? var_10 : -1003905411)))));
            }
        }
    }
    var_31 = 1282923063;
    #pragma endscop
}
