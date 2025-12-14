/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_3;
    var_17 = ((((((min(0, var_2)) / (722668335 % var_7)))) ? ((((((var_15 ? var_0 : var_15)) + 2147483647)) << ((((((1 ? var_0 : var_12)) + 64)) - 23)))) : ((var_12 ? ((var_6 ? var_0 : -65569732)) : ((722668335 ? 0 : var_10))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = ((((36020000925941760 + 36757) ? (((arr_2 [i_0] [i_0 + 1]) ^ (arr_2 [1] [22]))) : ((134209536 ? var_5 : var_13)))) == (max((max((arr_0 [i_0 + 1] [i_0]), (arr_1 [i_0]))), (28778 + 1))));
        var_19 = (min(var_19, (((((((((36788 ? var_4 : 144115188075854848))) ? 1789950345 : (arr_0 [i_0] [18])))) & (((((((-9223372036854775807 - 1) + 1789950323)) + 9223372036854775807)) << ((min(var_8, var_4))))))))));
        var_20 = ((((((-36020000925941761 ? 0 : -36020000925941760)))) < (max(((62 ? (arr_1 [i_0 + 1]) : 28778)), (min((arr_2 [i_0] [i_0]), (arr_1 [i_0 + 1])))))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_21 = (max(var_21, (((((((arr_4 [i_0] [i_1]) & var_15))) ? (((-965255689 ? 134209519 : (arr_1 [i_1 - 3])))) : ((28747 ? 62685974 : 22)))))));
            arr_5 [i_0] = (((-119 ? 134 : (arr_2 [i_1 - 1] [i_0]))));
            arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 4] = (((((4294967295 ? (arr_2 [i_0] [20]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (38 && 1665112111) : (arr_2 [i_0 + 1] [i_1])));
        }
    }
    #pragma endscop
}
