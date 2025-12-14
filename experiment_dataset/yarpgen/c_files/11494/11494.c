/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = -7083160069132121710;
        arr_3 [i_0] = ((((max((min(var_12, -4362550852343082712)), (arr_0 [i_0])))) ? (((6853268794098702644 != 230) ? (-4358060786762145741 < -7241353586144846739) : -1)) : 1));
    }
    var_21 = var_12;
    var_22 ^= ((7241353586144846764 ? ((((((var_10 ? 0 : 1))) != (((-9223372036854775807 - 1) ? var_7 : 32768))))) : var_18));
    var_23 = ((((var_2 / ((13343114314239801103 ? 11499 : 0)))) % (var_14 < 5103629759469750490)));
    var_24 = var_14;
    #pragma endscop
}
