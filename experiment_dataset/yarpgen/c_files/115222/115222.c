/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (max(((~((var_8 ? var_5 : var_12)))), ((~(min(var_13, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [19] [1] [i_0 - 1] [i_0] = (!(var_5 * var_14));
                    var_18 ^= ((-(((((arr_5 [i_2] [i_1] [21] [i_0 + 3]) + (arr_5 [i_2] [i_1] [i_0] [i_0])))))));
                    arr_7 [i_0] = ((((min(var_11, var_13))) && (((var_10 ? (arr_0 [i_0] [3]) : (arr_2 [i_0]))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_10 [i_3] = var_11;
        var_19 = (-(arr_5 [i_3] [14] [1] [i_3 - 1]));
    }
    #pragma endscop
}
