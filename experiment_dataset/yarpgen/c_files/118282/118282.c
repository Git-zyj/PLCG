/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [9] [i_3 - 1] [i_1] [i_1] [i_0] [i_0] = (~-var_1);
                        arr_12 [i_1] [i_3 + 1] [i_0 - 2] [i_1 - 1] [i_1] = (arr_5 [i_3 - 1] [i_3 - 1]);
                        arr_13 [i_1] = ((255 ^ (((arr_6 [2] [i_1] [i_3 - 1]) ? (arr_7 [i_0 + 2] [i_1] [i_1]) : 45))));
                    }
                }
            }
            arr_14 [i_0 + 2] [i_1] [i_1] = var_10;
            var_11 -= var_3;
        }
        arr_15 [i_0] = (arr_0 [i_0]);
        var_12 = var_1;
    }
    var_13 = -9223372036854775804;
    #pragma endscop
}
