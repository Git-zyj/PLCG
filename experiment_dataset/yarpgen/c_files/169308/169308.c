/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((((((min(var_4, 3))) & ((min(var_4, 253))))) * ((-(((arr_0 [i_0] [i_0]) ? 232 : (arr_0 [i_0] [i_0])))))));
        var_11 -= (((((-((min(var_8, (arr_0 [i_0] [i_0]))))))) ? (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : ((min(1, 22))))) : (min(((234 ? 1 : 20)), ((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0] = (max((((arr_0 [i_0] [i_0]) * (var_6 % 1))), 36));
    }
    var_12 -= 47922;
    #pragma endscop
}
