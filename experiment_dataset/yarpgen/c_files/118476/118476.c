/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(var_0, -1328832080301909375));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (min((min(3618478162, 4294967293)), (((!(arr_3 [i_1 + 1] [i_1] [i_0]))))));
                arr_5 [i_1] = ((-((var_6 ? (~-397364097) : (min(1328832080301909375, 4294967293))))));
            }
        }
    }
    var_15 += ((8191 ? 0 : (var_5 <= var_9)));
    #pragma endscop
}
