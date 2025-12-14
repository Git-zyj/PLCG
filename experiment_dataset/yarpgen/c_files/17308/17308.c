/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 7904714152401873945;
    var_14 = ((((((892540185118359057 ? var_4 : 21)) ? 1438949327 : var_12))));
    var_15 = (min(var_2, (~var_0)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((var_10 ? -41416380 : -82053616))) % (((31941 ? 12560254438615678315 : 2127778237))));
        arr_4 [i_0] [i_0] = (((~41416379) ? ((var_2 ? (((-31950 + 2147483647) >> (13471422902169760879 - 13471422902169760868))) : ((max(235, var_0))))) : var_10));
        arr_5 [4] = (min(var_10, ((-650573062420152515 ? ((2479836984835253758 ? 2479836984835253738 : var_5)) : (((var_12 ? var_5 : 584631825)))))));
    }
    #pragma endscop
}
