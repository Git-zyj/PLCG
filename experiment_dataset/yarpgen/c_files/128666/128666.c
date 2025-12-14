/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 += var_15;
        arr_3 [i_0] = ((((max(797736410, var_0))) ? (((((371640724 ? var_12 : var_6))) ? (arr_2 [i_0]) : (((5458557289327106893 ? 57692 : 3))))) : (min((arr_0 [i_0]), (min(5, 2))))));
        arr_4 [i_0] [i_0] = (16383 <= -var_8);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 += (((6346476894101158875 && (arr_6 [i_1] [i_1]))));
        var_20 -= ((~((max((arr_0 [i_1]), var_9)))));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = ((92 ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])));
        var_22 = var_4;
    }
    var_23 = -57675;
    #pragma endscop
}
