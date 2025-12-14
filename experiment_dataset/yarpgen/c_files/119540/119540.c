/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 24;
    var_17 = ((~((~(min(var_13, var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_3;
                    var_19 = (arr_6 [11]);
                    var_20 = (((((arr_4 [i_2]) ? (arr_4 [i_0 - 2]) : (((arr_1 [i_2]) ? 1 : 838776940)))) | (((((min(var_11, 0))) ? -25966 : ((min(137, (arr_2 [16])))))))));
                }
            }
        }
    }
    var_21 = (var_5 ^ var_13);
    var_22 ^= (((((var_3 & (~var_10)))) ? var_5 : var_15));
    #pragma endscop
}
