/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? var_2 : var_12));
    var_17 = (((-5096087424475514563 ? 60530 : (92 == var_10))));
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 &= (-(((!var_14) ? ((((var_11 + 2147483647) >> (((arr_6 [0] [i_1 + 2] [0]) - 3125248316164544477))))) : (max((arr_6 [i_0] [i_0] [i_0]), var_3)))));
                    var_20 = (min(var_20, (164 || -16777216)));
                }
            }
        }
    }
    #pragma endscop
}
