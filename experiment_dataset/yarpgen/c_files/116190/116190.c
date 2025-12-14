/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 <= (min(14596344208814253697, 1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (2147483647 < 1152780767118491648);
                var_14 = (max((arr_4 [i_1]), 15104292722694375449));
                arr_5 [i_0] [i_0] [i_1 - 2] = ((-8906717626702974473 ? var_1 : -8906717626702974473));
                var_15 -= (arr_3 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
