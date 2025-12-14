/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_1] [i_0 + 1] = ((((((var_0 ? var_6 : var_0))) <= var_14)));
                    arr_12 [i_0] [i_2 + 2] = (30992 * ((-((min(58528, -5))))));
                    var_15 = (max((max((arr_4 [i_2 - 1] [i_2] [i_2 + 2]), (arr_9 [i_0 + 1] [i_2 - 1] [i_2] [i_0 + 1]))), (((~((200 ? -94 : 2255145032)))))));
                }
            }
        }
    }
    var_16 = (max(var_16, var_14));
    #pragma endscop
}
