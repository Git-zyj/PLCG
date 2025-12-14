/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 -= (max((arr_4 [1] [1]), (arr_5 [8])));
                var_20 = 121;
            }
        }
    }
    var_21 = (0 ? ((76 ? ((8 ? 2993841152 : var_14)) : -2993841157)) : -109);
    #pragma endscop
}
