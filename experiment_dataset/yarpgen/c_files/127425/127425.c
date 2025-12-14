/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_3, var_9));
    var_18 = (max((~var_14), (~var_11)));
    var_19 = (min((min(var_14, 1272910949)), var_13));
    var_20 = ((((((var_7 ? 3022056347 : var_13)) * var_9))) / var_3);

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        arr_2 [3] = (min(var_6, 43552));
        var_22 = (min(var_22, (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_23 = var_0;
            arr_5 [i_0] [i_1] = ((!((((~var_5) - -1272910949)))));
            arr_6 [i_0] [i_1] [i_0] = ((((((var_3 ? 274875809792 : (arr_4 [i_0] [i_1] [i_1]))) > (var_5 > 2315712402757681362))) ? (min((max((arr_3 [i_0]), -4092551771742321070)), var_12)) : ((+(min((arr_1 [i_1]), -1900365183835230740))))));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                var_24 *= arr_0 [i_0 + 1];

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_25 -= (arr_3 [2]);
                    arr_12 [i_1] [1] [i_1] = (max(var_2, (arr_3 [i_0])));
                    arr_13 [i_1] [i_2] [i_1] [i_0] [7] [i_1] = 13314;
                    var_26 = ((var_2 ? (arr_0 [9]) : (min(var_12, ((~(arr_10 [i_0] [i_3] [i_1] [i_0])))))));
                    arr_14 [i_0] [i_1] [i_0] [i_1] = -1;
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_2] [i_1] = (max((arr_4 [i_2 + 1] [i_0 + 2] [i_4 + 1]), ((min(var_1, 3022056347)))));
                    var_27 -= 4017014979091707737;
                }
            }
            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                arr_21 [i_1] = (((((-(arr_11 [i_0] [i_0] [i_1] [i_1]))) & 3022056346)));
                arr_22 [i_5] [i_1] [i_0 - 3] = ((((1272910950 ? var_11 : 14234151142550731434)) % ((((arr_3 [6]) + (min((arr_9 [i_1]), (arr_7 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_28 [i_0] [i_1] [i_0] [1] [i_7] [13] [i_0] = (((((-((var_8 ? (arr_8 [i_0] [i_5] [i_6] [i_1]) : (arr_7 [i_1])))))) || (((((arr_9 [i_1]) >= 35639)) || ((max((arr_3 [15]), (arr_4 [i_7] [i_1] [i_0]))))))));
                            arr_29 [i_0 - 1] [i_0] [1] [i_1] [i_0] = ((min((min((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [15] [i_0]), 3340005765549337068)), (var_14 && 2644489599713880784))) & 29887);
                            var_28 = (min(var_28, (arr_19 [i_7] [i_7])));
                            arr_30 [i_1] = 2273328051976208877;
                        }
                    }
                }
                arr_31 [i_1] = (min(((((!(arr_9 [i_1]))))), (min(35639, -110))));
                arr_32 [i_0] [i_1] [i_1] = (~(max((arr_27 [i_0] [8] [8] [i_0] [i_0 + 1] [i_0] [i_0]), (((-(arr_9 [i_1])))))));
            }
            var_29 = (min(var_29, (((-((max(((((arr_7 [10]) || 65535))), var_16))))))));
        }
        arr_33 [i_0] = 53230;
    }
    #pragma endscop
}
