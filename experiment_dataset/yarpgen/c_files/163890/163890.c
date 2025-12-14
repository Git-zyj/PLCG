/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_11;
                var_16 = var_10;
                var_17 = (min(var_8, (min(((var_13 ? var_9 : var_13)), (((!(arr_2 [i_0] [i_0 + 2] [i_1 - 1]))))))));
                var_18 = (-8612 & 3053089232);
            }
        }
    }
    var_19 = ((var_9 ? ((var_9 ? (var_0 % var_3) : (((var_0 ? var_9 : var_5))))) : var_10));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            {
                var_20 *= (max((1722824139853977156 / 3712600496), ((-(var_13 - var_10)))));
                var_21 = (71 & 3558765838);
            }
        }
    }
    #pragma endscop
}
