/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (min(var_12, (1189792576331507692 != var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((!(((4248569413 ? ((((arr_0 [i_1]) > 4248569413))) : (((!(arr_1 [14] [i_1])))))))));
                var_16 |= ((((min((((15311002343368008354 ? var_10 : var_3))), (min(14619158589682157359, 4294967289))))) ? (min((min(46397868, var_2)), (((-(arr_2 [i_0] [i_0])))))) : var_12));
                arr_4 [i_0] [i_1] = 46397883;
            }
        }
    }
    var_17 = ((var_2 + (((var_8 ? var_6 : var_9)))));
    #pragma endscop
}
