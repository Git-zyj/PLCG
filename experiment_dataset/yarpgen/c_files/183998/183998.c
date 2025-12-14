/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((-((var_13 | (((var_14 >> (var_14 - 63809)))))))))));
                    var_20 = ((-(18446744073709551607 >> 1)));
                }
            }
        }
    }
    var_21 = var_9;
    var_22 = (max(((((max(var_8, var_2)) + var_8))), (((var_11 + var_4) * var_4))));
    #pragma endscop
}
