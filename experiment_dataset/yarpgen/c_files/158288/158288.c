/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (max(((-((-6756401743262563567 ? 6359028373413136522 : (-127 - 1))))), var_2));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 += (((((arr_0 [i_0]) | (-32767 - 1))) <= 14171));
        var_19 |= (((var_2 ? ((var_4 ? var_13 : var_0) : var_13))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_20 = (arr_4 [i_1]);
        arr_5 [i_1] [10] = ((!(arr_3 [i_1])));
    }
    var_21 = var_6;
    var_22 = ((~((32767 ? 65532 : 1152921504606842880))));
    #pragma endscop
}
