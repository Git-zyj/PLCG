/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_15;
    var_19 = ((((var_7 ? var_13 : ((min(var_2, var_8)))))) ? ((var_14 ? ((var_12 ? var_11 : var_7)) : var_7)) : var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (((((((min(63488, 62683))) ? -1180865448 : ((1180865448 ? -7622989231330935641 : 20736))))) ? (((((1180865437 ? -14736 : 9223372036854775807))) ? (arr_2 [i_0] [i_1]) : var_14)) : ((~(~var_12)))));
                arr_7 [i_0] [i_1] = (~(((!-370772789) ? ((var_7 ? (arr_6 [i_0] [i_1]) : var_11)) : -var_5)));
            }
        }
    }
    var_21 = ((var_11 ? var_0 : var_4));
    var_22 ^= var_9;
    #pragma endscop
}
