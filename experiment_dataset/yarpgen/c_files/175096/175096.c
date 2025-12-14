/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 &= (((~27592) ? (arr_1 [4] [0]) : ((-452017549 ? 0 : -8964996339297159187))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = var_8;
                        var_11 = ((min((((var_9 ? (arr_4 [9] [i_1] [i_3]) : 19))), ((28 ? var_4 : 0)))));
                        var_12 = (55486 ^ 18779);
                    }
                }
            }
        }
    }
    var_13 = ((var_8 ? (min(-2, var_0)) : 3));
    #pragma endscop
}
