/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min(var_8, ((~(var_4 / 12152816270115421698)))));
                arr_7 [i_0] [i_1] = 15;
                arr_8 [i_0] [i_0] [i_0] = ((((-7625571574598471113 != var_7) ? ((var_12 ? 1 : (arr_1 [i_0]))) : var_17)));
                arr_9 [i_0] = (((((((max(var_14, var_5))) % (var_1 && var_1)))) ? (197 / var_14) : (((((~(arr_4 [i_0])))) ? var_14 : ((max((arr_0 [i_1]), var_14)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_19 = (max((max(((((((arr_10 [i_3]) + 2147483647)) << var_11))), (~var_16))), ((((((!(arr_12 [i_2] [i_2])))) * (~1))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] [i_2] [i_3] [i_2] [i_5] [i_5] = ((-((((max(0, -125))) ? (((var_12 ? var_10 : var_12))) : var_4))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                var_20 = ((((((arr_16 [i_2] [i_2] [i_2]) ? (arr_20 [i_2] [i_3] [i_4] [i_5]) : 18446744073709551607))) ? var_2 : (arr_15 [i_2] [i_4 - 1] [1])));
                                arr_24 [i_2] [i_5 - 1] [0] [16] [i_2] = ((arr_23 [i_2] [i_3] [i_4] [i_5] [i_6] [i_2] [i_5 - 1]) % (arr_23 [2] [i_3] [i_4] [i_5 - 1] [i_5] [i_2] [i_5 - 1]));
                                var_21 = (arr_18 [9] [i_5 - 1] [i_5 - 1] [i_2] [9]);
                                var_22 *= ((arr_15 [i_3] [i_3] [i_4]) + var_4);
                                var_23 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_24 |= ((((max((max(28, var_11)), (!var_16)))) ? (((((var_16 ? var_9 : (arr_28 [i_7]))) != (~var_8)))) : (max(((-6048233805126436693 ? 160 : var_10)), (~var_17)))));
                    var_25 = (~var_5);

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_39 [i_10] [i_8] [i_8 + 1] [i_8] = ((!((((arr_31 [i_7] [i_7] [i_7]) + (!4061140964))))));
                        var_26 += (min((max(14, (min(var_3, (arr_26 [i_10] [i_10]))))), -var_17));
                    }
                    arr_40 [i_7] [i_8 - 2] [i_8] [i_8 - 2] = ((!(arr_30 [6] [i_8 - 4] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
