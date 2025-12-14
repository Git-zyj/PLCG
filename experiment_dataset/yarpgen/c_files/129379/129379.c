/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_1 ? var_4 : -6641735048002420962));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((-(min((arr_3 [i_1]), (~var_6))))))));
                var_20 = (max((~13439), var_9));
                arr_5 [i_0] [i_0] [i_0] = (((((var_5 <= 3002920992) ? (min((arr_1 [i_0] [i_0]), 3002921002)) : 1073740800)) == 82));
            }
        }
    }
    #pragma endscop
}
