/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((~(--1)));
    var_12 = (max(var_12, -var_6));
    var_13 = ((~(~-32762)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = ((~((~((~(arr_3 [7])))))));
        var_15 = (--var_2);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, 11));
                            arr_15 [i_3] [i_3] = ((-((~(arr_6 [i_3] [i_3] [3])))));
                            var_17 *= 0;
                        }
                    }
                }
                var_18 = (max(var_18, (!1)));
                arr_16 [i_0] = ((~(+-0)));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_19 = (+-2);
                arr_19 [i_5] [i_1] = (~var_7);
                var_20 = ((-(~-58720256)));
                var_21 = (((-((~(arr_18 [i_0] [5] [i_0] [i_0 + 1]))))));
                var_22 = ((((-(arr_7 [i_0 - 1] [i_1] [i_1] [6])))));
            }
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                var_23 = ((~((~(arr_18 [i_6 + 1] [i_1] [i_0] [i_0])))));
                var_24 = (--4294967286);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [5] [i_6] [i_6] [i_7] [i_8] = 32762;
                            arr_28 [0] [i_0] [0] [i_0] [i_0] = -20;
                            var_25 = ((~((-(~1)))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_26 &= ((-(~1073741816)));
                var_27 = (~18446744073709551615);
                arr_33 [i_0] = ((~(((~(arr_18 [i_9] [i_1] [i_0 - 1] [9]))))));
                var_28 = (((-((-(arr_4 [i_9]))))));
            }
            arr_34 [i_0] |= ((-(~-248)));
            arr_35 [6] [i_0] = ((~((-(~32760)))));
            var_29 = (arr_31 [i_1] [9] [i_0 - 1]);
        }
        var_30 = -var_4;
    }
    #pragma endscop
}
