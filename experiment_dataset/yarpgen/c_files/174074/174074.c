/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] [i_1] = (18446744073709551609 % 57846);
                var_12 = (min(var_12, var_5));
                var_13 = (max(var_13, (((9 * ((var_11 ? var_4 : 10)))))));
            }
        }
    }
    var_14 = (var_1 | var_9);
    var_15 |= (max(((((var_7 != var_8) > var_6))), (!var_10)));
    var_16 &= (max(var_6, ((var_8 ? var_3 : var_9))));
    #pragma endscop
}
