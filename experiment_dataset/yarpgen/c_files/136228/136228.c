/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 15464;
                arr_6 [i_0] [i_0] [4] = ((!(arr_1 [i_0])));
                var_20 = var_17;
                var_21 -= (min((max((arr_0 [4]), -9223372036854775807)), (arr_3 [1] [1])));
                var_22 = min(9223372036854775807, 9223372036854775807);
            }
        }
    }
    var_23 = min((min(((max(1, var_4))), var_9)), var_7);
    var_24 = 9223372036854775807;
    var_25 = var_14;
    #pragma endscop
}
