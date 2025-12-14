/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, -var_5));
                    var_14 = ((5950 / ((min(5950, var_10)))));
                    arr_8 [i_0] [i_1 - 1] [i_1] = (((((4086781302 ? -5950 : (min(var_7, var_0))))) - var_4));
                }
            }
        }
    }
    var_15 -= (((-((var_6 ? -5951 : 190)))));
    var_16 = (min(var_16, (((((max(var_7, ((var_9 ? -30863 : var_9))))) ? (!65527) : ((-7622503891260914019 ? var_0 : var_10)))))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_12 < (max(var_10, 7622503891260914019)))))));
                    var_18 = max((((((((arr_10 [i_3]) + var_11))) ? 5952 : -44983419))), (~var_1));
                }
            }
        }
    }
    #pragma endscop
}
