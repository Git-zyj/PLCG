/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -90;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((!(((74 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))))));
        var_16 = (min((min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 + 1]))), (arr_0 [i_0 - 1] [i_0 + 1])));
        var_17 = (arr_0 [i_0 - 1] [i_0 + 1]);
        var_18 = ((~(((arr_1 [i_0 + 1] [i_0]) ? -72 : (arr_0 [i_0 - 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 ^= (((((!((max((arr_3 [i_2]), 544587115)))))) <= (arr_7 [i_2])));
                    var_20 = (arr_0 [i_0 - 1] [i_1]);
                    arr_8 [i_0] [i_1] [i_2] = (min((min((~-1946536515), (arr_7 [i_0]))), var_0));
                    var_21 += (arr_7 [i_2]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_22 &= (((arr_9 [i_3 - 1]) ? (arr_9 [i_3 - 1]) : (arr_10 [i_3 - 1] [i_3 + 1])));

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            arr_13 [i_3] [i_4] = ((-3355010624025770712 ? ((-90 ? 19802729 : (arr_12 [i_3] [i_4] [i_4]))) : (arr_10 [i_3 + 1] [i_4 + 2])));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [i_3] [i_4] [i_5] = (3750380157 / 30053);
                var_23 += (arr_11 [i_5]);
                var_24 ^= (((((arr_10 [i_3] [i_4 + 3]) ? 1043682495860919538 : -30053))) ? (arr_15 [i_3 + 1] [i_5] [i_5]) : (arr_12 [i_3 + 1] [i_5] [i_5]));
                arr_19 [i_5] |= ((~(arr_17 [i_4] [i_4] [0])));
            }
        }
        arr_20 [i_3] [i_3] = (((arr_16 [i_3] [5] [16] [i_3 + 1]) > (arr_17 [i_3] [17] [i_3])));
        var_25 = (((arr_17 [i_3] [i_3 - 1] [i_3 - 1]) ? (arr_17 [i_3] [i_3 - 1] [i_3 - 1]) : 111));
        var_26 = ((+(((arr_17 [5] [i_3 - 1] [i_3]) ? (arr_10 [i_3 - 1] [i_3 - 1]) : 8769759346312653675))));
    }
    var_27 = ((!((((((var_0 ? var_7 : var_9))) ? (max(var_2, var_6)) : -var_11)))));
    #pragma endscop
}
