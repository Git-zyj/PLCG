/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_8;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [14] = (((max(31, (arr_2 [i_0 + 1] [i_0 + 1]))) - ((((arr_0 [i_0 - 1]) + 3447276554)))));
        arr_4 [i_0] [i_0 + 2] = (3447276554 - 2351010644);
        var_14 = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_2 [i_1] [i_1]) < 11905));
        arr_8 [7] [13] = ((828159963 != (arr_5 [i_1])));
    }
    var_15 = 15;
    #pragma endscop
}
