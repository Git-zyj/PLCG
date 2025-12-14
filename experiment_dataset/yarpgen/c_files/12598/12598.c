/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = var_0;
                arr_5 [i_0] = arr_4 [i_0] [i_1 + 1];
                arr_6 [i_1] [i_1] = (~54);
                arr_7 [8] [i_1] [i_1 + 1] = 6375625343171477276;
            }
        }
    }
    var_14 = 12071118730538074364;
    var_15 = -12071118730538074339;
    #pragma endscop
}
