/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_11 / ((var_3 ? 24757 : -6931501959045507990)))) < (max((1254133066 && var_6), 6423301657839822148))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 15463057966364308194;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_14 [i_0] = (((((-6931501959045507990 ? 32762 : 101))) | ((var_11 ? var_5 : (arr_13 [i_3])))));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_17 [i_3] [i_0] = var_3;
                            arr_18 [i_0] [i_1] [i_4] [i_3] [i_0] &= (var_7 ^ var_0);
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_23 [0] [i_0] [12] [i_0] [12] [9] = (((((var_6 ? var_8 : 118))) ? 549138505 : (arr_12 [i_0] [1] [1] [1] [1])));
                            var_15 = (min(var_15, (arr_11 [i_0] [i_3] [i_3] [i_3] [i_0])));
                            var_16 = ((193247529 || var_0) && var_13);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_26 [i_0] [i_0] [i_2] = (-6931501959045507991 + 0);
                            var_17 *= ((~((var_5 ? (arr_11 [i_0] [i_3] [i_0] [i_0] [i_0]) : (arr_22 [i_0] [i_0] [i_2] [i_3] [i_6])))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = 3185790620;
                            arr_30 [i_0] [i_0] [i_2] [i_3] [i_0] = (((6931501959045507989 ? (arr_0 [i_0]) : -32748)));
                            arr_31 [i_0] [i_0] [i_2] [i_0] [i_0] = (~-6931501959045507981);
                        }
                    }
                }
            }
        }
        arr_32 [i_0] [i_0] = (((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) % ((12 ? 7928 : var_13))));
    }
    for (int i_8 = 1; i_8 < 17;i_8 += 1)
    {
        arr_35 [i_8] = ((((var_12 ? var_7 : 0))));
        arr_36 [i_8] = (15615 - 1);
        var_18 += ((((max(1, var_7))) ^ (arr_34 [i_8 + 2])));
    }
    #pragma endscop
}
