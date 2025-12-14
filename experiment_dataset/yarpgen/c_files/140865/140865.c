/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = (max(var_17, var_15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((var_6 * var_0), var_3));
        var_18 = ((!(((var_13 << (((var_2 % -1) - 1021298083)))))));
        var_19 = (-118 <= 117);
        var_20 ^= (((arr_0 [i_0]) || ((((arr_0 [i_0]) / (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_5 [i_1]);
        var_21 = (min(var_21, (((((!-94) ? ((((var_12 >= (arr_5 [8]))))) : (min(var_13, (arr_0 [i_1]))))) >= var_7))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_0 [i_2]);
        arr_10 [i_2] [i_2] = (-100 & 1);
    }
    var_22 = var_7;
    #pragma endscop
}
