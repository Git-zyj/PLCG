/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-5647707581685742954 <= (-2069198017634928324 ^ 1245055242)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = 1187233878;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_17 = ((4294967284 ? 1187233849 : (((((arr_5 [9] [i_1] [i_0]) ? -1187233863 : 4294967275))))));
                    var_18 = ((~(~1)));
                }
            }
        }
        var_19 = (min(0, 24909));
    }
    #pragma endscop
}
