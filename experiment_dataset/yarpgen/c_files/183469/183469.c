/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((var_1 && (((var_6 ? ((var_6 ? var_11 : var_0)) : var_5)))));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_1]);
                arr_4 [i_0] [i_1] = (((((var_0 & ((min(45946, (arr_0 [i_1]))))))) ? (~var_3) : ((~(45946 / 15053)))));
                var_19 += arr_3 [i_1] [i_0];
            }
        }
    }
    var_20 -= var_9;
    #pragma endscop
}
