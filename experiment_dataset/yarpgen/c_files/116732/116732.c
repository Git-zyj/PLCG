/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (((((min(-871621776, var_10)))) ? 871621776 : (min((arr_6 [i_2] [i_1] [i_2] [i_0]), var_7))));
                    arr_8 [i_0] = ((~((((arr_2 [i_0]) || (arr_2 [i_0]))))));
                }
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
