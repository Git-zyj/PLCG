/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_12);
    var_15 = ((var_13 ? (((((-2049158339 ? var_9 : 90))) % (min(-8537698473101489161, var_10)))) : ((var_7 ? (var_11 % var_3) : 8537698473101489160))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [12] [i_1] [i_1] = (arr_0 [i_0 - 2]);
                arr_5 [i_0] [i_1] |= ((((12136951796224652018 & (var_9 % -8537698473101489173))) % (((var_13 & (arr_0 [i_0 + 2]))))));
            }
        }
    }
    #pragma endscop
}
