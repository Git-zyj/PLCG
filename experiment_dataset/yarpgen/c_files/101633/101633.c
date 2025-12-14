/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-16 | -1);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [7] = (arr_1 [i_0 + 2]);
                var_20 = -13650691805370431867;
                arr_5 [i_0] = ((-(arr_3 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
