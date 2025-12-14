/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_12 = ((max(-8005115381369623417, 8005115381369623412)) << (((arr_1 [i_0] [i_0 - 1]) - 1200429210)));
        var_13 = ((((max((arr_0 [i_0 - 3]), var_8))) > (max(-418176565, (max(-8005115381369623400, 18446744073709551615))))));
        var_14 = (-4909981889093366652 + 223);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 -= ((((((max((arr_5 [i_1] [16]), 21))) ? var_5 : (arr_4 [18])))) ? (arr_4 [0]) : (((226 / (1 * 246)))));
        var_16 = ((var_3 ? (((0 == ((1 | (arr_4 [i_1])))))) : (((var_5 < var_1) + ((((arr_3 [i_1]) > 6)))))));
        var_17 -= var_8;
        var_18 = (i_1 % 2 == 0) ? (((((max((arr_4 [i_1]), (arr_4 [i_1])))) ? (((arr_3 [i_1]) >> (((max((arr_4 [i_1]), var_7)) - 2229363842)))) : (((((arr_4 [i_1]) || 4294967290)) ? (var_8 || 247) : 2147483647))))) : (((((max((arr_4 [i_1]), (arr_4 [i_1])))) ? (((arr_3 [i_1]) >> (((((max((arr_4 [i_1]), var_7)) - 2229363842)) - 1760225255)))) : (((((arr_4 [i_1]) || 4294967290)) ? (var_8 || 247) : 2147483647)))));
    }
    var_19 ^= ((((((var_0 < var_3) ? (var_11 / var_6) : ((var_10 ? -4909981889093366664 : 7))))) ? var_10 : -var_2));
    var_20 &= (((13 <= 65510) == ((var_6 ? var_8 : var_8))));
    #pragma endscop
}
