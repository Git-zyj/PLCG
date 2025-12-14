/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [18] [i_0] = (~var_2);
        arr_3 [i_0] [i_0] = (((-6117615612371248727 ^ (arr_1 [i_0 - 1] [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_13 [i_3] [i_3] [i_3] [i_3] &= (min((max(((1409 ? 8640032311689341136 : -4126010943737629961)), var_10)), (((max((arr_10 [i_3]), var_14))))));
                        var_17 += var_2;
                    }
                    arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_3] = var_7;
                    var_18 = ((((((arr_9 [i_1] [i_1 + 1] [23] [23]) ? (arr_11 [i_1 - 1] [i_2] [i_1] [i_1]) : var_4))) ? (arr_0 [i_1]) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
