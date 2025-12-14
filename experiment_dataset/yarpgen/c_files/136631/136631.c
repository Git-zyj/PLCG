/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (max(78, ((179 * (arr_0 [i_0] [i_0])))));
                var_21 |= 5899497503857691090;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = ((100 >> (((min(var_5, (min(var_11, 3458764513820540928)))) - 94))));
                            var_23 = ((((-(arr_2 [i_2 - 2] [i_3 - 1]))) * (156 * 89)));
                        }
                    }
                }
                var_24 = ((136 ? var_15 : ((9643376168692465767 % (((var_16 ? (arr_0 [i_1] [i_0]) : var_7)))))));
                var_25 += (max(((var_5 ^ ((-18021 ? 54 : (arr_7 [i_1] [i_0] [i_0]))))), ((max((arr_4 [i_1]), (arr_4 [i_1]))))));
            }
        }
    }
    var_26 += (((((((145 ? var_19 : var_19))) ? (max(var_6, var_5)) : var_17)) >= ((var_8 ? (var_10 / 83) : var_18))));
    #pragma endscop
}
