/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 3] = ((!((((arr_2 [i_0 - 1]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]))))));
        var_12 += ((((min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 4])))) ? (arr_2 [i_0 + 4]) : ((~(arr_2 [i_0 - 1])))));
        var_13 -= ((~((min((min((arr_0 [i_0 + 2]), (arr_1 [i_0 + 2] [i_0 + 1]))), (min((arr_2 [i_0 + 1]), (arr_0 [i_0 - 1]))))))));
    }
    var_14 = var_1;
    var_15 = var_4;
    var_16 += (min(var_9, (min((min(65505, 112)), var_2))));
    var_17 = (min(var_4, var_9));
    #pragma endscop
}
