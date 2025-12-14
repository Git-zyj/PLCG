/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((-1 ? ((1981398057865759351 ? 14659483430967313802 : 14659483430967313798)) : 14659483430967313798)));
    var_20 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 -= ((~(min(5108036751401436935, var_13))));
                var_22 -= ((0 * (((4116466738 ? var_14 : ((var_0 ? var_4 : var_9)))))));
                arr_5 [i_1] [i_1] = ((min(1, 10949)));
                var_23 = (0 && 419666961);
            }
        }
    }
    #pragma endscop
}
