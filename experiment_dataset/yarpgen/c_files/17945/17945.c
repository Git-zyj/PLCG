/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_14 = max(((min((arr_3 [i_0 - 4]), (arr_2 [i_0 - 3] [i_1 - 2])))), var_10);
            arr_7 [i_0] [i_1 + 1] [i_1] = ((~(min((arr_0 [i_1 - 1]), var_4))));
            var_15 = (((-1 && var_2) ? (((arr_0 [i_0 - 4]) % (arr_1 [i_0 + 1]))) : (!var_2)));
            var_16 = ((((((((arr_1 [i_1]) ? (arr_6 [i_0]) : 6))) ? ((-(arr_3 [i_1]))) : (arr_2 [12] [i_0]))) % (((((arr_2 [i_1] [i_0]) ? var_11 : (arr_1 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_0 - 2] [i_0 - 2] = ((20 ? 235 : 49152));
            var_17 = var_2;
        }
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = (min((((var_6 ? var_4 : 127))), (arr_0 [i_3])));
        arr_15 [i_3] = ((var_7 - ((((var_6 ? (arr_3 [10]) : (arr_13 [i_3])))))));
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (max(var_10, (((((min(0, (arr_12 [i_4] [i_4])))) >= var_11)))));
        arr_20 [i_4] = var_13;
        var_18 = (arr_0 [i_4]);
        var_19 = (max(var_19, 56));
        arr_21 [i_4 + 1] = (((min((arr_9 [i_4 - 2] [i_4]), (~6144)))) ? var_4 : (((((min(var_11, (arr_9 [i_4 - 2] [i_4 - 3]))) + 9223372036854775807)) >> (var_0 - 24657))));
    }
    var_20 = var_6;

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 = (((arr_18 [i_5]) >= ((~(max(2251799813677056, -32757))))));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_22 = ((32746 ? 1 : 6));
            arr_28 [i_5] [i_5] = (((arr_10 [i_5] [i_6]) == (~-32746)));
            var_23 = ((-var_12 ? ((((arr_12 [i_5] [i_6]) == (arr_27 [9] [9] [9])))) : (arr_1 [i_6])));
        }
        var_24 = (arr_23 [3]);
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_25 = ((var_9 ? (arr_10 [i_7] [i_7]) : ((((max(var_13, var_9))) % ((min(var_0, (arr_17 [i_7]))))))));
        var_26 = (min(var_26, (arr_9 [15] [i_7])));
    }
    #pragma endscop
}
