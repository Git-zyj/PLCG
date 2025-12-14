/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? var_1 : (((var_15 && 1) ? var_2 : (max(var_9, 8188))))));
    var_18 = ((((((min(-5105, var_7))) ? var_4 : var_3)) ^ var_4));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_2 [i_0]) ? (((!(!var_12)))) : 1));
        var_19 *= (((((-(min((arr_2 [i_0 + 1]), 4294967295))))) ^ ((~(var_9 >> 31)))));
        arr_4 [i_0] = 18446744073709551596;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -32668;
        var_20 = (((((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : 4294967280)) | 1)) >= 8188));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_21 = (((!var_13) && ((!(arr_1 [i_2] [i_2])))));
        var_22 = -1;
    }
    #pragma endscop
}
