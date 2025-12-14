/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 | (((~var_2) ? (!var_12) : (var_6 / 17370810740838793782)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [15] [i_0] [i_0] = ((((((1 ? -581972750874373754 : 0)) % (255 | 33))) > 1));
                    var_15 |= ((var_6 < (min((((!(arr_8 [i_0] [i_1] [1] [i_1])))), ((89 ? 10059546268825093023 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
