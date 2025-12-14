/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 -= (((arr_0 [8] [8]) ^ (-127 - 1)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_13 [4] [i_2] [i_2] [i_2] = (((~1969093846) & 677));
                    arr_14 [i_3] [i_2] [10] [i_0] = (arr_0 [i_0] [i_3]);
                }
                var_18 ^= (arr_2 [i_2]);
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_19 = (!-var_1);
                    var_20 = (~34);
                }
                var_21 = (max(var_21, (((35131 == (arr_6 [i_0] [i_0] [i_0]))))));
                var_22 = 1;
            }
            var_23 = ((((min((arr_17 [15] [i_1] [i_0] [i_0]), -80))) << 34));
        }
        var_24 ^= (((arr_3 [i_0]) >= (((1 ? -2572 : 33322)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_25 = (arr_20 [i_6]);

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_26 = var_6;
            var_27 = (max(var_27, ((~(arr_23 [i_6] [i_7])))));
            var_28 = 34;
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_29 = (arr_27 [i_8 + 2] [i_8 + 2] [i_8 - 1]);
            var_30 |= (((arr_22 [i_8 - 1] [i_8 - 1]) == (-32767 - 1)));
            var_31 = ((((((arr_29 [i_6] [i_8]) ? (arr_21 [i_6]) : 1))) ? var_10 : (arr_20 [i_8 + 2])));
            var_32 = (max(var_32, (((~(arr_27 [i_8 - 1] [i_8 - 1] [i_8 - 1]))))));
        }
        var_33 -= arr_23 [i_6] [i_6];
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_34 = (min(var_34, (arr_31 [18])));
        var_35 = (min(var_35, (((6991 ? 2572 : 30405)))));
        var_36 = 18497;
        var_37 = ((((((127 ? var_2 : 1))) ? (max(2522889846, var_4)) : (1 < -34))));
        var_38 -= ((((var_13 - (arr_31 [16]))) | 0));
    }
    var_39 = (((~((max(35131, -2))))));
    var_40 = (max(var_40, var_12));
    #pragma endscop
}
