/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((max((arr_6 [i_0] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1]))));
                var_10 |= (((((max((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1]))))) | (max(-28, var_0))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_11 |= ((~((((min(var_0, (arr_1 [i_2 + 1])))) / ((1409201923410704434 ? var_6 : 1))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_12 = var_8;
                            var_13 = (max(var_13, (((0 <= (!1))))));
                            arr_22 [i_4] [i_3] [i_4] [i_5] [i_6] = (((arr_12 [i_2]) ? (arr_13 [i_2 - 2] [i_2] [i_2] [i_2 - 3]) : (arr_12 [i_2])));
                        }
                        arr_23 [i_2] [i_2] [i_4] [i_4] [i_5] = ((-(((max(-1480284055821037730, (arr_6 [i_2] [i_3] [i_5])))))));

                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            var_14 ^= (max((((arr_26 [i_2 - 2]) ? (arr_26 [i_2 - 3]) : (arr_26 [i_2 - 1]))), 36011204832919552));
                            var_15 = (arr_17 [i_5] [i_4] [i_4] [i_5]);
                            var_16 = (min(8590, ((min((min(var_2, var_2)), (arr_19 [i_2] [i_2] [i_4] [i_7] [i_7 - 1]))))));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_17 = var_9;
                            arr_30 [i_2] [i_4] [i_4] [i_8] = ((+((min((max((arr_10 [i_4]), var_1)), (arr_14 [i_2] [i_3 + 1] [i_2 + 1] [i_5]))))));
                            var_18 = 0;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_19 += (((((arr_0 [i_2 - 1]) && 67043328)) ? (((((arr_4 [i_2] [i_2] [i_2 + 2]) >= (arr_10 [i_2 - 2]))))) : (((arr_7 [i_2] [i_3] [i_4]) ? 10 : 1))));
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_4] = (((arr_21 [i_2 - 3] [i_3 + 1] [i_4] [i_5] [i_9]) >= (arr_21 [i_2] [i_4] [i_4] [i_5] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_10] [i_5] [i_4] [i_4] [i_4] [i_2] [i_2] = (((max((~4294967295), (arr_0 [i_2 - 2]))) - 1));
                            arr_37 [i_4] [i_4] = max(var_2, (((16 ? var_1 : 41282))));
                            arr_38 [i_2 + 1] [i_3] |= (min(var_6, var_6));
                        }
                    }
                }
            }
        }
        var_20 = (min((((!(arr_17 [i_2 + 3] [i_2] [i_2] [i_2 - 1])))), (arr_16 [i_2] [0] [i_2] [i_2] [i_2] [i_2])));
    }
    #pragma endscop
}
