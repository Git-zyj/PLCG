/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((!var_4), 253))) ? var_1 : ((~(max(var_11, 1214935209))))));
    var_14 = (((((~(var_3 ^ var_5)))) | (min(var_4, var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_5 [i_1] [5])));
                var_16 = -var_10;
            }
        }
    }
    var_17 = ((-((var_5 ? var_3 : var_12))));
    var_18 *= var_1;
    #pragma endscop
}
