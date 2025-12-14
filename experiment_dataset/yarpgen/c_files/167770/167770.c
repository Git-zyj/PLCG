/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((min(var_0, (min(16, 1436031400)))), ((max(1436031400, (var_1 && 5897982588189350447))))));
    var_11 = var_7;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_12 = (arr_1 [16]);
        var_13 = (min(var_13, (((min(-26612, (arr_2 [i_0] [i_0 + 1])))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 += ((max(12275049853143939659, 7)));
        arr_5 [i_1] [i_1] = 1;
        var_15 = ((((max((var_6 % 16481), (-79 ^ -19)))) ? (((max(0, -83)))) : (arr_1 [9])));
        var_16 = (max(10, 0));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2] = 201326592;
        var_17 = (max(((18446744073709551601 << (var_6 - 1022410704))), (min((arr_7 [i_2] [i_2]), 14558995229230408935))));
        arr_9 [i_2] [i_2] = min(((12275049853143939661 ? (arr_7 [i_2] [3]) : 96517849155743143)), 3030170239484062208);
    }
    #pragma endscop
}
