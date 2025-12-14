/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_19 -= var_11;
            var_20 -= 0;
        }
        arr_7 [i_0] = 53;
        var_21 = ((((var_8 ? var_1 : (arr_6 [i_0] [i_0]))) & (~3)));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((var_7 ? (arr_2 [i_2]) : var_9));
        var_22 -= ((((var_4 + (arr_0 [2] [12])))) ? var_17 : (arr_1 [i_2 + 3] [i_2 + 3]));
        var_23 -= 37;
    }
    var_24 = ((-var_18 ? -var_4 : var_17));
    var_25 = 232;
    var_26 = (min(var_26, ((min(((max(var_15, ((var_5 ? var_4 : -2778))))), (min((((205 >> (18446744073709551615 - 18446744073709551584)))), var_5)))))));
    var_27 -= 1214451261;
    #pragma endscop
}
