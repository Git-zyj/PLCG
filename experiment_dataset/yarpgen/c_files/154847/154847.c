/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((4294967295 | var_8), 0));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] &= (((((var_2 <= (!var_18)))) == ((((arr_1 [i_0]) < (arr_3 [i_0] [i_0]))))));
        var_21 = (max((arr_2 [i_0] [12]), 17058855330508922701));
        var_22 = ((!((max((arr_0 [i_0 - 3]), (min(1387888743200628914, (arr_0 [i_0]))))))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_23 = (max(var_23, ((min(var_4, -1765)))));
        var_24 = ((0 || ((((arr_0 [i_1]) / -347564479022436039)))));
        var_25 = 41905;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_26 ^= (arr_8 [i_2]);
        var_27 = ((((min((arr_8 [i_2]), (((-9223372036854775807 - 1) ? 64 : (-32767 - 1)))))) & 0));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_28 = (((53535 ^ (0 ^ -1830549352))));
        var_29 = ((((!(arr_9 [11]))) ? (((~(arr_11 [i_3])))) : (arr_0 [i_3])));
        var_30 = (1775 || 1);
        var_31 = 1;
    }
    #pragma endscop
}
