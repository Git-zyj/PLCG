/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_12, var_11)) >= (var_12 | var_12)));
    var_15 = (min(var_15, (((~(((!((max(3897, -29769)))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_16 = (((~0) ? var_3 : 38407));
                        var_17 = (((arr_2 [i_0] [i_2] [i_0]) - (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_18 = (((arr_7 [i_3] [i_1] [11] [i_3 + 1]) * (arr_7 [i_0] [i_1] [8] [i_3 + 1])));
                        var_19 = var_2;
                        var_20 = (var_0 == var_1);
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_21 = (arr_9 [i_4 + 1] [i_5 + 1] [9] [i_6 + 2]);
                            var_22 = ((((!(arr_1 [i_0]))) || (arr_9 [i_7] [i_5] [i_5] [i_0])));
                        }
                    }
                }
            }
            var_23 = var_12;
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_25 [i_0] [i_0] = (((arr_6 [i_8]) * (86 * 4165000553)));
            var_24 = var_10;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_29 [i_9] &= var_10;
            var_25 = ((arr_22 [i_9] [i_9] [i_0]) ? var_10 : var_1);
            var_26 = (65530 > 930501233);
            arr_30 [i_9] [i_0] [i_0] = (arr_6 [i_0]);
            var_27 = (((arr_8 [11] [i_9] [i_9] [i_9] [i_0]) ? (arr_8 [i_0] [i_9] [i_9] [i_9] [i_0]) : (arr_8 [i_0] [i_9] [i_0] [3] [i_0])));
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_28 = 23;
        var_29 = (min((((arr_32 [i_10]) | (arr_32 [i_10]))), (192 == 4193928224)));
        var_30 = (((~69605133) ? 17601008221294582582 : 27799));
        arr_35 [i_10] = var_8;
        var_31 = (arr_32 [i_10]);
    }
    #pragma endscop
}
