/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_2;
    var_16 = ((((var_9 ? var_2 : (max(1, var_13)))) - var_9));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((~var_9) + (((max((!var_7), ((12642 < (arr_1 [12])))))))));
        arr_3 [i_0] [i_0] = (((39 * 1) < ((max(15538, 73)))));
        arr_4 [i_0] = (min(32767, (1 || 1)));
        arr_5 [i_0] = ((((var_12 ? (max(var_6, 2670823054)) : (((min(var_11, 27435)))))) == var_11));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((!(((var_6 ? (arr_6 [i_1] [i_1 - 1]) : 1890725347))))));
        arr_9 [i_1 - 1] [i_1] = (((arr_7 [i_1]) ? ((var_9 ? -41 : (arr_6 [i_1 - 1] [i_1 + 1]))) : (((arr_6 [i_1 - 1] [i_1 + 1]) ? -57 : var_3))));
    }
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] = (max((((var_6 ? (arr_11 [i_2] [i_2]) : var_11))), (((((min(var_11, var_12))) == var_1)))));
        arr_14 [i_2] = -877140386;
        arr_15 [6] = ((!((((max(1, var_6)) | (((min(212, 108)))))))));
    }
    #pragma endscop
}
