/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((65529 ? var_4 : (max(-1356210633, var_7)))), 79);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((~(arr_1 [i_0])));
                var_21 += ((-(-65 + -92)));
            }
        }
    }
    var_22 = var_16;
    var_23 = (41958926 & 3992919795345143929);
    var_24 = ((min((9498 > 8), var_14)));
    #pragma endscop
}
