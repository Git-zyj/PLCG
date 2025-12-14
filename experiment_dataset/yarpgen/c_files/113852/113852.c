/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = (((12784 / var_13) ? 229 : (min(var_9, (((var_13 ? -18727 : var_11)))))));
    var_16 = ((((min(var_9, ((max(var_7, var_12)))))) ? var_4 : var_13));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [9] = (min((-26166 ^ 32), ((min(var_12, 18728)))));
        var_17 = ((!((max(105, (arr_0 [9]))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_18 = 32767;
        arr_5 [10] = ((~((((-33 ? var_13 : var_9)) | (arr_1 [i_1])))));
    }
    #pragma endscop
}
