/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (arr_5 [i_0 + 3]);
                arr_7 [i_0] [i_0] = (((((!((var_4 || (arr_2 [1])))))) == (((var_11 ? -43 : 0)))));
                var_13 |= ((~(min(var_9, (~var_3)))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((min((arr_4 [i_0 + 2]), var_6)));
                    var_15 = (max(var_15, ((min((((((min(var_11, (arr_2 [i_0])))) < -32766))), ((~(arr_0 [i_1] [i_1]))))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_16 = (min(var_16, (arr_1 [13])));

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, (arr_5 [i_5])));
                            var_18 = (max((((((min((arr_0 [i_0] [i_0]), var_0)))) - ((-26942 ? (arr_14 [11] [11] [i_0] [14]) : (arr_17 [i_0]))))), (((((((arr_2 [i_1]) ? var_11 : 0))) == (min(var_10, (arr_15 [i_0] [i_1] [i_3] [i_4] [i_0]))))))));
                            arr_18 [i_0] [i_1] [i_0] [1] [i_5] = (((((~((10 ? (arr_6 [i_0]) : (arr_5 [i_5])))))) ? ((min(0, var_6))) : (-127 - 1)));
                            arr_19 [i_0] [i_4] [14] [i_1] [i_0] = ((((min(var_4, var_4)) != (((((arr_5 [i_3]) >= 320797040852439056)))))));
                            arr_20 [1] [i_0] [i_1] [3] [i_3] [i_4] [i_0] = ((max(4294967293, -2147483628)));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_3] = (i_0 % 2 == 0) ? ((+((((((arr_24 [15] [i_3] [i_0] [i_3] [i_3]) >> (-67 + 94))) <= 35804))))) : ((+((((((((arr_24 [15] [i_3] [i_0] [i_3] [i_3]) + 2147483647)) >> (-67 + 94))) <= 35804)))));
                            arr_26 [i_0] [i_1] [3] [i_1] [i_1] = (0 == 0);
                        }
                        arr_27 [i_0 - 1] [i_0] [16] [i_1] [i_0] [i_4] = (((arr_6 [i_0 + 1]) << 1));
                        var_19 = ((+(min((~var_3), ((-(arr_5 [13])))))));
                        var_20 = ((((((18446744073709551615 || 23388) << (((-96 & -5426303538620758694) + 5426303538620758814))))) ? var_1 : (((var_7 || (arr_16 [i_0] [i_0 + 3] [i_1] [i_1] [1] [i_3] [i_1]))))));
                        var_21 = (min(var_21, ((((arr_22 [i_0] [i_1] [12] [i_0] [14] [i_0 + 3] [15]) + (arr_22 [i_0] [i_0] [1] [i_4] [i_0] [i_0 - 1] [1]))))));
                    }
                    var_22 = ((((min((arr_11 [16] [i_1] [i_3]), 16233930589383401063))) ? ((126 ? (var_9 - var_5) : -var_10)) : ((var_6 ? 0 : (arr_1 [i_0])))));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_23 = ((((min((arr_11 [i_7] [i_7] [i_7]), (max(0, -1))))) ? (((0 < var_3) ? (arr_9 [i_7] [i_7] [10] [i_7]) : (min((arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] [2] [i_7]), -7)))) : ((((4294967295 ? (arr_15 [i_7] [4] [i_7] [16] [1]) : var_5))))));
        var_24 += (max((((((((-9223372036854775807 - 1) && 92))) <= (arr_3 [2] [i_7])))), (min((arr_3 [8] [8]), (arr_3 [12] [i_7])))));
    }
    var_25 = var_3;
    var_26 ^= ((-((-((var_0 << (((((-127 - 1) + 156)) - 13))))))));
    var_27 = (~var_10);
    #pragma endscop
}
