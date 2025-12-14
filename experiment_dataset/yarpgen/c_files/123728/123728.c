/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (--0);

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 += (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_12 = (min(var_12, ((((arr_1 [i_0] [6]) ^ (max(((0 ? 18446744073709551615 : var_9)), (((arr_1 [i_0] [i_0]) ? var_6 : var_7)))))))));
        arr_3 [i_0] [i_0] = (min(18446744073709551599, ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_13 = (max(((((!39644) ? (((arr_0 [i_0]) << (var_0 - 5147555982922026395))) : (arr_1 [i_0] [i_0])))), (((!1) & (max(1, var_0))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2 - 3] [i_1] = (arr_2 [i_1] [13]);
            var_14 = (min((((arr_7 [i_2 - 1] [i_2] [i_2 + 2]) ? ((-(arr_7 [i_1] [i_1] [i_2]))) : (arr_1 [i_1] [i_1]))), (arr_7 [i_2 - 2] [i_1] [i_1])));
            arr_11 [i_2 - 1] [i_2 + 1] [i_1] = (((arr_7 [i_2] [i_2 + 2] [i_2 - 1]) ? (((arr_1 [i_1] [i_1]) ? (arr_1 [i_2 + 1] [i_1]) : (arr_1 [i_2 + 1] [i_1]))) : 1));
            var_15 = (max(var_15, var_5));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
        {
            var_16 = (max(var_16, (((!(arr_2 [i_3 + 1] [i_3 + 3]))))));
            var_17 = (max(var_17, (arr_15 [i_3 + 3])));
        }
        arr_16 [i_1] = (var_7 != (max(1, var_5)));
        arr_17 [8] [8] = (((((((min(var_7, (arr_7 [i_1] [i_1] [i_1]))) != (((max((arr_14 [i_1] [i_1]), var_4)))))))) % ((((1 ? (arr_13 [i_1]) : var_0)) << (var_8 - 12062)))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_21 [i_4] = ((-(max((((arr_20 [i_4] [i_4]) ? (arr_19 [i_4] [i_4]) : var_9)), (min(59873, var_0))))));
        var_18 = arr_19 [i_4] [i_4];
        arr_22 [i_4] = (((max((arr_18 [i_4]), 2998462658695860586)) != (var_6 + 2998462658695860586)));
        var_19 = (max(var_19, ((min(((10877595059884778796 + (arr_18 [i_4]))), ((min((arr_18 [i_4]), (arr_18 [i_4])))))))));
    }
    #pragma endscop
}
