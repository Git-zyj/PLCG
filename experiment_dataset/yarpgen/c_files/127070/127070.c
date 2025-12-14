/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_11;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] = min((max(var_12, (var_6 <= -91))), ((((arr_0 [i_1 + 2] [i_1]) > var_13))));
            var_16 = ((var_5 ? ((min((arr_3 [i_0]), (~124)))) : (arr_4 [i_1 + 3] [i_1 + 3])));
        }

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_11 [i_0] [1] = ((+(((52 - var_11) ? ((var_14 ? (arr_2 [i_0]) : var_7)) : 50793))));
            var_17 = ((((((((var_3 ? 4294967291 : (arr_7 [16])))) ? var_6 : -20687))) ? -var_14 : ((0 ? 103 : 61))));

            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_18 = (!18671);
                            var_19 = (arr_0 [i_2 + 1] [i_3]);
                        }
                    }
                }
                var_20 |= 99;
            }
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_29 [i_0] = (arr_7 [i_2]);
                            var_21 = (max(((-((var_6 ? var_5 : var_4)))), var_0));
                            var_22 ^= -17726;
                            var_23 = (min(var_23, (-2145236961 / -108)));
                        }
                    }
                }
                arr_30 [4] [i_0] [i_6 + 1] = min((((~1) ? var_8 : 2)), (var_12 >= 1));

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_24 |= ((+(min((arr_3 [i_6]), (((arr_10 [i_0 + 1] [i_9] [i_9]) - 1))))));
                    var_25 = (min(var_25, var_5));
                }
            }
        }
        arr_35 [i_0] = ((~((-(min(var_12, 1115209262931454786))))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_38 [i_10] = (min(-7801342485843752225, -124));
        arr_39 [i_10] = (min(2145236961, 2145236960));
        var_26 = ((((min((arr_37 [i_10]), (arr_37 [i_10])))) ? ((4294967281 | ((17331534810778096833 ^ (arr_36 [i_10]))))) : (((arr_36 [i_10]) ? (arr_36 [i_10]) : 0))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        arr_42 [i_11] [i_11] |= ((-2145236976 ? (arr_37 [i_11]) : var_14));
        var_27 &= 1;
        var_28 = (min(var_28, (((var_13 ? (((var_12 + 2147483647) << (var_10 - 1))) : (arr_5 [i_11] [i_11]))))));
    }
    var_29 |= ((2838611219 ? var_4 : (((102 ^ -136715021) ? 12304907256965406458 : (((53 ? var_6 : 1)))))));
    #pragma endscop
}
