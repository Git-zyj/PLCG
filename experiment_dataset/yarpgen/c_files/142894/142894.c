/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 362053588;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_21 += var_11;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 = 1;
            arr_4 [i_0] [i_0] [i_0] = ((!(!254)));
            var_23 = 0;
        }
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            var_24 = (max(var_24, ((min((max(1370813741, 222)), var_13)))));
            var_25 = ((~(max(((var_16 ? var_17 : (arr_2 [i_0] [i_0]))), -var_0))));
            var_26 += var_17;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_27 *= ((~(min(((1370813733 ? 33554432 : 362053588)), (((4 > (arr_15 [i_0] [8] [8] [i_5]))))))));
                        var_28 = (min(var_28, (0 << 14)));
                        var_29 = (!(arr_15 [i_0 - 3] [i_3] [i_4] [i_0]));
                    }
                }
            }
            var_30 = ((((162 ? (arr_2 [i_0] [i_0]) : -1)) - ((max(33553920, ((min(65528, (arr_8 [i_0] [6] [i_3])))))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_31 = ((!(arr_7 [i_0 + 1] [i_6])));
            var_32 = ((!(arr_1 [i_0])));
            var_33 = ((-(((arr_17 [i_6] [i_6] [i_0 - 2]) ? 396780492 : 1104804786))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_34 = 362053560;
                            arr_25 [9] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = 247;
                            var_35 = (min(var_35, -81));
                            var_36 = (max(var_36, (((1 ? 9223372036854775807 : 80)))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 2; i_10 < 6;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        var_37 = (min(var_37, 1040187392));

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_38 = (min((max((max(-21, 0)), (arr_11 [i_13]))), (((-362053595 ? 1104804785 : 1922)))));
                            var_39 = (min(var_39, ((((((~1729126797) & (1 ^ var_2))) << (((~var_7) - 19307)))))));
                        }
                        for (int i_14 = 1; i_14 < 6;i_14 += 1)
                        {
                            var_40 = (max(var_40, 1));
                            var_41 = ((~((-(arr_6 [i_0 - 1] [i_10 + 4])))));
                            var_42 = 9;
                            arr_39 [i_0] [i_10 - 1] = (((((~(~var_12)))) != (max(23, -32748))));
                            var_43 = (max(var_43, (((max(((max(1, 1))), 2336387142)) < (((((var_17 << (-126 + 131))))))))));
                        }
                        for (int i_15 = 3; i_15 < 9;i_15 += 1)
                        {
                            var_44 = (min(var_44, ((((!(arr_3 [i_10 + 1])))))));
                            var_45 = (min(var_45, (233 * 27867)));
                        }
                        arr_42 [i_0] [i_10] [i_10 - 1] [i_0] [i_12] = (arr_24 [i_0] [i_10] [i_11] [i_10] [i_11 - 1]);
                        arr_43 [i_11] |= var_9;
                        var_46 = (arr_32 [i_0] [i_10] [i_0] [i_12] [i_10] [i_12]);
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 23;i_16 += 1)
    {
        var_47 += 1;
        var_48 *= (((min(((min(var_5, var_7))), (arr_45 [i_16]))) * (((!((min(80, 2190296479614744105))))))));
    }
    var_49 = (min((((1 ? 1 : -118))), var_4));
    #pragma endscop
}
