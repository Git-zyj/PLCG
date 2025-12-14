/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (arr_5 [i_0 - 3] [i_0 - 3]);
                    var_12 += ((!((max((arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 3]), (arr_3 [i_2 - 2] [i_0 - 2] [i_0 + 2]))))));
                    var_13 = (min((((~var_9) ? (arr_5 [i_0] [i_0]) : (max(var_3, 127)))), ((max(-101, (~11))))));
                }
            }
        }
    }
    var_14 = ((var_10 & ((-(!var_3)))));
    var_15 -= (max(((~(!var_10))), ((((min(-127, 0))) ? (!var_7) : ((min(var_10, -31965)))))));
    var_16 = var_2;
    #pragma endscop
}
