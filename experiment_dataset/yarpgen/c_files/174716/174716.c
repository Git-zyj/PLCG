/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 *= -6247322511771831167;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((var_1 != (max(((min(var_11, 1))), (var_6 + var_6)))));
                    var_18 = (((var_10 ? (arr_3 [i_2 + 2]) : (arr_2 [i_1 - 1]))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 = ((((min(-21041, 1))) ? 1 : 1));
                        var_20 = (min(var_20, (((((((var_6 && (arr_10 [i_0]))) ? 1 : var_8))) | var_16))));
                        var_21 *= ((2860117479 << ((~(~1)))));
                        var_22 = (min(var_22, ((max(((max(var_5, 1))), (arr_0 [i_2] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_23 -= (arr_6 [i_0] [i_4]);
                        var_24 += (--1);
                        var_25 = (min(var_25, ((((arr_0 [i_0] [i_0]) * 1)))));
                        var_26 = (min(var_26, var_13));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_1] [i_0] = ((((((var_15 ? (arr_9 [i_0] [i_0]) : var_5)) > var_6)) ? (((max((arr_9 [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_0]))))) : (!var_2)));
                        var_27 *= var_8;
                        var_28 = (min(var_28, var_0));
                    }
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        var_29 = ((!((((((var_4 ? var_10 : var_14))) ? var_16 : (var_16 ^ -11))))));
                        arr_21 [i_6] [10] [10] [i_0] &= var_8;
                        arr_22 [i_6] [i_0] [i_0] [i_0] = (max(3850258941555194701, 1));
                    }
                    var_30 = (max(var_30, (((var_12 && ((max((((var_12 <= (arr_6 [i_0] [6])))), (max(var_2, (arr_7 [i_2] [i_2] [i_0] [i_0])))))))))));
                    var_31 = ((-((var_6 ? var_10 : (arr_9 [i_0] [i_0])))));
                }
            }
        }
    }
    var_32 = ((max(-26, 0)));
    var_33 += ((((-((1 ? var_1 : var_12)))) <= var_11));
    #pragma endscop
}
