/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [5]) <= 81));
        arr_3 [0] = ((65535 ? (arr_0 [i_0] [i_0]) : var_8));
        arr_4 [i_0] = (((arr_0 [i_0] [i_0]) >> ((((90 ? (arr_1 [i_0]) : -4781225299433559596)) - 541160968441853746))));
        arr_5 [i_0] = (16189907849737582099 ? var_2 : (arr_0 [i_0] [i_0]));
        arr_6 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((-1 / (((arr_8 [i_1] [i_1]) ? (((arr_8 [i_1] [i_1]) / (arr_8 [i_1] [i_1]))) : (arr_8 [i_1] [i_1])))));
        arr_10 [i_1] = min((((arr_7 [i_1]) / (arr_7 [i_1]))), ((((var_0 ? var_0 : 87)))));
        arr_11 [i_1] = (((min((arr_0 [i_1] [6]), ((max(31294, (arr_7 [i_1])))))) < (((0 ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
    }
    #pragma endscop
}
