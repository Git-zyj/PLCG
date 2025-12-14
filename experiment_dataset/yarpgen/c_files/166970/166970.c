/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (145 ^ 102);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [2] = var_13;
        var_16 = (+-110);
        var_17 *= ((-4501275075715902340 ? (var_4 - 145) : 4294963200));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 = -5675;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_2] [i_2] = ((-(!8576200768148909413)));
                            var_19 = (((arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1]) <= ((max(var_12, 1)))));
                            var_20 = (min(var_20, ((((((((arr_5 [i_1]) ? (arr_7 [i_0] [i_3]) : (arr_9 [i_3] [i_2] [9]))))) ? var_8 : var_5)))));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_21 = (170 + 18446744073709551615);
                            arr_20 [i_3] [i_3] [i_3] [i_2] [i_3] = (((arr_3 [i_0]) ? ((((min(var_5, var_12))) ? ((var_12 ? 10537 : var_3)) : (((arr_19 [i_2] [i_2]) ? var_8 : var_5)))) : ((max(83, 145)))));
                            var_22 = (((var_2 - (arr_13 [i_2] [i_2] [i_2 + 1] [i_2] [i_2]))));
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            var_23 |= (min(((((arr_11 [i_2 + 1] [i_3] [i_6] [i_6 - 1]) <= (arr_11 [i_2 - 1] [i_2 + 1] [i_3] [i_6 + 1])))), (((arr_11 [i_2 + 1] [i_6] [i_6] [i_6 - 1]) + var_9))));
                            arr_24 [i_2] [6] [11] [10] [i_2] [i_3] [11] = (((((arr_2 [i_2]) ? ((-(arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] [i_6] [i_6]))) : var_13))) ? ((-((17135 ? 1 : 25)))) : ((min(var_5, 4294967295))));
                        }
                        var_24 = var_13;
                        var_25 = ((~(((arr_10 [i_2 + 1] [i_2 - 1]) ? (arr_5 [i_2 + 1]) : (arr_10 [i_2 + 1] [i_2 - 1])))));
                    }
                }
            }
            var_26 ^= (min((arr_12 [i_0] [i_0]), (min((arr_18 [i_0] [i_0] [i_0] [i_1] [i_1]), -251))));
            var_27 ^= (max(((((max(46, 34430))) ? 10532 : (((max(var_7, var_13)))))), ((7963 ? 14444821255344667933 : 1))));

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_28 = arr_18 [i_7] [i_0] [i_7] [i_7] [i_7 - 1];
                            var_29 = ((((((arr_3 [2]) ? (23 ^ 529924764) : -10530))) ? ((~((~(arr_31 [1] [1]))))) : (((0 ? 65535 : 6465605323513729024)))));
                        }
                    }
                }
                arr_33 [i_0] [i_0] [5] [i_0] = -27915;
            }
        }
        var_30 = (((arr_6 [i_0] [i_0]) * (min((arr_18 [i_0] [i_0] [i_0] [i_0] [12]), ((max((arr_23 [i_0] [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_0]))))))));
    }
    #pragma endscop
}
