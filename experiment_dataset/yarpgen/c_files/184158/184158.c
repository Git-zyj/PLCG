/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_8;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_1 [i_0] [i_0])));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((arr_4 [11] [i_0 + 1]) - (arr_6 [i_0] [i_0] [i_2])))) || -var_5));

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [7] [i_0] = var_14;
                        var_17 *= (!0);
                        var_18 = (max(var_18, (((var_4 ? (arr_9 [i_2]) : 0)))));
                        var_19 = ((!(arr_13 [i_4] [i_3] [i_2] [i_0 + 2] [i_0])));
                        arr_15 [i_4] [i_0] [i_0] [i_4] [8] = (!var_7);
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_20 = ((!(!4294967295)));
                        var_21 ^= ((18446744073709551615 != 1) ? ((((arr_1 [i_0] [i_2]) ? (arr_6 [i_2] [i_1] [i_0]) : (arr_3 [8])))) : (arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_0]));
                        arr_20 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = (arr_5 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = (arr_23 [i_6] [i_3] [i_3] [i_2] [i_1 + 1] [15]);
                        arr_24 [i_0] [i_0] = (((arr_11 [i_0 - 1] [i_0] [13] [i_6]) != (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2])));
                    }
                    var_23 += ((!(!18446744073709551615)));
                    var_24 += var_1;
                }

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_25 = ((arr_12 [i_0] [i_1 - 1] [20] [8] [i_1] [i_0]) ? (arr_4 [i_2] [i_8]) : var_13);
                        var_26 = (min(var_26, 32375));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_27 = 60;
                        var_28 = (max(var_28, ((((arr_25 [i_0 - 1]) & (arr_13 [i_9] [i_7] [1] [i_1] [i_0]))))));
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_29 |= ((((16382 > (arr_12 [i_10] [i_7] [i_2] [i_1] [i_1] [i_10]))) ? 20567 : var_12));
                        arr_33 [i_0] = (arr_30 [i_10] [i_10] [i_10] [i_10] [i_0]);
                        var_30 ^= (18446744073709551615 / 15883);
                        var_31 ^= ((!(arr_17 [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_36 [i_0 + 2] [i_1 - 3] [i_0] [i_7] [i_0 + 2] = (!var_13);
                        arr_37 [i_0] [i_1] [i_2] [i_0] [0] = (arr_31 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0]);
                    }
                    var_32 ^= (((arr_30 [i_1] [i_1] [2] [i_1] [i_2]) ^ (arr_29 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0])));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        var_33 = (((arr_29 [i_12] [i_7] [i_2] [12] [i_0] [i_0]) / ((((var_3 || (arr_9 [i_2])))))));
                        var_34 += ((var_5 ? (var_7 && 44969) : var_0));
                        var_35 *= 1345170098;
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_36 = (~(~var_7));
                        var_37 = (arr_1 [i_0 + 1] [i_0]);
                        var_38 = (max(var_38, (((var_13 + 2147483647) << (var_12 - 516089962)))));
                        var_39 ^= (-32767 - 1);
                        var_40 = (((arr_31 [i_1 - 2] [i_0 + 2] [i_0] [i_0] [7] [i_0]) & (!var_0)));
                    }
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_41 = (~var_10);
                    var_42 = 20567;
                    var_43 = var_5;
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    arr_48 [i_0] [i_1] [i_0] [i_15] [i_15] [5] = arr_28 [i_0 + 2] [i_2];

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_44 ^= 0;
                        arr_52 [i_0] [i_0] = ((-(var_1 % var_14)));
                    }
                }
            }
            var_45 = (((arr_21 [i_1] [i_0] [i_1 - 2] [i_1 - 3] [i_1]) ? (arr_21 [i_1] [i_0] [i_1 - 1] [i_1 + 1] [i_1 - 3]) : 1384773725));
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {
            var_46 = ((var_12 ? (arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_17]) : (arr_35 [i_17] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 21;i_19 += 1)
                {
                    {
                        var_47 ^= ((var_11 ? var_11 : var_13));
                        arr_63 [i_0] [i_18] [i_17] [i_0] = -15884;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 20;i_21 += 1)
                {
                    {
                        var_48 *= (!4294967295);
                        var_49 = var_6;
                        arr_71 [8] [8] [8] [i_0] [i_21] = (arr_19 [i_0] [i_0 - 1] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
