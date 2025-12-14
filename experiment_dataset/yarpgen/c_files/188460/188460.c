/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (248 & 3457643681);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((((((((arr_8 [i_2]) ? 1 : (arr_0 [i_0])))) ? ((min(1, 57695))) : ((min((arr_2 [i_0] [1]), 1)))))) ? 1848460241 : (min(var_7, (arr_10 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])))));
                    arr_11 [i_0] [6] [i_0] &= ((669455320 | (min(1848460258, ((((arr_2 [i_1] [i_0]) * (arr_9 [i_0] [i_0]))))))));
                }
            }
        }
        var_20 |= (((((49165 ? (arr_7 [i_0] [18]) : var_6)) ^ (((45 & (arr_4 [i_0] [i_0])))))));
        arr_12 [i_0] [i_0] = ((!((min((((arr_9 [i_0] [i_0]) ? var_13 : (arr_10 [i_0] [i_0] [i_0] [i_0]))), var_1)))));
    }
    var_21 = var_7;
    var_22 = (-((var_13 ? var_8 : var_10)));
    var_23 = var_2;
    #pragma endscop
}
