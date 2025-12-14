/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_12 * (var_0 - var_12))) & (((max(var_11, var_15))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min(654490046747549935, 2553452552)));
        var_18 ^= (min(var_8, var_1));
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = ((+(((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_19 = ((-((max(var_1, (arr_6 [i_1 + 1] [i_1 - 2]))))));
        var_20 = (-117 ^ 1510513845);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_21 = (arr_8 [i_2] [i_2]);
        var_22 = ((((((arr_7 [i_2]) >> (var_7 - 41664)))) ? (max((arr_7 [i_2]), (arr_7 [i_2]))) : var_16));
        var_23 = (arr_7 [i_2]);
    }
    var_24 = (max(var_24, var_14));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_3] [14] [i_3] = ((536870911 ? (((arr_12 [i_3]) ? (arr_11 [13]) : (arr_11 [i_5]))) : (((arr_15 [14] [i_4] [i_3 + 2] [i_4]) ? (arr_14 [i_3] [i_4] [i_3 + 3] [i_3]) : var_9))));
                    arr_17 [i_3 - 1] [i_4] [i_3] = ((((var_13 ? (arr_9 [i_3 + 3]) : (arr_9 [i_5 - 1]))) - (((arr_9 [i_4]) - (arr_9 [i_5 + 1])))));
                    var_25 = 7168;
                }
                var_26 *= (arr_12 [8]);
                arr_18 [i_3] [i_3] = ((141 ? 3 : 103));
            }
        }
    }
    #pragma endscop
}
