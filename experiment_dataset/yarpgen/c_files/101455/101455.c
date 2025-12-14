/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = ((((-(max((-127 - 1), 18014398509480960)))) * ((((arr_4 [i_1] [i_1 - 3]) >> ((((-10410 ? var_14 : var_1)) + 982297675)))))));
                    var_16 |= (min(255, 11221577649185683297));
                }
            }
        }
    }
    var_17 |= (((((((-9223372036854775807 - 1) ? 0 : var_11))) ? (!1) : var_15)) - var_1);
    #pragma endscop
}
