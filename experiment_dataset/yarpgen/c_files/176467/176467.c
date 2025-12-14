/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_13, (max(var_1, (var_4 && -1307309343)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = var_9;
        var_18 = (max((max((((arr_3 [i_0]) / var_0)), 32)), ((((min(var_8, (arr_1 [i_0] [i_0]))) - ((var_5 ? var_2 : (arr_2 [i_0]))))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_19 += (arr_4 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_16 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((8435810845739641161 ? 3669052292 : 1266035801))) ? (((max((((arr_12 [i_1] [i_1] [i_1 - 2]) && (arr_4 [i_1]))), 1)))) : (min((max((arr_2 [i_4]), 15)), 1))));
                        var_20 = arr_4 [i_1];
                        arr_17 [i_1] [i_4] = ((((max((max((arr_3 [i_1]), (arr_10 [i_1] [i_2] [i_3]))), ((var_2 ? (arr_4 [i_4]) : (arr_4 [i_2])))))) != (max(100663296, 128))));
                        arr_18 [i_4] [i_4] = (max((arr_1 [i_1] [i_2]), -24974));
                        var_21 = ((-(arr_5 [i_3] [i_4])));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                {
                    arr_29 [i_5] = var_3;
                    var_22 = (arr_21 [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
