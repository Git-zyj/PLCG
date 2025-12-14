/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_4 ? var_0 : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((92 ? (arr_3 [i_0]) : ((min(((((arr_0 [i_1 + 2]) > 170))), 0))))))));
                var_12 *= (min(-12, 18446744073709551615));
            }
        }
    }
    var_13 *= var_3;
    var_14 = var_7;
    var_15 = var_6;
    #pragma endscop
}
