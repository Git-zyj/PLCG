/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 2] [i_0 - 2] = min(-var_12, (arr_4 [i_0 - 1]));
                    var_15 = (min(var_15, (((((max((arr_6 [i_0 + 1] [i_0 - 3]), var_8))) ? (~1254704155) : (min(var_10, (arr_7 [17] [22] [17] [i_0]))))))));
                }
            }
        }
    }
    var_16 = var_12;
    var_17 *= (~12);
    #pragma endscop
}
