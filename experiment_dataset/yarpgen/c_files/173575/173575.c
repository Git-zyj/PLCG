/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = ((((87 ? var_7 : (var_1 - var_8))) != (~80)));
    var_16 = (!-84);
    var_17 -= ((((((var_6 ? var_7 : var_9)) > ((1 ? var_1 : var_9))))) << ((max(1, -14120))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (arr_8 [i_0] [i_1] [i_2])));
                    var_19 = (-90 ^ -115);
                    var_20 = (((min((arr_1 [i_1 - 1]), (arr_2 [i_0] [i_1]))) << ((((max(0, 9093835104835350701))) + 1112526687))));
                }
            }
        }
    }
    #pragma endscop
}
