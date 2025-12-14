/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 *= (((max((~var_7), (15324167036938927956 + var_6))) << 0));
                arr_4 [i_1] [i_0] [i_0] = (((arr_3 [i_0] [i_1]) + ((~(arr_2 [i_1] [i_0])))));
            }
        }
    }
    var_18 += (((((-(var_4 & var_12)))) ? var_10 : var_4));
    #pragma endscop
}
