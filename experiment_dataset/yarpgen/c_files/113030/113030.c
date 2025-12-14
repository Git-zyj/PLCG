/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(28036, 26))) < (8079980657099743726 <= var_4)));
        var_12 = ((((((arr_1 [i_0]) ^ 10366763416609807889))) ? (arr_1 [i_0]) : (~var_1)));
        var_13 = ((10366763416609807893 ? (min(127, (min(-24047, 10366763416609807890)))) : (((-((var_0 ? 6 : var_0)))))));
        var_14 = (((((var_4 ? ((((arr_1 [i_0]) / var_4))) : -var_8))) ? var_1 : ((((max(var_4, (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = 0;
        arr_8 [i_1] = (arr_5 [i_1]);
        var_16 = (((((var_7 < (arr_4 [i_1] [i_1])))) < (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));
        arr_9 [i_1] [i_1] = -7212090074859725836;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 |= (((arr_11 [i_2] [i_2]) + 0));
        arr_13 [i_2] &= (((arr_12 [i_2]) ? 30 : 41858));
        var_18 = (((arr_11 [i_2] [i_2]) ? var_2 : (~0)));
    }
    var_19 = var_0;
    #pragma endscop
}
