/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_4, -109));
    var_12 = ((0 ? 8257536 : 12481940893308416554));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~((((min(-99, 2147483647))) ? (57853 - 79) : -0))));
                var_13 = (max(var_13, ((((-((177 ? var_0 : 127))))))));
            }
        }
    }
    var_14 = (((((var_5 ? (var_3 & var_1) : var_6))) ? var_6 : -79));
    #pragma endscop
}
