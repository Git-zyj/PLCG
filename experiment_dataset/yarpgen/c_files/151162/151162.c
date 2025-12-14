/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 += ((-(min((arr_5 [i_1 - 2]), ((min(-59, 8391949893374387798)))))));
                    var_15 = 4294967289;
                }
            }
        }
    }
    var_16 = ((((min(((-28 ? 8391949893374387798 : var_1)), (((4294967289 ? var_5 : 6)))))) ? 153 : ((((var_12 ? var_8 : -901478722)) + var_5))));
    #pragma endscop
}
