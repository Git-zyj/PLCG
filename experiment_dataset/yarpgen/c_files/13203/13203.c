/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 -= (min((var_5 + 58337), ((1516823486 ? (~var_8) : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 + 1] [i_2] [i_0] [i_0] = var_2;
                        arr_10 [8] [8] [i_2] [i_0] = 1;
                    }
                }
            }
        }
        var_14 = ((arr_0 [i_0] [i_0]) || (arr_4 [i_0]));
        var_15 = (min(var_15, (arr_0 [11] [i_0])));
    }
    #pragma endscop
}
