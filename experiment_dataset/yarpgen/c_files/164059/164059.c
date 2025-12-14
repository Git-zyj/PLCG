/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (0 && 548885167);
        arr_4 [i_0] = ((!((min(((-(arr_0 [i_0]))), -var_0)))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_7 [i_1 - 2] = var_2;
        arr_8 [i_1] [i_1 - 1] = (arr_5 [i_1 + 1] [i_1 + 1]);
        var_11 = (min(-16150, (arr_5 [i_1 - 3] [8])));
        var_12 = (((1072693248 / 255) * ((((!(arr_0 [i_1 - 3])))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_16 [i_3] [i_2 + 1] [i_2 + 1] [i_4 + 3] [9] [9] = (!(-9223372036854775807 - 1));
                        var_13 = (arr_2 [i_2 + 1] [i_2 + 1]);
                        var_14 = (min(var_14, (arr_6 [i_1 - 2] [4])));
                        var_15 = (((((arr_14 [i_1] [i_2 + 1] [13] [i_4 + 1] [15]) / (((arr_1 [i_1] [i_1]) | (arr_13 [i_1] [i_1] [9] [i_1 - 2]))))) != (((~(arr_11 [i_2] [i_2]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = ((!((((arr_10 [8]) ? (arr_1 [i_5] [i_5]) : (arr_2 [i_5] [i_5]))))));
        var_16 = (arr_18 [i_5] [i_5]);

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_22 [i_5] [i_6] = (((arr_20 [i_5] [i_6] [i_5]) * (arr_9 [i_6] [i_6] [i_5])));
            var_17 = ((~(arr_6 [i_5] [1])));
            var_18 = var_3;
        }
    }
    var_19 = (((!var_7) ? var_3 : (1988285229 - -var_6)));
    var_20 = var_1;
    #pragma endscop
}
