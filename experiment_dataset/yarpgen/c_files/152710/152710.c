/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((1 >= 0) < -1))) % var_6));
    var_19 = ((max((~255), (~var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((((arr_0 [i_0 + 2] [i_1 + 1]) & (arr_0 [i_0 - 2] [i_1 + 4]))));
                var_21 += ((125 << (((arr_1 [i_0 - 1] [i_1 - 2]) - 14763))));
            }
        }
    }
    #pragma endscop
}
