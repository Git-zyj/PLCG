/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 456397311;
    var_13 = -var_7;
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 *= (((arr_1 [i_0]) != (arr_1 [i_0])));
        var_16 = ((((!(arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = ((+(min((arr_1 [i_1]), -8566683482983078055))));
        var_18 = (((-(((-17 > (arr_2 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_19 = 17432;
        var_20 = (((arr_6 [i_2]) ? ((-(arr_6 [i_2]))) : 8275003078522401215));
        var_21 = ((208117453 + (arr_0 [i_2])));
    }
    #pragma endscop
}
