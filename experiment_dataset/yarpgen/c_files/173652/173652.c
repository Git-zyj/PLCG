/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 += (((min((arr_4 [i_0] [i_1] [i_3]), (arr_4 [i_0] [i_2] [14]))) ^ ((var_15 ? 2 : 1))));
                        var_19 = (1 ^ ((((1 ? -2147483643 : var_5)) + (arr_10 [i_0] [10] [i_2] [i_3]))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_20 = ((min(((max(var_15, var_2))), ((1 ? 1949958299 : var_4)))));
                        var_21 = (max(var_21, (((max(-2049026109, (min((arr_12 [12] [12] [8] [i_4]), var_12)))) <= (max(62, (0 + var_4)))))));
                        var_22 = (((-58 + 2147483647) << ((((((((max(65535, -22353))) ^ (arr_11 [i_0] [i_0] [i_2] [i_0]))) + 65483)) - 11))));
                    }
                    var_23 = ((-1 ? 1633139271 : (min(((19165 ? 65515 : var_14)), ((var_0 ? var_0 : 1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_24 |= ((!((min((-792644667 >= -31340680), ((var_7 ? 1718455201 : (arr_17 [1] [1] [8] [i_5] [i_6] [i_2]))))))));
                                var_25 = ((16 ^ var_14) ? (var_5 || var_7) : (arr_0 [14]));
                                var_26 ^= (((max((!1), ((var_16 ? 65535 : var_7)))) == ((min((arr_8 [1] [1] [i_2] [1] [2]), (max(23749, var_4)))))));
                                var_27 = (((((var_12 <= var_6) >= (arr_8 [i_6] [i_5] [i_2] [i_1] [1]))) ? (((((max(var_1, (arr_0 [i_1])))) && 1))) : var_7));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_28 = arr_18 [i_1] [i_0];
                        var_29 = (arr_11 [i_0] [i_0] [i_2] [i_2]);
                        var_30 = ((+(((arr_13 [i_0] [3] [i_2]) / (arr_13 [i_0] [i_7] [i_2])))));
                        var_31 = (max(var_31, 65535));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_32 = -19;
                        var_33 = ((~(((((arr_17 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0]) + 2147483647)) >> (((~var_9) + 615135475))))));
                    }
                }
            }
        }
    }
    var_34 = var_15;
    var_35 = var_8;

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    var_36 += min(((18 ? (arr_31 [i_11]) : var_10)), (arr_27 [i_10]));
                    var_37 = (((arr_26 [i_9] [i_11]) | ((((min(var_11, -21))) ^ (((arr_32 [i_9] [i_10] [i_11]) & var_0))))));
                    var_38 |= (max((max(32767, ((var_17 << (884312804 - 884312787))))), 27152));
                    var_39 = (min(((((min(21107, 0))) << var_7)), ((min((arr_30 [21] [i_10] [i_11]), 11448)))));
                    var_40 = (((min((arr_26 [19] [i_10]), var_6))) ? (((!(arr_29 [i_11] [i_10] [i_9])))) : (((arr_26 [i_11] [i_10]) ? (arr_26 [i_10] [i_11]) : var_13)));
                }
            }
        }
        var_41 = (max(var_9, var_6));
        var_42 ^= var_9;
        var_43 = (min(var_43, ((max(((((max((arr_29 [i_9] [i_9] [i_9]), 22025))) >= ((min(var_12, 16078))))), (!var_7))))));
    }
    #pragma endscop
}
