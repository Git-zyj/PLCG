/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] = (max(-20, (max(29, 1639839679))));
                        arr_14 [i_1] [i_1] [i_2 - 4] [7] = var_3;
                        arr_15 [i_3] [i_3] [i_1] [i_1] [i_3] [i_0] |= (~-1);
                        var_17 = (!var_11);
                    }
                    arr_16 [i_1] [i_1] [i_1] = ((!((!(arr_12 [i_1] [i_1] [i_1] [i_1])))));
                }
            }
        }
    }
    var_18 = ((((((-1639839670 ? 1744160572 : -53))) ? (((2550806728 ? 53 : -63))) : -2808)));
    var_19 = (((max(var_4, -122))) ^ 18208497162022963979);
    var_20 = ((var_9 ? ((~(-9223372036854775807 - 1))) : ((var_12 ? ((var_8 ? var_7 : var_12)) : (((min(var_9, var_15))))))));
    var_21 = (min(var_21, var_7));
    #pragma endscop
}
