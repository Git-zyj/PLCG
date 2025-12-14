/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((!-1684688378), var_2));
    var_11 |= (-var_5 >= var_8);

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(((max((arr_0 [i_0]), ((39732 ? (arr_0 [i_0]) : var_5))))), (min((arr_1 [i_0 - 1] [i_0]), ((-31233 ? 718014865 : 6010915197328517943))))));
        arr_4 [i_0] [7] = ((max(2102547485, (325978809 - -2063879350928946451))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (((((var_9 ? -25077 : 39732))) ? (arr_3 [10]) : (arr_6 [i_1])));
        var_14 = arr_2 [i_1] [i_1];
        var_15 = var_9;
        var_16 = (min(var_16, (arr_0 [4])));
    }
    #pragma endscop
}
