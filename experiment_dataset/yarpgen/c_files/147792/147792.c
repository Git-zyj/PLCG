/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((-1 ? var_10 : 65533))) * -1));
    var_13 = ((var_4 ? (((((var_6 ? var_11 : var_2))) ? var_3 : ((var_7 ? var_6 : 0)))) : 536870911));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] &= (((arr_1 [i_0]) ? ((((arr_0 [i_0] [i_0]) ^ (arr_1 [i_0])))) : 536870911));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 -= (arr_7 [10] [i_0]);
                    var_15 += var_0;
                }
            }
        }
        var_16 ^= (arr_3 [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_17 = 3758096384;
                        var_18 = (min(var_18, (((15 % (arr_5 [i_5] [i_5] [4]))))));
                        arr_18 [i_0] [i_5] = (((((((var_1 < (arr_13 [3] [3] [i_4]))) ? 3758096384 : (max(var_0, (arr_1 [i_4])))))) ? (arr_1 [i_0]) : (arr_3 [i_5] [i_3] [i_0])));

                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_19 = 0;
                            var_20 = 536870910;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_21 = (max(var_21, (((!((!(arr_7 [i_0] [i_0]))))))));
                            var_22 = (+(((arr_7 [i_0] [i_0]) ? (arr_0 [i_4] [i_4]) : 1)));
                            var_23 += arr_7 [i_0] [i_0];
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_24 |= ((((arr_27 [10] [2] [i_3] [i_8 - 1] [4]) ? 3758096384 : (arr_22 [i_8] [i_5] [i_4] [i_3] [i_0]))) << (((arr_15 [i_8 - 1] [i_4] [i_4] [i_4] [i_3] [i_0]) + 764657392)));
                            var_25 += var_3;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_26 = (arr_0 [2] [i_9]);
                            arr_31 [i_0] [i_0] [i_4] [i_0] [i_5] [i_3] = ((var_2 ? (arr_22 [i_0] [i_3] [i_4] [10] [i_0]) : ((((min(0, 28))) ? var_7 : (arr_12 [i_0] [i_4] [i_0])))));
                        }
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_27 = (max(var_27, 1302302888845969169));
            var_28 = (arr_33 [3] [i_10]);
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_37 [i_0] = ((3758096385 ? var_6 : 172));
            var_29 = (max(((((var_1 ? (arr_5 [i_11] [i_11] [i_0]) : (arr_23 [i_0] [i_0] [13] [i_0]))))), (((arr_32 [i_0] [i_11]) % var_8))));
            arr_38 [i_0] [i_0] [i_11] = ((((((((var_8 ? var_3 : var_11))) ? ((17089608082858778040 ? -32767 : 1)) : 31))) ? ((((((arr_32 [i_11] [i_0]) ? 76 : (arr_15 [i_0] [i_11] [i_11] [i_0] [i_0] [i_11])))) ? (arr_3 [9] [9] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_11]))) : ((((max(var_6, (arr_9 [i_11])))) ? (((arr_4 [i_0]) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_9 [i_0]))) : (arr_12 [i_0] [i_0] [i_0])))));
            var_30 = var_9;
            var_31 = var_8;
        }
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_32 -= -0;
        var_33 = var_5;
        var_34 += (+-255);
    }
    #pragma endscop
}
