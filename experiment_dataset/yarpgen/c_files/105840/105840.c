/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 = (((!1) < (~30236)));
        var_11 = (max(var_11, (var_9 | 946470901)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_12 = (((arr_3 [i_1 - 2] [i_1 + 1]) <= var_3));
        var_13 = (((arr_2 [i_1 - 2]) ? (((arr_3 [i_1] [i_1]) & -9223372036854775804)) : -7383264780218521056));
        var_14 = ((var_3 ? 1 : (((arr_3 [i_1] [i_1]) ? 1761856345957834269 : 4294967288))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2] [i_2] = (max((arr_3 [i_2] [i_2]), var_2));
        var_15 = (arr_4 [2]);
    }
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            {
                var_17 = ((30414 > (min((arr_9 [i_3] [i_3] [i_4 + 1]), (var_3 % 4294967258)))));
                var_18 = (((~-1130414712650462131) ^ (((1130414712650462116 | var_2) ^ (arr_11 [i_3])))));
                arr_12 [i_3] [i_4] [i_4 + 1] = (max(3536419722784770549, (((((1638126043 ? var_5 : -7255636443893535517)) > ((35138 ? (arr_9 [i_3] [i_4 + 1] [i_3]) : (arr_10 [i_3] [i_4]))))))));
            }
        }
    }
    #pragma endscop
}
