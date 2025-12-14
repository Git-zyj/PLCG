/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-9223372036854775807 - 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = var_10;
        arr_4 [i_0] [i_0] = -103;
        var_19 += ((-65516 ? 94 : var_3));
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = ((((-104 ? -103 : 17865242999861324852))));
        var_21 = ((((min(var_6, (((!(arr_6 [i_1]))))))) ? var_10 : -0));
    }
    var_22 = (~65521);
    var_23 = ((((max(((max(var_4, 102))), ((9137563863747487162 ? 16843172481817975085 : 103))))) ? var_4 : (max((var_10 & var_13), (((var_2 ? -122 : 9137563863747487162)))))));
    #pragma endscop
}
