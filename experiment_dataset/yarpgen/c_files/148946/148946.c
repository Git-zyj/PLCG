/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [3] = var_4;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_1] = (((arr_6 [i_1] [i_1] [i_1]) <= (arr_7 [i_1] [i_1] [i_1 - 1])));
                        var_19 = 318543522;
                        arr_14 [i_1] = ((var_7 ? ((0 ? 0 : -1)) : (arr_2 [10])));
                    }
                }
            }
            arr_15 [i_1] [i_1] [i_1] = (((arr_3 [i_1 - 1]) && (arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1])));
        }
    }
    #pragma endscop
}
