/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = ((((((!247) <= var_5))) ^ (arr_4 [i_0] [i_0] [i_1])));
                var_19 = ((!(((var_6 ? var_3 : (max(var_8, 13866)))))));
            }
        }
    }
    var_20 = ((((max(((((-127 - 1) || var_7))), ((var_10 ? var_6 : var_1))))) ? (max(4092, (max(8, -1535392347)))) : ((((!var_8) && (var_12 && var_4))))));
    var_21 = (~var_11);
    var_22 = (((((-var_8 ? var_13 : var_3))) ? 39 : (max(((var_0 ? var_17 : var_8)), -var_15))));
    var_23 = (max(var_23, ((max(((var_5 ? ((var_3 ? 9223372036854775807 : var_10)) : var_14)), (((!(~var_11)))))))));
    #pragma endscop
}
