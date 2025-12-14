/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_11;
        var_18 = ((-(min(var_14, (((arr_0 [i_0] [i_0]) ? 1 : (arr_2 [i_0])))))));
        arr_4 [i_0] = (((((((var_17 ^ (arr_2 [i_0]))) <= var_4))) | (((((arr_1 [i_0] [i_0]) * 1))))));
    }
    var_19 = ((((((1 | 4166542319) % var_15))) ? (((var_10 >> (var_5 - 39150)))) : -var_6));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_20 ^= (((((!((max(-20685, 1)))))) + (!var_14)));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_13 [i_2] [i_2] = (((arr_6 [i_1]) ? (max((arr_5 [i_1]), 1852476802)) : 0));
            var_21 = min((((max(1, var_6)) | (arr_6 [6]))), ((-31812 ? 1 : var_9)));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_22 *= -20827;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_23 = (((((arr_12 [i_1] [i_3]) ? (~var_10) : ((~(arr_17 [10] [8]))))) - ((max((1 + var_3), var_6)))));
                        var_24 ^= (var_15 > var_13);
                    }
                }
            }
            var_25 = (arr_18 [i_3 + 4] [20]);
        }
        arr_22 [12] = (((((arr_11 [i_1] [13] [13]) && (arr_11 [i_1] [i_1] [i_1]))) ? ((max(1, -5063))) : 19));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_26 = (((arr_21 [1]) ? ((((1 * 1) > (arr_11 [i_6] [i_6] [i_6])))) : (arr_12 [i_6] [1])));
        arr_26 [i_6] [i_6] = 1;
        var_27 = (arr_9 [i_6]);
    }
    #pragma endscop
}
