/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-1108489101);
    var_20 = var_9;
    var_21 |= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = ((var_10 ? (((((arr_4 [i_0] [i_1 - 1]) || (arr_4 [i_0] [i_1 - 2]))))) : (((arr_4 [18] [i_1 + 1]) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1] [i_1 - 2])))));
                    var_23 *= ((-var_9 || ((!(((0 ? 17313095884686460582 : 229)))))));
                }
            }
        }
    }
    #pragma endscop
}
