/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_10 = var_4;
        arr_3 [i_0] = ((((((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_2 [i_0 - 1])))) ? ((var_7 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))) : ((var_2 ? (arr_0 [i_0 - 1]) : (arr_2 [i_0 + 2])))));
        var_11 = (min(((((((var_4 ? var_3 : var_5))) ? 122 : (!var_1)))), ((var_5 ? (((119 ? -70 : 1))) : (max(152138741, -659640438948705783))))));
        arr_4 [10] [i_0] = (((((-(arr_2 [i_0 + 1])))) ? (((arr_2 [i_0 + 2]) / (arr_2 [i_0 - 1]))) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : -106))));
        arr_5 [i_0] = (min((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((var_1 ? var_3 : (arr_6 [i_1])))) ? (arr_7 [i_1]) : ((var_7 ? (arr_6 [i_1]) : (arr_7 [i_1])))));
        arr_9 [8] = (((arr_7 [i_1]) ? (((((((arr_6 [i_1]) ? var_5 : 16449547446396050246))) ? var_6 : ((var_8 ? (arr_6 [i_1]) : (arr_6 [i_1])))))) : ((((((arr_7 [i_1]) ? 16449547446396050247 : 16449547446396050244))) ? (((2147483638 ? var_0 : var_9))) : var_6))));
        var_12 -= (((((min(18041239161563358925, 92829773)) != (arr_6 [i_1]))) ? (((min(var_2, (arr_7 [8]))))) : ((min((max(1, 25655)), ((max(var_5, var_5))))))));
    }
    var_13 -= ((-(min((var_5 == 1), var_7))));
    #pragma endscop
}
