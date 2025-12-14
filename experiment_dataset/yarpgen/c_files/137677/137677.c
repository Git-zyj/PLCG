/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((!var_5), -2047561163));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [2] [9] |= ((~(var_11 ^ var_0)));
                    arr_8 [5] [i_1] [i_1] [i_1] = (min(((min((arr_0 [i_2]), var_5))), 107));
                }
            }
        }
    }
    var_19 = (max(((((~12770402737485412783) == var_15))), -107));
    var_20 = (min(var_1, ((16930 ? var_9 : (!-119)))));
    var_21 = ((!((min(var_17, ((var_1 ? var_7 : var_16)))))));
    #pragma endscop
}
