/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((((arr_7 [i_2 + 1] [i_1] [i_0 + 1] [12]) * var_3))))));
                    var_16 -= ((((-(arr_6 [i_0] [i_0 - 1] [i_2 + 2]))) * (min(((-(arr_4 [i_0] [i_0]))), var_4))));
                }
            }
        }
    }
    var_17 = (max(var_17, (((!((((~261120) ? var_13 : (18351039950470342237 >= -15640)))))))));
    var_18 = (min(var_18, (-127 - 1)));
    var_19 = ((~((max(33, var_14)))));
    var_20 &= ((var_1 * (((((492 ? 1 : -342303124)))))));
    #pragma endscop
}
