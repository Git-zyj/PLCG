/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 = (min((arr_2 [i_0]), (((2908630493 ? (arr_0 [i_0]) : 1963776534)))));
            var_14 = (max(var_14, (4047487670 | 247479617)));
        }
        arr_8 [i_0] = (((min((arr_1 [i_0] [i_0]), (arr_5 [i_0] [i_0]))) | ((((arr_3 [i_0]) ? (((((arr_7 [i_0] [i_0] [i_0]) && (arr_5 [i_0] [i_0]))))) : (max((arr_2 [i_0]), (arr_4 [i_0]))))))));
        var_15 *= (arr_6 [i_0] [i_0]);
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] = ((((((arr_10 [i_2] [i_2]) * ((((arr_9 [i_2]) <= (arr_11 [i_2] [i_2]))))))) <= (((arr_11 [i_2] [i_2]) & ((min((-9223372036854775807 - 1), 4047487639)))))));
        var_16 = (min((arr_10 [i_2] [i_2 - 2]), (arr_10 [i_2] [i_2])));

        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_17 = ((max((arr_15 [i_2] [i_3] [i_2]), (arr_15 [i_3 - 2] [i_3 - 2] [i_3 - 2]))));
            var_18 = ((min((arr_9 [i_3]), (arr_9 [i_3]))));
        }
    }

    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] = arr_7 [i_4] [i_4] [i_4 + 1];
        var_19 -= ((((((((arr_7 [i_4] [i_4] [i_4]) && (arr_14 [i_4] [i_4])))) * ((((arr_7 [i_4] [i_4] [i_4]) || (arr_2 [i_4])))))) + (arr_14 [i_4] [i_4])));
        var_20 = min((min((arr_17 [i_4]), (arr_17 [i_4]))), ((((arr_17 [i_4]) == (arr_3 [i_4 - 1])))));
    }
    var_21 = ((1963776534 ? 12734 : 1707010687));
    var_22 = var_6;
    #pragma endscop
}
