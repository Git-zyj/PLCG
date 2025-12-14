/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 ^= (min(1, ((var_0 | (arr_0 [i_1])))));
                var_12 = ((-1 ? 1 : var_6));
            }
        }
    }
    var_13 = (((31443 ? -842823211 : 1641345516)) ^ var_1);
    #pragma endscop
}
