/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((((min((arr_2 [i_0 - 3]), (arr_2 [i_1 - 1])))) ? (arr_2 [i_1 + 1]) : (~var_2)));
                var_18 -= (((var_13 ? (arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 3]) : var_5)) < ((max((((arr_1 [6]) ? 38153 : var_9)), (arr_0 [i_0])))));
                var_19 = (((arr_4 [i_0]) | ((max((-2147483633 <= var_5), 2147483627)))));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2] = (((min((arr_8 [i_0]), -var_7)) / -var_15));
                    var_20 = (arr_5 [i_1 + 1] [15] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = var_9;
                                arr_15 [i_4] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((((var_0 - ((var_16 ? -40967419 : 6349287989071064150))))) * ((var_5 ? ((2147483633 ? var_15 : var_7)) : var_9)));
                            }
                        }
                    }
                }
                var_22 = ((((((!var_13) * (6349287989071064150 / 4088)))) ? 549755809792 : (((-((var_14 ? var_2 : (arr_5 [i_0 - 1] [i_1] [i_1 - 1]))))))));
            }
        }
    }
    var_23 = ((+((((var_0 != var_8) >= ((var_8 ? var_4 : var_8)))))));

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = ((var_6 < (((((8784 << (4179319905 - 4179319901)))) ? (1 * 49) : -2147483633))));

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_6] [i_7 - 1] [i_7] [17] [i_6] = ((!(((var_8 ? (-52 > var_10) : 56)))));
                        var_24 -= (~1152780767118491648);
                        var_25 *= var_8;
                    }
                }
            }
            arr_31 [i_5] [i_5] [i_6] = ((((var_0 ? (arr_27 [7] [i_6 + 2] [i_6 + 2] [i_6 + 2]) : (max(var_13, var_5))))) ? (((((-146209242 ? 56740 : var_16))) ? -17 : (max((arr_1 [i_5]), var_5)))) : ((((var_3 >= (((arr_17 [i_5] [i_5]) ? (arr_17 [i_5] [i_5]) : var_6)))))));
            var_26 *= (var_6 * var_2);
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_27 = (arr_6 [i_5] [1]);
            var_28 |= (arr_12 [5] [i_9] [i_9] [i_9] [16] [i_9]);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_37 [i_10] = (((((498351811 ? 115647402 : -6349287989071064150)) != (((var_7 / (arr_23 [i_5] [i_5] [i_5])))))) ? var_9 : (((arr_17 [i_5] [i_5]) ^ -var_1)));
            var_29 = (arr_35 [i_10] [i_10] [i_5]);
            var_30 = 2147483644;
        }
        var_31 = (max(var_31, -52));
    }
    #pragma endscop
}
