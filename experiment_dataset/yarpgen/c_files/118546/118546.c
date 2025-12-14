/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = 4294967295;

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_21 = (((~1) ? 122 : (((arr_3 [i_2 + 1]) & 5135))));
                    arr_8 [i_0] [i_2] = ((((((arr_6 [i_1 + 2] [i_0 + 2] [i_2]) * (arr_6 [i_1 - 2] [i_0 - 2] [i_2])))) ? (((arr_6 [i_1 - 2] [i_0 + 1] [i_2]) * (arr_6 [i_1 - 2] [i_0 - 1] [i_2]))) : (((arr_6 [i_1 + 3] [i_0 - 3] [i_2]) * (arr_6 [i_1 + 1] [i_0 - 2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 -= 118;
                                var_23 = (((min(1, 22))));
                                arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_2] = (-(((arr_12 [i_0] [i_2] [i_2] [i_3] [i_4]) ? (arr_6 [i_0 - 2] [i_0 - 2] [i_2]) : (max(576460752303423488, var_16)))));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1 + 2] [i_0] [i_1] |= ((((min((~254), (~var_13)))) * 2901574512));
                }
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    arr_18 [i_5] = (!-9223372036854775807);
                    var_24 *= ((!(((-23 ? (~var_13) : (arr_0 [i_1 - 2] [i_5 - 4]))))));
                    var_25 -= 22;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1 - 1] [i_6] [i_0 + 2] [i_6] = ((((127 ? 32 : (arr_2 [i_1 + 1] [i_7]))) <= var_5));
                        var_26 = ((65535 ? ((51411 ? 22 : 158)) : (arr_16 [i_1 - 1] [i_6] [i_7])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_27 = ((!((((((arr_21 [i_0] [i_8] [i_1 + 3] [i_0]) & 8912369275420768279)) & (min(119, var_3)))))));
                                arr_30 [i_0 + 1] [i_0 - 3] [i_0] [i_0 + 2] = (arr_2 [i_6] [i_8]);
                                arr_31 [i_0] [i_1] [i_6] [i_8] = ((-(~18232275655151774859)));
                            }
                        }
                    }
                    var_28 = 4227858432;
                }
            }
        }
    }
    var_29 = (51411 | (max(-var_4, -103)));
    var_30 += ((((((var_8 + var_6) ? (((max(1, var_1)))) : (var_3 + var_2)))) ? (((((51418 ? -35 : var_7))) + var_3)) : (((var_19 ? 117 : ((var_9 ? var_18 : var_0)))))));
    var_31 = ((!((((127 ? (-127 - 1) : -1710155310025263316))))));
    var_32 = ((!(18446744073709551613 <= var_13)));
    #pragma endscop
}
