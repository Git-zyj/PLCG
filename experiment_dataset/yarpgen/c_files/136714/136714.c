/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((5751317100362952664 << (-33 + 92)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = var_6;
                var_13 = (((((arr_5 [i_0 - 1] [i_0]) > var_3)) ? (5751317100362952664 | -57) : ((max(var_1, (arr_5 [i_0 + 1] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
