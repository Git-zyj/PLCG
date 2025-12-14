/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 -= ((1887274371 ? (arr_3 [i_1]) : (max(4003162923846489048, 4003162923846489048))));
                arr_6 [i_0] [i_0] = ((253 ? -4003162923846489058 : (arr_2 [i_0])));
                arr_7 [i_0] [i_1] [i_0] = (arr_1 [i_1] [i_0]);
            }
        }
    }
    var_12 = (((((var_8 ? var_6 : var_0))) ? ((max(-4003162923846489056, (var_0 >= var_2)))) : 6422040041105270122));
    var_13 = var_10;
    var_14 = (((var_5 ? 392 : 229)));
    #pragma endscop
}
