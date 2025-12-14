/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = ((((((!(arr_0 [i_0]))))) % (((!11528) ? (arr_0 [i_0]) : (54038 ^ 0)))));
        var_11 = (max(var_11, ((-((1015821124166951518 ? (var_5 / 24095) : (((arr_0 [i_0]) - (arr_0 [1])))))))));
        arr_4 [i_0] = (((((~(arr_1 [i_0])))) || ((-1015821124166951518 || ((min(var_5, -934534971)))))));
    }
    var_12 = (max((min(-756228275, -80)), 79));
    var_13 = 17137338957396601168;
    #pragma endscop
}
