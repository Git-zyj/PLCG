/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (max((((max(var_13, var_13)) + (((var_4 ? var_18 : 95))))), var_11));
    var_21 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 *= max((((~(arr_3 [i_1 + 1] [i_1 + 1])))), (min(((95 ? 2 : var_19)), -547258776)));
                    arr_6 [i_2] [i_0] [i_0] = ((((1 == var_19) <= (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 2]))));
                }
            }
        }
    }
    var_23 &= ((((var_11 ? (573949385 % 1) : ((var_15 ? (-9223372036854775807 - 1) : var_4))))) || (~var_15));
    #pragma endscop
}
