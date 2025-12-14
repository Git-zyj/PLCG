/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_1] = (max(((var_3 ? (min(var_18, (arr_4 [i_1]))) : (arr_5 [i_0] [i_1]))), ((((arr_4 [i_1]) ? 0 : ((~(arr_0 [i_0] [i_0]))))))));
            arr_8 [i_1] [i_1] = (arr_0 [i_1] [i_0]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = (arr_2 [i_0]);
            arr_11 [i_2] = (2773386559 >= 1);
            var_21 = -1;
        }
        arr_12 [i_0] = ((((((-(arr_6 [10] [14])))) < var_9)) ? (((~(max((arr_10 [i_0]), var_15))))) : ((((((arr_4 [16]) ^ var_3))) ? ((max(2773386542, var_8))) : ((var_13 ? (arr_0 [i_0] [i_0]) : var_10)))));
        var_22 = (min(var_22, (((((((!((((arr_0 [i_0] [i_0]) ^ var_6))))))) ^ ((((((arr_4 [8]) ? (arr_6 [4] [4]) : var_14))) ? (var_13 ^ 1) : ((1 ? 3460808741629790097 : (arr_4 [2]))))))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_23 = 133;
            var_24 += ((((1 ? var_1 : 1))) ? (!59) : (((arr_2 [i_0]) ? (arr_1 [9]) : -5558)));
            var_25 = ((1 && (((-(arr_5 [i_3] [i_0]))))));
        }
    }
    var_26 = var_11;
    var_27 = var_1;
    #pragma endscop
}
