/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 |= var_12;
    var_16 = (max((min(-var_0, (var_2 + var_0))), var_5));

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 - 2] [i_0 + 3] = (arr_2 [i_0 - 2]);
        var_17 -= ((((~(max((arr_1 [i_0] [i_0 + 3]), 1)))) / var_7));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_18 = ((var_12 ? (arr_6 [i_1 - 1]) : (arr_2 [i_1 + 1])));
            var_19 = (!var_0);
            var_20 -= 4232;
            arr_9 [i_1] [i_2] [i_1] = var_10;
        }
        var_21 = var_9;
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_12 [8] &= (min((arr_5 [i_3]), (arr_11 [i_3])));
        var_22 = (max((((max(var_9, (arr_6 [i_3]))) + (arr_1 [i_3] [i_3 - 3]))), ((((arr_6 [i_3 - 3]) / 1130)))));
        arr_13 [i_3] = (-1131 ? 15090614765674085844 : -4666);
        arr_14 [i_3] = (max((((var_7 | var_3) ^ var_7)), ((~(~4666)))));
        arr_15 [i_3] = var_5;
    }

    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_23 ^= (((((arr_10 [i_4] [i_4]) * (arr_8 [i_4] [i_4]))) % (arr_11 [9])));
        arr_18 [i_4] = (arr_11 [i_4]);
        arr_19 [i_4] = ((-((max(50356, (arr_10 [i_4] [i_4]))))));
        arr_20 [i_4] = (min(62704, 0));
    }
    #pragma endscop
}
