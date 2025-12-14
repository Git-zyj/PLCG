/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (var_1 < 9223372036854775789)));
    var_12 = 27;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((~(~var_5)))));
        arr_3 [i_0] [i_0] = (var_1 >= var_6);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_14 = (!32767);
        var_15 ^= ((~(((!(arr_5 [i_1]))))));
        var_16 = ((var_1 * (arr_5 [i_1 + 1])));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_8, 2));
        var_18 = (min(var_18, (((((!-1) < var_10)) ? (max(27, (var_8 >= 9223372036854775807))) : (arr_1 [i_2] [i_2 + 1])))));
        var_19 = (max(((var_1 / (arr_7 [i_2 - 2]))), -var_8));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {
        var_20 = var_1;
        var_21 = (!var_8);
        var_22 = (max(var_22, (~var_5)));
        var_23 = (min(var_23, (1 >= -123)));
        var_24 = ((-1 ? -var_5 : (117 + -32760)));
    }
    #pragma endscop
}
