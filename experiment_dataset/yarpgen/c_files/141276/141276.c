/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (~5863008317272151221);
                    var_14 = (var_12 % ((var_5 ? 7605829850160851295 : 3662718267099993861)));
                    var_15 = ((((var_9 / var_3) / var_0)) << (var_3 - 5933371916530707777));
                    var_16 = (~var_10);
                }
            }
        }
    }
    var_17 |= var_10;
    #pragma endscop
}
