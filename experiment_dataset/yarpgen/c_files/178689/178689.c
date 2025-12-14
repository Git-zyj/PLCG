/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -var_4;
        var_11 = ((+(((arr_1 [i_0]) ? (var_7 - 1) : (max((arr_1 [i_0]), (arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] = (min(((((max(var_7, 12059840974233961928))) ? var_6 : (max((arr_1 [i_0]), (arr_0 [i_0]))))), ((((var_0 | 1) * var_7)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] [i_2] = (arr_4 [i_2]);
                var_12 = ((var_10 - ((((arr_0 [i_1 + 1]) >= var_7)))));
                var_13 = var_3;
            }
        }
    }
    #pragma endscop
}
