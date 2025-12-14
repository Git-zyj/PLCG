/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, (((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
        arr_3 [i_0] [i_0] = (max(((!(arr_0 [i_0]))), (arr_1 [i_0])));
        var_20 -= ((((((arr_1 [i_0]) | 65513))) ? (65531 << 0) : ((max(12, (max((arr_1 [i_0]), 9)))))));
    }
    var_21 *= (((((max(92, 13768)))) ? var_14 : var_15));
    var_22 = (((65515 | var_8) ? (var_5 > -var_2) : (((23 || 4294967295) ? (var_16 > var_7) : (0 >= var_1)))));
    var_23 = var_15;
    var_24 = (((max(3539512457, -9223372036854775785))) ? ((-((-9223372036854775785 ? 1729400435 : var_2)))) : (max((((56295 ? 4978 : var_14))), (max(3539512480, -1243213332)))));
    #pragma endscop
}
