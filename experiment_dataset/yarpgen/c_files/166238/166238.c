/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, ((min(-3, 82)))));
        var_13 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_4 [i_1] &= (~2168329342);
        arr_5 [i_1] [i_1] = ((((((~var_0) ? (((var_4 ? 5118 : var_6))) : ((~(arr_3 [i_1] [i_1])))))) ? ((min(-65, var_3))) : (arr_2 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_14 = var_9;
                    arr_12 [i_1] [i_1] [i_2] [i_3] = ((~((((var_2 - (arr_7 [i_1]))) | -8604542146149997498))));
                }
            }
        }
    }
    #pragma endscop
}
