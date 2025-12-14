/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((min(13, 6))) ? (arr_0 [i_0]) : (((arr_2 [i_1 + 1]) ? var_9 : (arr_3 [i_1 - 1] [i_1] [i_1 + 4])))));
                var_14 = (max(var_14, ((((min(18, (arr_0 [i_1 - 1])))) ? (!6) : 26076))));
            }
        }
    }
    var_15 = 1;
    #pragma endscop
}
