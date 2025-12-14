/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 *= ((((((((arr_1 [i_0] [i_0 + 2]) >> (arr_0 [i_0])))) ? ((((arr_0 [i_0]) || (arr_1 [i_0] [i_0 + 3])))) : (arr_1 [i_0] [i_0]))) + var_10));
        arr_2 [8] = ((16819607151450611476 ? ((var_4 ? var_13 : 10995056021011259312)) : 7073307658007202421));
        arr_3 [i_0] [i_0] = (arr_1 [3] [i_0 + 3]);
        var_19 = (((max((((arr_1 [i_0] [i_0]) ? var_11 : (arr_1 [2] [i_0]))), var_9)) < (((arr_1 [i_0 - 1] [i_0 - 1]) ? var_16 : (arr_1 [0] [i_0 + 2])))));
    }
    var_20 = var_4;
    #pragma endscop
}
