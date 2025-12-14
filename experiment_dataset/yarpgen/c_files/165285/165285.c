/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    var_12 ^= (7864320 - var_7);
                    arr_11 [i_0] [i_1] [i_2] [i_2 + 1] = 8;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    arr_16 [i_0] [i_1] [i_3] [i_1] = (((arr_13 [i_0]) < (arr_0 [i_0] [i_0])));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((!(arr_14 [i_3 + 1] [i_3 - 1])));
                    var_13 = (~var_0);
                    var_14 = (!-6957608603070871804);
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    var_15 = ((!(((~(arr_10 [i_0] [i_1] [i_4]))))));
                    var_16 = (max(((!(arr_3 [i_4 + 1]))), (!var_0)));

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_17 = ((((arr_13 [i_5 + 2]) ? (var_3 | 33550336) : (4294967288 && -47))));
                        var_18 = (max((((((var_8 ? (arr_12 [i_5] [i_4] [i_1]) : 33550336))) ? -1842474263 : (max((arr_13 [2]), -41)))), ((((851893296 ? var_0 : 3609095759))))));
                    }
                    arr_23 [i_0] [14] [8] [i_4] = (((arr_15 [i_0] [i_0] [6]) ? (max((((4294967286 ? var_3 : var_3))), var_4)) : (max(var_0, var_0))));
                    var_19 *= (arr_1 [i_4]);
                }
                var_20 = (arr_1 [i_1]);
                arr_24 [i_0] = var_10;

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    arr_28 [i_6] [i_1] = max((((((((((arr_0 [i_6] [i_1]) + 9223372036854775807)) >> (3259246892 - 3259246869)))) ? (arr_2 [i_1]) : (arr_21 [i_6])))), ((var_5 / (arr_26 [i_6 + 1] [i_6 - 3] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, (~-7691218011113687764)));
                                arr_33 [i_0] [i_1] [i_6] [i_7 + 3] [i_6] = ((var_0 == (((arr_29 [12] [i_1] [i_6] [i_8]) & 20027))));
                            }
                        }
                    }
                    arr_34 [i_0] [i_6] [1] = (arr_19 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
