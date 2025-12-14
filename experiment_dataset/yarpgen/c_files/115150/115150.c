/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 -= (min((((!(arr_1 [i_0])))), (var_1 % -var_1)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (max(((((arr_3 [i_0] [4] [i_0]) ? 1 : 1))), (min((arr_2 [i_0]), 1))));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_2] [1] [1] = var_0;
                var_13 = (min(var_13, ((((((-12510 ? 0 : 1))) ? 3 : (((arr_7 [i_0] [4] [i_0]) ^ (((max(1, -3916)))))))))));
                var_14 = -70;

                /* vectorizable */
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    var_15 = (((arr_0 [i_0]) ? 1 : 3915));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_3] [1] [i_2] [i_4] [i_4] [i_4] [i_2] = ((!(1 | 4154172175)));
                        var_16 -= (1 + 1);
                        var_17 = (min(var_17, ((((((var_10 ? var_4 : 0))) ? (arr_10 [i_3 + 4] [i_3] [i_2] [i_2] [i_2]) : (arr_2 [i_2]))))));
                        arr_15 [i_0] [i_0] [i_0] [11] [i_0] = ((((18446744073709551598 << (778842527356504635 - 778842527356504621))) & -1));
                        var_18 = -3929;
                    }
                    arr_16 [i_2] = 17681802695029074004;
                    arr_17 [i_3] [6] [6] [6] = (!var_8);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_5] [i_5] [5] [6] = (((arr_2 [i_2]) >> (max(var_7, (arr_3 [i_1] [i_2] [i_5])))));
                    var_19 = 2251524935778304;
                    var_20 = (max(var_20, (((((max(1, (var_3 >= 1)))) || (((var_1 && -1954623622) >= (arr_12 [i_1]))))))));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_0] [i_2] [10] = (max((max(1, (arr_20 [i_0] [i_6])), (((var_0 ? (arr_9 [i_1] [0] [i_1] [i_1] [i_0] [i_0]) : 105))))));
                    arr_26 [i_0] [i_2] [i_1] [11] [i_0] = ((((max(3683039203, 7603))) + (arr_2 [i_6])));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_29 [i_0] [1] [i_1] [i_2] [i_6] [i_7] &= (max(1, -31123));
                        var_21 = ((~((177454897 ? 1 : (arr_19 [i_0] [i_0] [8] [i_2] [i_6] [1])))));
                    }
                }
            }
            var_22 += var_3;
        }
    }
    var_23 = (min(((-var_9 ? (var_4 + 1) : (var_1 / var_3))), ((((((~var_7) + 2147483647)) << (-2215002833001519758 - 114))))));
    var_24 ^= (((!31109) ? var_0 : ((((var_6 ? var_6 : var_0))))));
    #pragma endscop
}
