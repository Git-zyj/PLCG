/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (~5);
    var_12 = (min(192, (~50)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max((36808 && -113), 202)))));
                var_14 |= var_2;
            }
        }
    }
    var_15 += (((~(~var_1))));
    #pragma endscop
}
