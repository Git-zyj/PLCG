/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                var_10 = (~-var_3);
                var_11 = (arr_0 [i_0]);

                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((~(arr_3 [i_2])));
                    var_12 = (arr_1 [i_1]);
                    arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] = (arr_5 [i_2] [7] [i_2] [i_3]);
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_13 = (540447219 ? 194 : 12990162364554979915);
                    var_14 = var_6;

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_15 = ((-(arr_2 [i_1] [i_1] [i_2 + 1])));
                        var_16 = ((66 ? 45765 : 12990162364554979915));
                    }
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] = var_5;
                        var_17 = (arr_13 [i_1 + 2] [i_2 + 1] [i_2] [i_4]);
                        var_18 &= ((125 ? -540447220 : 12990162364554979901));
                        var_19 = (((var_2 ? (arr_15 [i_6] [i_1] [i_0]) : (arr_3 [i_6]))));
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        var_20 = (((arr_20 [i_0] [i_1 - 2] [i_2 + 1]) ^ 9223372036854775807));
                        var_21 = (arr_8 [i_0] [2] [2] [i_2 + 1]);
                        var_22 ^= (arr_6 [i_0]);
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_30 [i_2] = ((arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1]) ? (arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1]) : (arr_2 [i_1 - 2] [i_1 - 3] [i_2 + 1]));
                    var_23 = (((((var_8 ? -540447212 : var_1))) ? var_9 : (!var_8)));
                }
            }
            var_24 = 113;
        }
        var_25 = ((((((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [0]) : (arr_13 [i_0] [i_0] [i_0] [6])))) ? (min(((max((arr_26 [i_0] [i_0] [i_0] [16] [i_0]), (arr_25 [i_0] [i_0] [i_0] [i_0] [8])))), var_8)) : ((((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_20 [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_26 = var_8;
                    var_27 = (max(var_27, (arr_1 [i_10])));
                }
            }
        }
        var_28 = var_4;
        var_29 = var_8;
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23;i_11 += 1)
    {
        var_30 = var_4;
        var_31 = var_9;
        var_32 ^= 61125;
    }
    var_33 = (((((var_7 ? var_4 : (var_0 && var_9)))) ? (((min(var_0, var_2)))) : (max((~var_9), var_7))));
    var_34 = (max(540447219, -540447219));
    var_35 = var_6;
    var_36 = (min(var_36, var_1));
    #pragma endscop
}
