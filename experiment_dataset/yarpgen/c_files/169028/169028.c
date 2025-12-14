/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((min((1 && var_7), (~var_9)))) && ((max(((var_6 ? (-2147483647 - 1) : var_3)), (~var_10)))));
    var_15 -= var_3;
    var_16 = 1852246998;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] = ((((-((-1 % (arr_2 [i_0]))))) >= (~-8192)));
                arr_5 [i_0] [6] |= ((((((max((arr_3 [i_1 - 1]), -2082526091)) * var_8))) ? -927100633 : ((((((arr_2 [10]) ? 1 : 2536760175))) ? ((max(997272017, (arr_1 [i_1])))) : (max(1516911564, (-2147483647 - 1)))))));
                arr_6 [i_0] [i_1 - 1] = (min((arr_2 [i_0]), ((((max((arr_0 [0]), (arr_2 [i_1 - 1])))) ? var_1 : (((!(arr_2 [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
