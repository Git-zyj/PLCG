/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max(var_8, (max(var_8, 22)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_12 = ((~(-1 > -1)));
        arr_4 [0] [17] &= -18;
        arr_5 [15] = (((((((((arr_0 [i_0]) + 2147483647)) << (((((arr_3 [i_0]) + 419919332)) - 20)))) < var_8)) ? ((((64 ? var_5 : (arr_3 [i_0]))))) : (max((arr_0 [i_0]), (max(var_10, (arr_2 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = ((max((arr_2 [i_1]), ((max(var_4, 19816))))));
        var_14 ^= (arr_6 [i_1]);
        arr_8 [i_1] [i_1] = (((((511 ? 714965961 : 127))) ? var_6 : -361280808));
        var_15 = (max(var_15, 131025806));
    }
    #pragma endscop
}
