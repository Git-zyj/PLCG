/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((!((min(-var_1, (~var_15))))));
        arr_4 [i_0] = ((!((max(233, -124)))));
        arr_5 [i_0] [i_0] = (((((arr_2 [i_0]) > (arr_1 [i_0] [i_0]))) ? ((((arr_2 [i_0]) ? 1 : var_2))) : (min((arr_2 [i_0]), (arr_2 [i_0])))));
        var_16 = (var_15 * -var_6);
    }
    var_17 |= ((26456 ? 13437 : 124));
    #pragma endscop
}
