/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(arr_1 [i_0] [i_0]))), ((12 ? 32 : 230))));
        arr_3 [i_0] = (min(((((arr_0 [i_0]) <= (arr_0 [i_0])))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_4 [i_0] = (((min(234, (!234)))) ? (arr_1 [i_0] [i_0]) : ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) : ((((!(arr_0 [i_0]))))))));
        var_13 = ((((min((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])))) ? 26 : -176));
    }
    var_14 = (max(var_14, 238));
    var_15 = ((12 ? 6191170143020056820 : 15));
    #pragma endscop
}
