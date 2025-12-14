/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_18, var_18)))) ? var_7 : var_7));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (((((var_18 ? (min(var_8, 242)) : ((((arr_1 [i_0]) - 1))))) + 9223372036854775807)) << (((((arr_1 [i_0]) + 56)) - 37)));
        var_22 = (max(var_22, var_8));
        arr_2 [16] &= (5971642153427568619 ? (arr_1 [i_0]) : (arr_1 [i_0]));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1 + 1] = ((((((arr_4 [i_1 - 1]) ? (arr_4 [i_1 + 1]) : (arr_5 [i_1 - 1])))) ? 11 : ((((var_6 || (arr_3 [i_1 - 1] [i_1])))))));
        arr_7 [13] [13] = (((max(((3 >= (arr_5 [4])), 1)))));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        arr_12 [23] [i_2 + 3] &= ((((((1 * 1) ? (!13678778394937680585) : (((arr_10 [i_2] [10]) << (9223372036854775807 - 9223372036854775799)))))) ? (arr_8 [i_2]) : (max((max(var_17, -1)), var_0))));
        arr_13 [i_2] = (var_9 >> (arr_10 [i_2 - 1] [i_2 - 1]));
    }
    var_23 = (-45 + 30720);
    #pragma endscop
}
