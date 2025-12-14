/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = 3909941340050897835;
        arr_3 [i_0] [i_0] = (((((((arr_2 [i_0] [i_0]) != (arr_2 [i_0] [i_0]))))) & var_9));
        var_13 = (--120);
        arr_4 [i_0] = (((3909941340050897815 | (max((arr_0 [i_0]), 3909941340050897816)))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = 3909941340050897811;
        var_15 = 25168;
        var_16 = var_10;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_2] = ((((arr_6 [2]) * var_9)));
            var_17 = (min(var_17, (~var_4)));
            var_18 = 80;
            arr_10 [0] [i_2] = ((5533436477936763315 ? 863118025 : 25168));
            arr_11 [i_1] [6] [i_2] = (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_2]) : (arr_8 [i_2] [i_2])));
        }
    }
    #pragma endscop
}
