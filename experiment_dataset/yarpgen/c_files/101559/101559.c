/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 -= (~3901998438);
        var_19 = (min(var_19, var_7));
        var_20 ^= (max((21 > 74), (arr_0 [i_0 - 1])));
        var_21 = ((!(72 < 11)));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((!((((22 ? 0 : 262143))))));
        var_22 = ((~((-((181 ? 262143 : 95))))));
        var_23 = (min(var_23, (arr_3 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, ((((arr_7 [4] [2]) && (((228 >> (161 - 158)))))))));
        arr_8 [i_2] = ((-75 ? ((0 * (arr_6 [i_2] [i_2]))) : (max((arr_6 [i_2] [i_2]), ((var_7 ? (arr_4 [i_2]) : (arr_7 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3] = (arr_6 [18] [18]);
        var_25 = 109;
    }
    var_26 = (max(var_26, ((max((((219 || 24905) / var_17)), var_9)))));
    var_27 = var_17;
    var_28 = var_5;
    #pragma endscop
}
