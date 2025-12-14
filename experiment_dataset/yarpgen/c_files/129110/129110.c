/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 < (min((((5 ? 2199023255550 : 1))), (5 * -2199023255556)))));
    var_20 &= ((((((13335927425670565100 & var_5) ? ((min(56887, var_18))) : 50849))) ? (-127 - 1) : var_12));
    var_21 = 2426702172;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = ((1 ? 0 : -6040212067467519410));
                        var_23 = (arr_0 [i_1] [i_0]);
                        var_24 = (((17179869183 ? 1 : 1)));
                    }
                }
            }
        }
        var_25 = ((3594122825 ? 1 : 17179869198));
    }
    #pragma endscop
}
