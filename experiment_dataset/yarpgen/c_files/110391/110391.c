/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (min(((((arr_2 [i_1] [i_0]) ? (arr_4 [i_0 - 2] [i_0 - 2]) : ((91 ? (arr_4 [i_1] [i_0 - 2]) : (arr_2 [i_0 - 1] [i_0 - 1])))))), (max(91, 268304384))));
            arr_6 [i_0 + 1] = (arr_0 [15]);
            arr_7 [i_1] [i_0] [i_0] = (min(((var_5 ? ((min(-1, 15))) : (((-5472401549557417185 < (arr_4 [2] [i_1])))))), ((((arr_3 [6] [i_0 - 1] [i_0 - 1]) <= 11725227971572747770)))));
            var_16 += (max(17, 3028120932752538743));
        }
        arr_8 [i_0] = arr_1 [i_0] [i_0 - 2];
        arr_9 [i_0] [i_0] |= (255 <= 770499662);
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (min((min(135, 86843559)), (((((var_3 ? (arr_2 [14] [i_2]) : (arr_12 [i_2 - 2])))) ? (((var_0 / (arr_2 [i_2] [i_2])))) : (arr_3 [i_2] [i_2] [5])))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_17 = (arr_15 [i_2 - 2] [i_2 - 2]);
            var_18 = (arr_0 [i_2 - 2]);
        }
    }
    var_19 -= ((-1 ? ((-var_3 ? (((min(var_7, var_9)))) : (max(var_3, var_0)))) : var_8));
    #pragma endscop
}
