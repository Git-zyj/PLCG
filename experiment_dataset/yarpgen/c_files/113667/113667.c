/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((min(-18520, 255))) | var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max((arr_5 [i_0] [i_0] [i_1 + 3]), ((((arr_4 [i_0]) ? var_5 : (arr_4 [i_0]))))));
                var_21 = (~66);
            }
        }
    }
    #pragma endscop
}
