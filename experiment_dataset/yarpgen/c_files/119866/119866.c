/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((978368162 ? var_9 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_0] [i_1] = (arr_4 [i_2 - 1] [i_2 - 3] [i_1 + 1]);
                    arr_9 [i_0] [5] [i_1] = (arr_2 [i_1 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
