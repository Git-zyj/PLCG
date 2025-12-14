/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (min(((((((var_0 + 2147483647) << (((var_6 + 3298835351621591932) - 6))))) ? (!var_0) : var_2)), ((var_6 / (var_9 * var_7)))));
    var_12 |= ((var_7 ? var_5 : (min(11865652144053757620, ((var_6 ? var_2 : var_3))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-4079185699832148346 ? 3268121655651691769 : (var_2 && 6581091929655793995)));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 |= var_8;
            arr_7 [i_0] [i_0] [i_1] = var_7;
        }
    }
    #pragma endscop
}
