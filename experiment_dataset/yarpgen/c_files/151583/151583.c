/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = ((var_16 ? (52945 + 1) : (((var_13 <= 31) ? ((min(1, 1))) : -9945))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((!51) ? (((var_8 - 1) & (~var_0))) : 1));
                arr_7 [i_1] [2] [2] = ((((min(((((arr_5 [i_0]) ? 43 : var_7))), ((1 ? 18446744073709551598 : 18068972449510032823))))) ? 18446744073709551598 : (((((arr_2 [1]) <= (arr_5 [i_0])))))));
                var_22 = (((((~(!8608155054312594020)))) ? -1 : (((((var_5 ? var_15 : 15728640))) ? (~-1988383371) : ((98 ? -7598965771579397819 : 1))))));
                var_23 = ((~((max(var_2, 1)))));
            }
        }
    }
    #pragma endscop
}
