/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((arr_3 [i_0 + 2] [i_2 + 1] [i_2]) && ((((((115 ? 3167114028910677392 : (arr_0 [i_0])))) ? 32767 : (arr_2 [i_0 + 3])))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_14 = -119;
                        arr_9 [i_0] [i_3] = (((((arr_0 [i_0 - 1]) % 18446744073709551615))) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 3]));
                        arr_10 [i_0] [i_1] [i_0] [i_0] = (75 / 2551784055);
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_4] [i_0] [1] [i_4] [i_4] = ((((arr_12 [i_0] [i_0] [i_2 - 2] [i_0 + 2]) | (arr_12 [i_0] [i_0] [i_2] [i_0 + 3]))));
                        var_15 = (max(var_15, (((-1 / (((((arr_7 [i_0]) / 111)) / -var_4)))))));
                        arr_16 [i_0] [i_0] [i_0] [10] = var_1;
                        var_16 = (-2147483647 - 1);
                        var_17 = (min((((arr_4 [i_0] [i_1]) - (arr_4 [i_0] [i_1]))), 34));
                    }
                    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0 + 1] [i_1] [i_0] [13] = (arr_3 [i_0] [i_1] [i_1]);
                        arr_20 [i_0 - 1] [i_1] [i_0] [i_5] = (~38);
                        arr_21 [i_0] [i_0] = (((-14 ? 34359737856 : 81)));
                    }
                    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_18 = (arr_13 [i_0] [i_1] [i_1] [i_6] [i_0] [5]);
                            var_19 = -0;
                        }
                        var_20 = var_0;
                    }

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0] [i_1] [14] [i_0] &= (arr_24 [10] [i_2 - 1]);

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = (((0 != 15279630044798874228) ? 8 : (arr_18 [i_0] [i_0 + 1] [i_0 + 3] [i_8 + 1])));
                            var_22 = -119;
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_36 [i_0] = (18446744073709551594 << 1);
                            var_23 = 876290065;
                            arr_37 [i_0] [i_1] [11] [i_0] [i_10] = (arr_30 [i_1] [i_1] [i_0] [i_8 - 1] [i_8 + 1] [i_8 - 1] [21]);
                            arr_38 [i_0] [i_1] [i_0] = (((arr_26 [i_0 - 1] [i_0] [18] [i_2 - 1] [i_8 - 1] [22]) << (((arr_13 [i_0 + 1] [i_0 + 3] [i_2 + 1] [i_8 + 1] [i_0 + 3] [i_8]) + 83))));
                        }
                        arr_39 [12] [i_0] = 6;
                        var_24 = (max(var_24, 31));
                        arr_40 [i_0] [13] [i_2] = (((arr_3 [i_2] [i_2 - 2] [i_8 + 3]) >= 115));
                    }
                }
            }
        }
    }
    var_25 = var_5;
    var_26 = 4503599627370495;
    var_27 = 38980;
    #pragma endscop
}
