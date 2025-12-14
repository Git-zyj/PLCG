/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (114 ? 94 : 160);
    var_13 = 29518;
    var_14 = (!var_10);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = 144;
        var_16 = ((((((((~(arr_1 [14])))) ? (arr_1 [9]) : 75))) ? (!var_7) : ((((max(var_10, var_4))) ? ((1 % (arr_1 [11]))) : var_4))));
        arr_3 [11] [7] = (max((max(1, (arr_2 [i_0] [i_0]))), (arr_2 [13] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {
                arr_11 [i_1] [19] = (((arr_8 [14] [i_1] [0]) / 1));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_15 [1] [i_1] = (arr_10 [1]);

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (arr_8 [1] [i_1] [4]);

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = 144;
                            var_19 = (~115);
                            arr_21 [i_1] [12] [16] [2] [7] = (~var_10);
                            var_20 = var_6;
                            var_21 = (arr_19 [1] [1] [1] [14] [0] [4]);
                        }
                        arr_22 [1] [9] [12] [13] [11] [i_1] = (!18090352667014954731);
                    }
                    var_22 = -5490932822182543938;
                    var_23 = (var_9 > var_0);
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_25 [11] [i_1] = (max((arr_4 [5] [12]), ((max(var_7, -456850159)))));
                    var_24 = (arr_9 [15] [16] [1]);
                    arr_26 [i_1] = (((~var_6) * (arr_9 [4] [14] [16])));
                    arr_27 [13] [i_1] [2] = (~4491);
                    arr_28 [1] [16] [i_1] [1] = max(var_2, (arr_13 [1] [14] [3]));
                }
            }
        }
    }
    #pragma endscop
}
