/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((0 ^ 32767) ? ((var_5 ? (-32767 - 1) : var_1)) : var_3))) >= (min(((min(var_2, 131))), (var_7 + var_7)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 *= arr_1 [i_0 + 2];

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                arr_8 [10] = var_10;
                var_13 = (arr_6 [i_0]);
            }
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_4 - 3] [8] = (~var_0);
                    var_14 |= ((0 & (arr_3 [i_4 - 3])));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_19 [i_5] = 0;
                        var_15 -= (arr_11 [i_3 - 3] [i_0 + 1] [i_4 - 3] [i_5]);
                        var_16 = ((((0 > (arr_9 [i_0] [i_0] [i_0])))) >> (32767 - 32748));
                    }
                    arr_20 [i_0] [14] [i_0] [i_4 + 1] = ((~(!var_5)));
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_17 *= ((-1 ? var_8 : (var_2 << 1)));
                    arr_24 [i_3] [i_3] [i_3] [i_6] = var_0;
                    var_18 = (((var_5 + 2147483647) << (((((~var_2) + 300)) - 5))));
                    arr_25 [i_0] [i_6] [i_0] [i_6] = 0;
                }
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_19 = (arr_23 [i_7] [i_8] [i_8] [i_0 - 1]);
                        var_20 = ((0 + ((-(arr_10 [i_3])))));
                        arr_31 [i_8] [i_8] [3] [i_8] [i_8] = (arr_0 [i_0]);
                        var_21 -= ((var_2 ? 1 : (arr_12 [i_0] [i_3])));
                        var_22 = (1 ^ 1072693248);
                    }

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_23 = (max(var_23, var_4));
                        arr_36 [i_0] [i_0] [i_3 + 2] [i_9] [i_9] = var_8;
                    }
                }
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    arr_39 [i_1] [i_1] [i_1] = 1;
                    var_24 = 32762;
                    arr_40 [i_0] [i_1] [i_3] [i_10] [i_10 + 1] |= ((var_6 << (var_10 - 9886)));
                    arr_41 [i_3] [i_3] [i_0] [i_0] &= -879684674;
                }
                arr_42 [i_3] = (var_3 + var_2);
            }
            arr_43 [i_1 + 1] = var_6;
            var_25 = var_8;
            var_26 = (min(var_26, (~var_9)));
            var_27 += (arr_33 [14] [14] [14] [2]);
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 24;i_11 += 1)
    {
        arr_47 [i_11] = (arr_44 [i_11 - 3]);
        var_28 *= var_6;
        var_29 = 1275148201;
    }
    var_30 = (0 ^ var_9);
    #pragma endscop
}
