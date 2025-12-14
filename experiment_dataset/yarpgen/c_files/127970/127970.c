/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(((((arr_0 [i_0 - 3] [i_0]) ? (arr_1 [3]) : (arr_0 [i_0 + 2] [i_0])))), ((min((arr_1 [i_0 + 1]), (arr_1 [i_0]))))));
        var_13 = (min(var_13, ((4757071047051899130 ? (min(((min((arr_1 [i_0]), (arr_1 [i_0])))), (~2467423007))) : (arr_0 [i_0] [i_0])))));
    }
    var_14 = (min(var_14, (((!((min(var_4, 6197194037528315443))))))));
    #pragma endscop
}
