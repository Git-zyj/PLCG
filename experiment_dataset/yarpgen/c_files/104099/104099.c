/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((~(152 || 152))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (min(var_11, (arr_0 [i_0])));
        var_12 *= var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (arr_3 [i_1]);
        var_14 = (((arr_1 [i_1] [i_1]) >> (((arr_3 [i_1]) - 52015))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_10 [5] [0] [i_3] = (arr_4 [i_3] [i_2]);
                    var_15 *= var_1;
                    var_16 = 2;
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
