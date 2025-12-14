/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= -1;
    var_12 = (((min(var_5, ((var_0 ? var_2 : var_8))))) ? var_6 : (var_0 >= var_4));
    var_13 = (-127 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 += ((var_10 ? var_1 : var_7));
            var_15 = (min(var_15, 8333123384972472022));
        }
        arr_4 [i_0] = ((((((arr_0 [i_0]) | (-32767 - 1)))) ^ 18446744073709551615));
    }
    #pragma endscop
}
