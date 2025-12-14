/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((~var_7), var_4));
    var_13 -= ((((max((max(1651349149, 1)), (212 < var_11)))) ? -26 : (max((min(var_11, var_7)), var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (((((1651349149 ? var_11 : 26559))) ? (((var_1 ? ((max(4700, var_4))) : 48))) : (var_0 != 1545162513)));
                var_15 -= ((1651349149 ? (((arr_2 [i_1 - 1] [2] [i_0]) ? 1 : 1)) : ((var_8 ? (arr_2 [i_1 - 2] [i_0] [i_0]) : 255))));
                arr_4 [i_1] [i_1] [i_1] = ((((var_8 & (((-6941733548216322905 + 9223372036854775807) << (((var_4 + 27654) - 60)))))) * var_8));
                var_16 += ((((var_8 != (arr_1 [i_1]))) ? (arr_2 [i_1] [i_1 - 3] [14]) : (((((min(65535, var_2))) > (((arr_1 [i_1]) ? var_8 : var_1)))))));
            }
        }
    }
    var_17 = -var_5;
    #pragma endscop
}
