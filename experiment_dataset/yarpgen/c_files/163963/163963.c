/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= var_10;
                var_16 = ((-(((((-30 ? -48 : var_3))) ? var_3 : ((((arr_2 [i_0]) ? 11015 : 0)))))));
            }
        }
    }
    var_17 = var_5;
    var_18 = 97;
    var_19 = 10688280752514145298;
    var_20 &= (min((max(48, (var_10 ^ var_7))), ((var_1 ? -48 : 48))));
    #pragma endscop
}
