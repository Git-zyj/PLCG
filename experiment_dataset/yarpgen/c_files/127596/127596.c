/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(65532, (((((1 ? var_4 : var_8)) < ((((arr_4 [i_0] [i_0] [i_0]) == var_6))))))));
                var_13 = (min(var_13, (((((min(((var_4 ? var_3 : var_2)), ((max(15036, 1)))))) ? (arr_4 [i_1] [i_0] [i_0]) : (min(var_10, 28825)))))));
            }
        }
    }
    var_14 = (min(var_14, (((((max(var_9, (var_8 - var_6)))) + (max((min(var_4, var_0)), (((33 ? var_6 : 119))))))))));
    var_15 += 63;
    var_16 = (min(var_16, var_1));
    var_17 = (max(((min(((var_0 ? -70 : var_2)), (var_3 < var_8)))), (min(((var_5 << (var_1 - 4799))), (~var_9)))));
    #pragma endscop
}
