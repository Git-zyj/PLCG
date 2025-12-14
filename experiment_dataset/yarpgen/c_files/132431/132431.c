/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = ((min(0, 4649061102184416617)));
                    var_19 = ((((min(var_12, var_9))) ? (max((-7133 ^ var_4), (min(var_12, 2759021418)))) : (((0 << ((((-42 ? (arr_5 [i_0] [i_0] [i_0]) : 31170)) - 7052659663110944659)))))));
                }
            }
        }
    }
    var_20 = 0;
    #pragma endscop
}
