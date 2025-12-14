/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 3632604136;
    var_15 |= ((((max(((134152192 ? 12069859861426503577 : var_10)), (var_2 | var_0)))) ? ((~((29 ? -9223372036854775786 : var_2)))) : 9223372036854775786));
    var_16 = var_2;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [7] [i_0] &= -9223372036854775786;
        var_17 = 1;
        arr_5 [i_0 - 3] = -9223372036854775790;
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_18 += (9223372036854775786 | 68);
            var_19 = (-9223372036854775801 > -9223372036854775786);
            arr_11 [i_1] = (((arr_2 [i_1 + 1]) >> (var_11 - 28109)));
        }
        arr_12 [i_1] [1] = (max(var_12, ((-11 ? -9223372036854775786 : (~1103537846)))));
        var_20 = (min(var_20, 1));
    }
    #pragma endscop
}
