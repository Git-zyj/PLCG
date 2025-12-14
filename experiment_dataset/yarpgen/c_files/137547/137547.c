/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((max((~510971953617414191), (((arr_4 [i_1]) ^ 8880791091086510138))))) ? (min(((((arr_4 [i_1]) && var_13))), (min(10620545423451665433, (arr_0 [i_0]))))) : (max((!1), 7826198650257886183))));
                var_21 = ((min((arr_3 [i_1] [i_1] [i_1]), 177)));
                var_22 = ((~((max((arr_4 [i_0]), (arr_4 [i_0]))))));
                var_23 += (arr_1 [i_1]);
            }
        }
    }
    var_24 = (max((((((var_15 ? -61 : var_1))) ? (-111 ^ var_16) : var_5)), 152));
    var_25 = ((var_1 ? 152 : ((59 ? var_5 : (-13369 % 2200771808572324464)))));
    var_26 = ((min(((var_9 ? var_6 : var_14), (1 | var_2)))));
    var_27 = 0;
    #pragma endscop
}
