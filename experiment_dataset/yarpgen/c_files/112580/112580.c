/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3783465574;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (min(var_13, (((((min((arr_1 [i_0]), (arr_1 [i_0])))) | (((0 && (arr_1 [8])))))))));
        arr_2 [i_0] = ((~((var_7 * (var_10 <= 3186680342)))));
        arr_3 [i_0] = (-2147483647 - 1);
        arr_4 [i_0] [6] = var_7;
    }
    var_14 = (min(var_14, ((min(1337242227, var_0)))));
    #pragma endscop
}
