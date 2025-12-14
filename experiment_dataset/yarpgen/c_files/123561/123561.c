/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = var_9;
                var_11 *= ((~(73 - 2038660592)));
            }
        }
    }
    var_12 = (var_6 || var_3);
    var_13 -= ((2038660592 <= 45381) ? (((((-67 ? 2038660592 : -2038660592)) > (-2038660621 == -1342097692)))) : 2038660595);
    #pragma endscop
}
