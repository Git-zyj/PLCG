/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((~((+(((arr_4 [i_1] [8] [i_0]) * var_1))))));
                var_20 |= ((17778655659250853341 / (min(((668088414458698274 ? 668088414458698300 : 1)), ((668088414458698275 / (arr_4 [i_0] [i_0] [i_0])))))));
                var_21 &= 15112;
                var_22 = (25840 ? -5983229126221779848 : 16);
            }
        }
    }
    var_23 = ((var_4 * (((!(((-1 ? 1 : var_17))))))));
    var_24 = (min(var_24, (!-25847)));
    #pragma endscop
}
