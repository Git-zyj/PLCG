/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 + 1] = ((+(((arr_0 [i_0 - 1] [i_0 - 1]) ? var_5 : (arr_2 [i_0])))));
        var_12 = ((~(arr_0 [i_0 - 1] [i_0 - 1])));
        var_13 = ((3693914405 != (arr_2 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((var_0 != 13139318924202836007) >> (var_6 > var_0)))));
                        var_15 = (min(var_15, ((((13139318924202835999 && var_6) != ((var_6 | (arr_2 [i_0]))))))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_17 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = ((var_7 == (!3326748080)));
                            arr_18 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_1] = (((var_4 + var_3) && 1));
                            arr_19 [i_0] [i_1] [i_1] [i_1] [i_0 - 1] [i_1] = ((-(((arr_9 [i_2] [i_3]) & var_8))));
                            var_16 *= ((((0 << (var_1 - 7524305749800702456))) | (var_0 << var_7)));
                        }
                        arr_20 [i_1] [i_1] = -var_5;
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_1] = 13139318924202835978;
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_17 = (min(var_17, (max((~5307425149506715648), var_6))));
        arr_25 [i_5] = (min(((max((arr_22 [i_5 + 4] [i_5 + 4]), (((var_2 && (arr_24 [i_5]))))))), ((~(5512446973563221057 && 13139318924202836007)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    var_18 = ((var_7 & ((((var_8 | (arr_24 [i_5])))))));
                    var_19 = (max(var_19, (((~(max((~var_7), (max((arr_24 [i_5]), 4099195753988625956)))))))));
                }
            }
        }
        var_20 += (min(((((min(var_8, (arr_22 [i_5] [i_5 + 4])))) ? (var_11 > var_6) : var_5)), ((max((max(var_11, 127)), var_9)))));
        var_21 = (max(var_21, ((((((150 ? (arr_22 [i_5 + 4] [i_5 + 1]) : (arr_22 [i_5] [i_5 - 3])))) > 5307425149506715652)))));
    }
    var_22 += (max((((max(var_3, var_1)) / (var_0 * var_6))), var_7));
    var_23 = var_2;
    #pragma endscop
}
