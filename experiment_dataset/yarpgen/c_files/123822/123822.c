/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((min(var_6, -117)) & (var_4 + var_2))) >> ((((var_8 ? (min(117, var_5)) : 4935)) - 100))));
    var_11 = (min((min(var_2, var_7)), ((var_9 * (var_2 - var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_0] = var_3;
                        var_12 = (min(var_12, var_5));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_13 = (max(var_13, var_1));
                            var_14 = arr_12 [i_2] [i_2] [i_2 - 1] [i_0];
                        }
                        arr_18 [i_1] [i_1] [1] [i_1] = ((((var_3 ? ((min(-117, 117))) : (-118 || var_6))) >= (!-224)));
                        var_15 *= (arr_8 [i_0] [i_2] [i_2 - 1] [i_2]);
                        arr_19 [i_1] [10] = ((((max(32, 158))) ? 18446744073709551615 : (((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) & (((arr_14 [11]) ? (arr_5 [i_1] [i_2]) : 17021946358670580720))))));
                        var_16 *= ((((min((~var_8), (~158)))) ? ((((arr_3 [i_1] [i_2 + 1]) || ((min(var_0, var_7)))))) : 47391));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_0] [2] [i_6] [i_0] |= ((-(arr_17 [i_0] [i_1] [i_1] [i_1] [i_1])));
                        arr_24 [i_1] = var_1;
                        var_17 = ((((((arr_14 [i_0]) ^ (arr_14 [0])))) ? (18446744073709551612 - 174) : (((((arr_6 [i_1] [5]) >= 158))))));
                    }
                    var_18 = ((~(((((-(arr_8 [i_0] [i_1] [i_1] [10])))) + (((arr_6 [i_0] [i_0]) + var_6))))));
                    var_19 = (min(var_19, ((max(69, (min((arr_0 [i_0]), (~118))))))));
                }
            }
        }
    }
    #pragma endscop
}
