/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (29336 || -4166699098630292241);
                var_17 = ((-30772 ? ((max(-4166699098630292241, (arr_2 [i_0] [i_1] [i_0])))) : (((arr_0 [i_0]) | (arr_2 [i_0] [i_0] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 ^= (((!var_14) | (!14803)));
                    var_19 = (!var_5);
                }
            }
        }
    }
    var_20 = (max(var_20, var_15));
    #pragma endscop
}
