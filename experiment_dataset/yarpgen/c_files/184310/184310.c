/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((14930133942640195611 ? ((-(max(3922888918, var_4)))) : ((((((var_10 ? var_5 : var_3))) ? (min(-13664, 995737197)) : 194)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((min((arr_1 [i_0 - 1]), var_1)));
                arr_5 [i_0] &= (max(28234, 63));
                var_13 = (min((((arr_2 [i_0] [i_0]) | (arr_2 [12] [i_0 - 1]))), (arr_2 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
