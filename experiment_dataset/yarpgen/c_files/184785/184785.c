/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(max(var_6, (var_2 && -2605046377847820318)))));
    var_13 = (min(var_8, (min(-2605046377847820315, 19))));
    var_14 = 43161;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (~71782494);
        var_16 -= (arr_1 [i_0]);
        var_17 = ((43159 | (((arr_0 [i_0]) ? -100 : 1932))));
        arr_3 [i_0] [i_0] = ((((((max(3663448799, -105))) ? 9913 : (arr_0 [6]))) >= (max((min(2097151, -737)), (((!(arr_1 [1]))))))));
    }
    #pragma endscop
}
