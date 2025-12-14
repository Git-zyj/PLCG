/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = ((((!(arr_6 [i_1 - 1]))) ? (((min(-5257, 3)))) : var_6));
                    var_16 = (~421);
                }
            }
        }
    }
    var_17 = (min(var_17, var_13));
    var_18 &= ((18446744073709551599 ^ (((max(18446744073709551599, var_8))))));
    var_19 = var_1;
    #pragma endscop
}
