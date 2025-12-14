/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (min(var_16, var_13));
        arr_2 [i_0] [i_0] = var_2;
        arr_3 [i_0] = ((!((max(((9105802573291412382 ? (arr_1 [i_0]) : (-32767 - 1))), var_6)))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 += (((~-26811) ? (max(((min(-1, var_4))), -var_4)) : (arr_4 [i_1] [i_1])));
        arr_7 [i_1] = (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) ^ -9))));
        var_18 *= (min(-1, 221));

        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] = (!9105802573291412364);

            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_2 + 1] [i_3] = (arr_6 [i_1] [i_2 + 3]);
                arr_15 [i_1] [i_2 + 2] [i_1] = (((var_10 + 9340941500418139225) - 16822));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_19 = (var_9 ? (arr_4 [i_2] [i_4]) : var_4);
                arr_18 [2] [2] [2] |= var_9;
                arr_19 [i_1] [i_4] [i_1] [4] = ((18446744073709551615 << ((((var_6 - (arr_6 [6] [6]))) - 40143))));
                var_20 += ((-(((((arr_6 [i_1] [i_2 - 1]) + 2147483647)) >> (var_9 + 12707)))));
                var_21 ^= 14810937178527856868;
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            arr_22 [i_1] [i_5] = 3635806895181694766;
            arr_23 [0] [i_5] = (arr_9 [i_1] [i_1]);
            arr_24 [i_1] [i_5] [i_1] = -2579;

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_29 [i_5] [i_5] [i_5] [i_1] = (((arr_28 [i_5]) ? (arr_13 [i_6]) : var_12));
                var_22 = (!var_2);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    var_23 = ((var_6 == (arr_27 [i_5 - 1] [5] [i_5 + 1] [i_8 - 2])));
                    var_24 = ((((0 ? var_2 : (arr_30 [i_1] [i_1]))) * var_8));
                }

                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    var_25 *= ((-(arr_34 [8] [i_5] [i_5] [i_5 + 2] [i_7] [10])));
                    arr_39 [6] [i_7] [i_7] [i_7] |= (((166 && 9105802573291412390) - 8064));

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_26 = var_10;
                        arr_42 [i_1] [i_5] [i_7] [i_9] [i_9] = (--511);
                        arr_43 [i_9] [i_5] [i_7] [i_5] [i_7] [i_1] [i_5] = (((((arr_11 [i_1]) ^ 178)) ^ (arr_30 [i_9 + 1] [i_5 - 1])));
                        var_27 = ((-(arr_36 [i_5 + 2] [i_5] [i_5 + 2] [i_9 + 3] [i_10] [i_10])));
                        var_28 = (((arr_37 [i_1] [i_1]) == ((51000727412714732 + (arr_9 [i_1] [i_1])))));
                    }
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_29 = (min(var_29, (arr_20 [i_5 + 3] [5] [i_11])));
                    var_30 = (max(var_30, (((arr_17 [i_7]) * 9340941500418139233))));
                }
            }
        }
    }
    #pragma endscop
}
