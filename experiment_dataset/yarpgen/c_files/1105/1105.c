/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(13226198651933190924, 1819825119)) != var_7)) || (var_3 * var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = var_0;
                var_19 = var_6;
                var_20 = var_1;
            }
        }
    }
    var_21 = ((((((2 / 4971663473289436054) / var_15))) ? (-var_0 / var_16) : ((var_11 ? (-15485 == 0) : (var_10 | var_6)))));
    #pragma endscop
}
