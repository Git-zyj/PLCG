/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [1] [11] &= 1;
                arr_7 [4] [12] [15] = (min((((arr_1 [i_0 + 3]) - 1)), (((arr_1 [i_0 + 2]) - (((var_9 >> (18446744073709551615 - 18446744073709551606))))))));
                var_12 -= ((347200680 ? 12 : 18638));
                var_13 -= 10271;
            }
        }
    }
    var_14 = var_1;
    var_15 = (((+-18638) ? var_1 : (min(var_8, var_6))));
    #pragma endscop
}
