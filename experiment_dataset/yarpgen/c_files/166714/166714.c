/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(264241152, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min((arr_2 [i_1] [i_0]), var_4));
                var_19 ^= (((((((max(0, (arr_0 [i_1] [i_1]))))) * ((-10415 ? var_16 : 693953115)))) | ((min(10415, (-5787 * -1))))));
            }
        }
    }
    #pragma endscop
}
