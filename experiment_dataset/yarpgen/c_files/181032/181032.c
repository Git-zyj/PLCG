/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max((var_17 | var_7), var_12))) ? var_1 : (((~((max(36137, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = -4584957131846544396;
                var_21 = ((~(max(((((arr_5 [i_1] [i_1] [i_1]) ? 1 : var_3))), (arr_6 [i_0] [i_1])))));
            }
        }
    }
    var_22 &= var_10;
    var_23 = (min((((10459 ? ((var_2 ? var_18 : var_4)) : (max(var_4, var_10))))), var_16));
    #pragma endscop
}
