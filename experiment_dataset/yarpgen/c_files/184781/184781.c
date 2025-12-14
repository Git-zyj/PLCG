/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] = (arr_4 [i_1]);
            var_12 = ((-(arr_2 [i_0 - 1])));
            var_13 -= (arr_3 [i_0 + 2] [i_0 + 2]);
            arr_6 [i_0 + 2] = ((1 ^ (arr_4 [i_0 + 3])));
            var_14 = (((arr_3 [i_0 + 1] [i_1 - 1]) >= 1));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_15 = 0;
            var_16 = (8234078894696799787 | 0);

            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                var_17 = (max(var_17, (((var_6 ? 13346570252389991826 : (arr_8 [i_0 + 1] [i_2] [i_2 - 1]))))));
                arr_13 [8] [i_2] [i_0] [i_0 + 3] = ((~(arr_7 [i_0 - 1])));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = (max(var_18, var_5));
                arr_16 [i_0] [i_2] [i_4] = 26714;
                arr_17 [i_0] [i_2 - 1] [i_4] = ((((var_6 ? var_7 : 1)) != 2100396304));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = (arr_8 [i_0 - 1] [i_0 + 3] [i_2 - 2]);
                        arr_26 [i_0] [7] [i_0] = ((-6670 ? 7274257241988012131 : 1));
                    }
                    arr_27 [1] [i_5] [i_2] [i_0 + 1] = (((var_9 <= var_1) % (arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])));

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_20 *= -1162642037;
                        arr_30 [i_6] [i_6] [i_6] [i_8] [i_6] = (arr_19 [i_0 + 3] [i_2] [i_2 - 2] [8]);
                        arr_31 [i_8] = ((var_7 ? (arr_12 [i_0] [i_0 + 2] [i_0 + 1] [0]) : (arr_12 [i_0] [1] [i_0 + 3] [12])));
                        var_21 = var_10;
                    }
                    var_22 = ((1672297901 ? (arr_20 [i_0 - 1]) : (arr_25 [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_0 - 1] [i_0 - 1])));
                }

                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_23 = 1;
                    arr_34 [9] [i_9] [1] [i_9] [i_2 - 3] [i_9] = (((arr_2 [i_0 - 1]) ? (arr_25 [1] [12] [i_2] [i_2] [i_0]) : ((9223372036854775807 - (arr_23 [i_9] [i_5] [i_2] [7] [i_0 - 1])))));
                    arr_35 [i_9] = (arr_29 [i_9] [i_2 - 2] [i_2] [i_9 + 1]);
                    var_24 = (max(var_24, (((((((arr_10 [i_9] [16] [i_2] [i_0]) ? 19 : 1))) || (arr_28 [i_0 + 3] [i_0 + 2] [i_0 + 1]))))));
                    arr_36 [i_0] [i_9] [i_5] [i_5] = (arr_19 [i_9] [i_9] [i_9 + 1] [i_9 + 2]);
                }
            }
        }
        for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_0] = 67;
            var_25 = (((arr_37 [i_10 + 1] [i_0 - 1] [i_0]) ? (arr_12 [i_10 - 3] [i_10 + 1] [i_0 + 3] [i_0]) : (arr_37 [i_10 + 1] [i_0 + 3] [3])));
        }
        var_26 = ((-1790795086 ? 1813812051 : var_10));
    }
    var_27 = ((-var_5 ? ((var_1 ? var_8 : -4881)) : 13410));
    var_28 = var_0;
    var_29 = var_4;
    #pragma endscop
}
