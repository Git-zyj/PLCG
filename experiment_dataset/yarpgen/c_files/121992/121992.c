/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_7;
    var_20 = (((((var_6 + ((min(var_8, (-2147483647 - 1))))))) ? (((-14 ? var_3 : var_10))) : var_18));
    var_21 += var_10;
    var_22 += ((!(((var_15 ? ((113 ? var_7 : var_6)) : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_23 = var_8;
                    var_24 = var_14;
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = (((((arr_2 [i_2 + 1] [i_2 + 1] [i_0 - 1]) && (arr_2 [i_2 + 1] [i_2 + 1] [i_0]))) ? (arr_4 [i_2] [i_2 + 1] [i_1]) : ((var_4 | (arr_4 [i_2] [i_2 + 1] [i_1])))));
                    var_25 &= (((((-12 ? (arr_2 [i_2 + 1] [i_0] [i_0]) : (arr_2 [i_0] [i_2 + 1] [i_2])))) ? (((arr_2 [i_0] [i_1] [i_2 + 1]) ? (arr_2 [i_0] [i_0] [i_0]) : var_16)) : (arr_2 [i_0 - 1] [i_1] [i_2 + 1])));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_26 = (((arr_0 [i_3 - 1] [i_3 + 2]) ? var_7 : var_9));
                    var_27 = (arr_8 [i_0 - 1] [i_3 + 1] [i_0 - 1]);
                    var_28 = (min(var_28, ((((arr_2 [i_0 - 1] [i_3 + 2] [i_3 + 1]) ? (((-1113964371 + 2147483647) << (4294967287 - 4294967287))) : (arr_8 [i_0 - 1] [i_0] [i_3 + 3]))))));

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_0] [i_3 + 3] [i_3 + 2] [i_3 + 3] = ((((43720 ? (arr_0 [i_0] [i_4 + 3]) : 18446744073709551615))) ? ((var_3 ? var_3 : var_11)) : (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3 + 2] [i_1]));
                        var_29 = (((arr_2 [i_0] [i_0 - 1] [i_4 - 2]) ? (arr_3 [i_0] [i_1] [i_3]) : var_2));
                        var_30 = (((arr_2 [i_0 - 1] [i_0 - 1] [i_3 + 2]) ? (arr_2 [i_0 - 1] [i_3] [i_3 - 1]) : (arr_2 [i_0 - 1] [i_0] [i_3 - 1])));
                    }
                    var_31 = (arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_3 + 2] [i_3]);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_5] [i_5] = var_7;
                    var_32 *= max(-var_5, (min(var_4, ((((var_8 + 2147483647) << (var_18 - 17203806665613374859)))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_23 [i_0 - 1] [i_0 - 1] [i_6] [i_6] = (((12473348474336570099 * var_5) ? (min((arr_16 [i_0] [i_6] [i_7]), (((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) << (((var_11 + 113) - 8)))))) : (((arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [i_7 + 3]) ? (arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_7 - 2]) : (arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_7] [i_7 + 1])))));
                            var_33 = ((max((((arr_9 [i_0] [i_1]) ? var_7 : var_8)), (((arr_16 [i_0] [i_6] [i_6]) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 1]) : var_7)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
