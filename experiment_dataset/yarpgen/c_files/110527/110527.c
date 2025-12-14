/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((((min((arr_1 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((~(arr_3 [i_0] [i_0])))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((!(arr_3 [i_0] [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [13] = ((~(max((arr_8 [i_0] [i_1]), ((min(-23612, 7483)))))));
                arr_11 [i_0] = ((23611 < (((!(23611 + -23612))))));
            }
            /* vectorizable */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_12 = var_8;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_13 = (((arr_14 [i_3 - 1] [i_4] [i_5 + 2] [i_5]) ? (arr_14 [i_3 - 1] [i_3] [i_5 + 2] [i_5]) : (arr_14 [i_3 - 1] [i_5] [i_5 + 2] [i_5])));
                            var_14 = (~var_8);
                            var_15 = (((arr_4 [i_1] [i_3 + 1] [i_5 - 1]) ? (arr_7 [i_0] [i_1] [i_5 - 2] [i_4]) : (arr_4 [i_0] [i_3 + 1] [i_5 - 4])));
                        }
                    }
                }
            }
        }
        var_16 = -87;
        var_17 |= (((max((arr_0 [i_0]), 23611)) * (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_18 = (max(var_18, (((!((((var_5 * var_4) / (((var_2 ? var_0 : 87)))))))))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_19 = ((((23602 ? (arr_9 [i_6] [i_6] [i_6] [i_6]) : -88)) < (arr_9 [i_6] [i_7] [i_8] [i_8])));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_20 = (~4775242456818789459);
                        var_21 = (min(var_21, -7484));
                        var_22 = (~4096);
                    }
                    arr_31 [i_6] [i_6] [i_6] = (((((-((~(arr_2 [i_6] [i_6])))))) ? ((min(85, (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])))) : (+-7490)));
                }
            }
        }
    }
    #pragma endscop
}
