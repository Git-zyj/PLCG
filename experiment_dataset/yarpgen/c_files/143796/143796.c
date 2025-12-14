/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((var_9 ? var_4 : -645696285));
    var_12 &= ((var_7 * (((!(!-369849210))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 &= ((1 ? -8244167412236650680 : 3));
        arr_3 [i_0] = ((((((((var_7 ? 369849188 : 882171371))) ? (1 > var_3) : var_7))) ? (((-122787384 != (((arr_1 [i_0]) ^ (arr_2 [i_0])))))) : var_5));
        var_14 = min(3649271011, 67);
    }
    var_15 = (((max((var_8 - 18446744073709551615), -var_6))) ? var_7 : var_9);
    #pragma endscop
}
