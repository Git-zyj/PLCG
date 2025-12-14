/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_14;
    var_20 = 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1 - 2] = var_15;

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (((((((49152 < 6166180706746775947) + 49152))) ? ((((2147483647 == -2147483647) << (18446744073709551615 - 18446744073709551591)))) : (((((arr_0 [i_0]) + 9223372036854775807)) << (var_18 - 3506608996000219462))))))));
                    var_22 = (((min(9223372036854775807, 6308456851220164846))) ? var_10 : -2147483647);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_23 &= 12280563366962775667;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 8;i_5 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_10));
                                arr_19 [i_0] [5] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_5 + 1] [i_1 + 1] [i_3] [i_1 - 1] [i_4 + 1]) ? ((835221234387878205 ? (arr_14 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_1 - 1] [i_4 - 1]) : var_0)) : (arr_14 [i_5 - 1] [i_1 - 2] [i_3] [i_1 - 1] [i_4 + 2])));
                            }
                        }
                    }
                }
                var_25 = min((((((var_18 << (var_18 - 3506608996000219460)))) ? (var_7 || var_10) : var_4)), (max(747438679825376706, (((!(arr_17 [5] [9] [i_0])))))));
                var_26 = (((arr_12 [i_0] [i_1]) ? (var_12 - var_17) : (((((45 ? -5 : 2689549827345011632))) ? ((var_12 ? (arr_15 [i_0] [i_0] [i_1] [i_0] [i_1]) : (-9223372036854775807 - 1))) : (max(var_12, (arr_16 [i_1 - 1] [i_0] [i_1 - 1] [9] [1] [i_0])))))));
                var_27 = (max((((var_17 >= ((min(462719603, -375387284377905123)))))), (min(((14964946696702090514 ^ (arr_11 [i_0] [i_1 - 2]))), ((-28 ? var_14 : var_3))))));
            }
        }
    }
    #pragma endscop
}
