/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [13] = (((min(((min((arr_1 [i_0] [i_0]), var_9))), ((7574571637289934782 ? (arr_0 [11]) : 0)))) == ((((((min((arr_1 [6] [i_0]), 255))) || ((min(var_3, var_10)))))))));
        var_13 = (min((((!((var_9 < (arr_0 [i_0])))))), (min((arr_0 [i_0]), (((~(arr_1 [i_0] [i_0]))))))));
    }
    var_14 = var_1;
    #pragma endscop
}
