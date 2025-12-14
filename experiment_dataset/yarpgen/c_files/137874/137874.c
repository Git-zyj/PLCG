/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 *= (((((-9223372036854775807 - 1) * 0))));
        var_11 = var_7;
        var_12 = ((((min(65525, var_9))) / (((arr_0 [i_0]) + (arr_0 [i_0])))));
    }
    var_13 = ((((((min(var_7, 65535))))) - var_5));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_1] = (arr_5 [i_1] [i_1] [i_1]);
                var_14 = (min(var_14, ((5 <= ((((arr_5 [i_1 + 3] [2] [i_1 + 3]) >= (arr_5 [i_1 + 2] [12] [i_1 + 3]))))))));
                arr_10 [i_1] = ((-(((arr_6 [i_1 + 3] [i_1] [i_1 + 2]) / 9))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_13 [3] [1] [i_1] [3] = (((((~65528) + 2147483647)) << ((((((-(arr_11 [i_1]))) + 32)) - 31))));
                    arr_14 [i_1] [i_1] [i_1] = 16;
                    arr_15 [i_1 + 3] [i_3] [i_3] |= 65535;
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_15 = (max(var_15, 13));
                    var_16 = ((((((arr_7 [i_1 + 1] [10] [i_1 - 2]) << (var_8 - 13893855275600627220))) << 28)));

                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_23 [i_1] [i_2] [i_4] [i_1] = ((~(+-2)));
                        var_17 = (((((8 / (arr_20 [i_1] [i_1] [i_1 - 1] [i_1]))) == (65533 < 0))));
                        arr_24 [i_1] [i_2] [i_4] [i_1] = (((((((arr_6 [i_1 + 1] [i_2] [i_1 + 1]) ? (arr_4 [i_1] [i_1]) : 17)) - (var_4 | 65535))) == ((((((~(arr_3 [i_2] [i_1 + 3])))) ? (8 || 9) : (!var_1))))));
                        var_18 = (min((((arr_19 [i_5 + 1] [i_1] [i_1] [1]) ? 65514 : (arr_19 [i_5 - 3] [i_1] [i_1] [i_1 + 1]))), ((-(arr_19 [i_5 + 1] [i_1] [i_1] [i_1])))));
                    }

                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((((min(3, (arr_12 [i_1 + 2] [i_4])))) ? (var_5 / 65530) : (((min(17, 7)))))))));
                        arr_27 [i_1] [i_2] [i_4] [i_4] [i_1] = (((!var_1) && (((((65510 ? 65512 : (arr_4 [i_1] [i_2])))) || ((!(arr_7 [i_4] [i_4] [i_4])))))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_30 [i_1] [i_1] [i_4] = var_3;
                        var_20 |= ((4 || ((!((!(arr_5 [i_1] [i_4] [i_2])))))));
                        var_21 = (((arr_3 [i_1] [i_1 + 1]) / ((65508 << (40 - 34)))));
                    }
                    arr_31 [i_1] [i_1] [i_2] [i_4] = ((~(((65525 + 65531) - 9))));
                }
            }
        }
    }
    #pragma endscop
}
