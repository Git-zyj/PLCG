/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [6] = (arr_0 [i_1] [i_0]);
                var_13 = (max(var_13, (max(((((-(arr_1 [i_0]))) - ((min(var_2, -18))))), ((-22214 ? ((22214 ? (arr_3 [i_0] [i_0]) : (arr_1 [i_1]))) : var_3))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_4] [4] = ((((max((arr_9 [i_4 + 3]), 19))) ? 22214 : 88));
                    var_14 = (max(var_14, ((((((max(var_6, 22204)))) + (((72 + var_10) + (3 * var_2))))))));
                }
            }
        }
    }
    #pragma endscop
}
