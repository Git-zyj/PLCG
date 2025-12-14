/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = 5;
                    var_19 = (((24928 < 24915) - ((var_8 ? var_7 : (((arr_5 [i_0]) + 40621))))));
                }
            }
        }
    }
    var_20 = -75026066;
    var_21 = ((~((((min(57237, 40608))) ? var_14 : (min(var_12, 124))))));
    var_22 = var_10;
    #pragma endscop
}
