/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (max((min(((max(var_3, var_0))), ((var_3 ? 48 : var_0)))), var_0));
    var_14 *= var_6;
    var_15 = (max((((~((16336306730033429099 ? 207 : var_9))))), var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = ((((min(16336306730033429099, 52))) ? (max((max((arr_8 [11] [7]), 39)), (arr_3 [i_0 + 2]))) : (arr_5 [i_0] [i_1] [i_2 - 1])));
                    arr_9 [i_1] [6] [i_2] = (((max(-4147, 1))) ? 82 : 76);
                    var_17 *= min((arr_8 [i_1] [i_2]), (((arr_1 [i_2 + 1] [i_0 + 1]) ? var_10 : var_0)));
                }
            }
        }
    }
    #pragma endscop
}
