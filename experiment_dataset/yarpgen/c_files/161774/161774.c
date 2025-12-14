/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (min(((((max((arr_0 [i_1 - 1]), (arr_2 [i_0 - 1])))) ? var_9 : (6571 | var_0))), (((11794 & (arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_11 = ((-var_0 ? ((var_5 ? var_6 : var_6)) : ((((((112 ? 6586 : var_8))) || (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_12 -= var_7;
    var_13 = (6553 / 1494627548);
    #pragma endscop
}
