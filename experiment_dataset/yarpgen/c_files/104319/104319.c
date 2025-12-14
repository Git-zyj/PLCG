/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [15] = (((((max(54, var_6)))) > (min(1, 3))));
                arr_6 [7] [i_0] [i_0] = var_9;
            }
        }
    }
    var_15 = (max(var_12, (1 || -7472425341153323767)));
    var_16 = (((23136 ? 173 : 18446744073709551615)));
    #pragma endscop
}
