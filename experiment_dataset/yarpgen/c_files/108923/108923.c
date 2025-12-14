/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 93;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(106, 268435455));
                arr_6 [i_0] |= (max(0, (max(13992664454344501720, 1))));
                var_15 += 18446744073441116160;
                arr_7 [i_0] [14] [i_0] = 4088;
            }
        }
    }
    #pragma endscop
}
