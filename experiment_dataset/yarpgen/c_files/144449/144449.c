/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? var_4 : ((min(16376, var_8)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 |= -0;
        arr_3 [i_0] [i_0] = 72053195991416832;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = -1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_14 = (((max((arr_13 [i_4 + 1] [i_4 + 1] [i_3] [i_2]), -72053195991416833)) > (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                        arr_16 [i_4] [i_2] [i_3] [i_4 + 1] = (min(((!(arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))), (!var_10)));
                    }
                }
            }
        }
        arr_17 [i_1] = arr_9 [i_1];
    }
    #pragma endscop
}
