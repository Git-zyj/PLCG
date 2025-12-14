/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max((((((var_6 ? var_6 : 4095))) ? (!var_5) : (61430 - var_1))), ((((1716786160 ? var_10 : var_5))))));
    var_13 = var_1;
    var_14 ^= (min((min((~var_3), var_5)), (max((max(var_9, var_4)), ((var_10 ? var_10 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [4]);
                var_15 = (((((-(arr_1 [i_0 - 2])))) ? ((((arr_1 [i_0 - 2]) >= 9223372036854775807))) : (arr_1 [i_0 - 2])));
                var_16 -= ((arr_2 [i_0] [i_1]) ? var_9 : var_4);
            }
        }
    }
    #pragma endscop
}
