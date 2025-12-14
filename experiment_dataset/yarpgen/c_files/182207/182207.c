/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = (max(var_18, (((((max((arr_1 [i_0] [i_0]), 2147418112))) ? (((((arr_3 [i_0]) || (arr_1 [i_0] [i_0]))))) : (((arr_1 [i_0] [i_0]) / (arr_3 [i_0]))))))));
        arr_4 [i_0] [i_0] = (min((((!(arr_2 [i_0] [i_0])))), ((var_15 >> (((arr_2 [i_0] [i_0]) - 5207053942773421500))))));
        var_19 *= (((arr_1 [i_0] [i_0]) != 41533));
        var_20 |= (arr_1 [21] [21]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_2] [4] [i_2] &= arr_9 [i_1];
            arr_11 [i_1] [i_2] = var_1;
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_14 [i_1] = var_5;
            var_21 = var_7;
            var_22 &= ((-(max((((-(arr_7 [i_1] [i_3] [i_3])))), ((var_4 ? (arr_6 [i_1]) : var_0))))));
        }
        var_23 = -var_6;
        arr_15 [i_1] = (((arr_9 [i_1]) ? (max(var_8, (min(-274877906944, 1)))) : 274877906943));
        var_24 += ((var_3 ? var_6 : ((-((3741185628 ? 1 : 64))))));
    }
    var_25 = var_3;
    #pragma endscop
}
