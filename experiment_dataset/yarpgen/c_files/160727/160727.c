/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 |= (((~1571267825) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_11 = (arr_0 [13]);
        var_12 += ((((max(var_0, 5808038191470335029))) ? (((arr_1 [i_0] [i_0]) ? 3003642508660200728 : (min(3003642508660200739, var_3)))) : (((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = (min(((((((min(var_8, (arr_0 [i_1]))))) & (min(1, var_6))))), (((8714849521439864455 >= 21493) ? ((((!(arr_0 [i_1]))))) : ((-75 ? var_7 : 3502764349762966739))))));
        var_14 -= -var_6;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_15 = (min(var_15, ((min(var_8, (arr_7 [i_2]))))));
        var_16 &= (((((2138921808 ? 1443843952 : ((min(-14123, -14680)))))) ? ((((var_6 <= (arr_2 [i_2]))) ? ((2558826338 ? 43873 : var_1)) : ((min(14039, 95))))) : var_4));
        var_17 = (min(((3003642508660200732 ? (arr_0 [i_2 - 1]) : 15395467453117619382)), ((min((arr_0 [i_2]), (arr_0 [i_2 + 1]))))));
        var_18 ^= (max(((var_5 ? 0 : var_0)), (arr_3 [i_2])));
    }
    var_19 = (max(var_19, ((((((var_0 ? 98 : var_8))) ? 109 : var_4)))));
    #pragma endscop
}
