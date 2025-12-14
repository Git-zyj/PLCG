/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (arr_2 [i_0]);
                var_14 = (((arr_3 [i_0] [i_0] [i_1]) / -var_8));
            }
        }
    }
    var_15 = ((((min((-32767 - 1), (0 == 3)))) ? 12 : var_3));
    #pragma endscop
}
