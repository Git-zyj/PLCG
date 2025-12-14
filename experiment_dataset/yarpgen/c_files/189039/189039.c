/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(((-18 ? var_6 : var_4)), 1797540337))) ? (min(-18, 2497426941)) : (2305843009213693952 != 1)));
    var_14 = (min((((((var_4 ? -18 : -18)) ^ ((max(var_9, var_6)))))), var_4));
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 -= ((((arr_2 [i_1 + 1] [i_1 - 2]) ? 1797540330 : var_10)));
                    var_17 = (max(((+((16140901064495857661 ? (arr_0 [i_0]) : 424348742)))), (arr_6 [i_2] [10] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
