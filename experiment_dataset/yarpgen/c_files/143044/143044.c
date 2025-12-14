/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = ((var_6 <= (min(-28253, 8418463175069892987))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0 + 1] [i_1] [i_0] = ((max((arr_1 [i_0]), (arr_3 [i_0 - 2] [i_0] [i_0 + 1]))));
                    var_14 = max(var_8, (min(8418463175069892983, 8418463175069892973)));
                }
            }
        }
    }
    var_15 |= ((min(var_1, 8418463175069893000)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_18 [i_3] = (min((min(27825, 10028280898639658622)), -10028280898639658656));
                arr_19 [i_3] = (arr_3 [i_3] [i_3] [i_3]);
            }
        }
    }
    #pragma endscop
}
