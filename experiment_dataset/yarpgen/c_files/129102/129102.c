/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 *= ((max((arr_5 [i_1 + 2] [i_0 - 1] [i_0 - 1] [i_0]), (arr_5 [i_1 + 2] [5] [i_1] [i_1]))));
                    var_17 = ((((((-(arr_1 [i_0] [1]))))) ? 199508996 : 3591556171));
                    var_18 = ((!(arr_3 [i_0] [6])));
                    arr_7 [i_0] [3] [1] = 50604;
                    var_19 = 34288;
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = (max(var_21, ((((((max(var_9, var_14)) ? -4817683781242988453 : (var_11 != var_15))))))));

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        arr_10 [4] = 31271;
        var_22 = (min(var_22, (((((max(16256, 65535))) + (5 - 5))))));
        var_23 += ((((min((arr_9 [i_3 + 1]), (arr_8 [i_3 + 2])))) ? (((arr_9 [i_3 - 1]) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 + 2]))) : (min((arr_9 [i_3 + 1]), (arr_8 [i_3 + 1])))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_13 [0] = ((max((arr_8 [i_4 + 1]), (arr_9 [13]))) + ((((arr_11 [i_4 + 1] [i_4 - 1]) + (2147483647 == 4817683781242988453)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                {
                    var_24 = -807468884;
                    arr_18 [i_4] [i_6] = arr_14 [15];
                }
            }
        }
    }
    #pragma endscop
}
