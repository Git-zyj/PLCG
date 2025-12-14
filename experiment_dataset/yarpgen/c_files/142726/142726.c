/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [2] = (((max((12 < 7458), (arr_2 [i_0 + 3] [i_0 + 3]))) + (!var_9)));
        var_14 = min((-32767 - 1), var_10);
        arr_5 [i_0] &= ((-(max((arr_1 [i_0 + 2]), 1))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_13 [i_0 + 3] [i_1] [i_2] [i_3 + 1] = (min(((-(arr_6 [i_0 + 1]))), 32767));
                        var_15 = (min(var_15, (min(((-((-(arr_1 [i_2 - 2]))))), (~var_1)))));
                    }
                }
            }
        }
    }
    var_16 = -var_9;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                var_17 ^= 34374;
                var_18 = (max(var_18, -52));
            }
        }
    }
    #pragma endscop
}
