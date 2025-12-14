/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [i_1 - 1] [i_0] = ((var_7 <= (((((var_4 ? -30750 : var_2))) ? -30761 : 0))));
                arr_6 [i_0] [i_1 + 1] [i_1 + 1] = ((((((var_1 - var_11) ? -var_4 : 18446744073709551615))) ? (((min(var_9, var_3)) >> (102348157 - 102348157))) : (((18446744073709551611 ? (var_3 && 5) : (var_0 && var_13))))));
            }
        }
    }
    var_16 = (max(var_16, var_14));
    #pragma endscop
}
