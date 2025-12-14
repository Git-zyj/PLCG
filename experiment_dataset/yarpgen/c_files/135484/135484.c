/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_8 - ((((((var_4 ? var_8 : var_6))) ? (var_4 / -32119) : (!32118))))));
    var_11 = (var_9 ? var_2 : (max(9223372036854775805, (((65527 ? 106 : 32110))))));
    var_12 -= (((max(((var_8 ? var_6 : 32109)), (((var_7 ? var_5 : -1659880168))))) >= (((var_7 >> (((min(4033216969, var_0)) - 76)))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = ((17153 ? 4033216947 : 1424220972));
        arr_2 [i_0] [i_0] &= -1424220973;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_14 &= ((((arr_4 [i_1 + 3] [i_1 + 4]) || (arr_4 [i_1 + 1] [i_1 + 2]))) ? (((!6281) >> (((((arr_0 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_1 [i_1] [i_1 + 3]))) - 57168)))) : (((arr_4 [i_1 + 1] [i_1]) ? (arr_4 [i_1 + 3] [i_1 + 3]) : (arr_4 [i_1 + 3] [i_1]))));
        arr_5 [i_1] [i_1] = ((((((((arr_3 [i_1 + 2]) + 2147483647)) << (var_0 - 107)))) ? var_3 : ((((min(-1659880168, 4033216974))) ? ((-1007939594 ? 1659880179 : 5161561711029987178)) : ((((arr_1 [12] [i_1]) ? var_5 : var_9)))))));
    }
    #pragma endscop
}
