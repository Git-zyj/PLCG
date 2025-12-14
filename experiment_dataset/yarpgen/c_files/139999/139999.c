/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((var_0 ? ((161 ? var_13 : var_5)) : (var_2 && 159)))) ? (((!(((-1 ? 2307496830 : -1)))))) : ((((((var_2 ? var_15 : var_8))) || var_3)))));
    var_21 = (min(var_21, (((((-7145282688689920533 / (((min(82, -9)))))) + (var_14 + var_0))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_22 = ((((((((arr_0 [i_0]) - var_14)) < var_15))) - (((!((((-4 + 2147483647) << (3094094161 - 3094094161)))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [9] = (((((((var_7 ^ (arr_0 [i_0])))))) & (((((-6742787683793968973 ? -2048 : (arr_2 [i_0])))) ? (((arr_2 [i_0]) >> (-5674560490201961440 + 5674560490201961442))) : ((1200873115 ? (arr_1 [i_0 + 2]) : var_15))))));
            arr_6 [i_0] [i_0] = ((((((156 ? (arr_0 [i_1]) : (arr_3 [6] [6] [i_1])))) ? (((arr_0 [i_0 + 1]) ? var_6 : 6742787683793968947)) : ((((arr_4 [i_0 + 2] [i_1]) ? 38 : 1916026192))))) ^ ((((6742787683793968999 - -2063) ? (2069 / 4294967281) : 78))));
        }
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_23 = ((-(!401451042)));
        var_24 = (max(var_24, 104));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_25 = ((~((251 ? -2058 : -6742787683793968973))));
        var_26 ^= (((max((!1200873131), (!var_1))) ? (((((!(arr_8 [9]))) ? ((2793114132 ? 86 : 97)) : (!3420)))) : ((((!(arr_9 [i_3]))) ? (-4 || 25) : (arr_10 [i_3] [i_3])))));
    }
    #pragma endscop
}
