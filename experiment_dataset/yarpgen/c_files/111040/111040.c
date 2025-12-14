/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (max(var_7, ((3 ? (min(4239011202, -117)) : 8))));
                    arr_9 [i_0] [i_0] = ((-2147 ? (~28) : (arr_7 [i_0 - 4] [i_0] [i_0])));
                    var_14 = 16384;
                    var_15 ^= (min((16393 <= 1228952052), 12));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_16 = ((var_11 > (min((arr_11 [i_0] [i_0] [i_2] [i_3 + 2]), -30))));
                        var_17 = 6115921446121392703;
                    }
                    for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_18 = (arr_14 [12]);
                        arr_16 [i_0] [i_1] [i_2] [i_0] [i_1] = (min((arr_13 [i_4 - 4] [i_4] [i_2 + 2] [i_1] [i_0 - 3]), (arr_13 [i_4 - 4] [i_4] [i_2 + 2] [i_0] [i_0 - 3])));
                        arr_17 [i_0] [i_0] [14] [i_4 + 1] = ((51 << (56 - 39)));
                        var_19 ^= (min(106, 1024));
                        var_20 += ((((max(1020, 54))) + 3057980614));
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_21 = -2342;
                        var_22 = (((((arr_2 [i_0 + 1] [i_0 - 3] [i_0]) / var_13))) & (((arr_12 [i_0] [i_1] [i_2] [i_5]) - var_11)));
                        var_23 -= var_10;
                        var_24 = (arr_14 [i_1]);
                    }
                }
            }
        }
    }
    var_25 |= var_13;
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                {
                    var_26 = ((-20016 | ((48119 ? 18446744073709551610 : 1826966239))));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_27 = (~var_3);
                            var_28 = ((var_4 && ((((var_9 >= 494304178) * (!2147483648))))));
                            var_29 = (arr_25 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
                            arr_35 [i_6] [i_7] [i_8] [i_7] [i_10] = (arr_27 [6] [i_7] [i_8] [i_8]);
                            var_30 += -1800753573;
                        }
                        var_31 = (max(var_31, (((var_3 > (((((32764 ? var_0 : var_1))) / (~1195092812892498742))))))));
                        arr_36 [i_6 - 1] [i_6 - 1] [11] [i_6 - 1] = (arr_26 [i_6] [i_8] [7]);
                        arr_37 [i_7] [i_7] [i_7] [i_6] = 18446744073709551613;
                    }
                }
            }
        }
    }
    #pragma endscop
}
