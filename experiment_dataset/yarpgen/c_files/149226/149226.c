/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!((max((max(24039, 36935)), (!var_7)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 6;i_1 += 1) /* same iter space */
        {
            var_13 = 9;
            var_14 = (-(min((arr_5 [i_1 - 1]), (arr_5 [i_1 + 4]))));
        }
        for (int i_2 = 3; i_2 < 6;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [i_0] = (arr_0 [i_2 + 3]);
            var_15 = (((((var_4 ? var_2 : (max(var_5, 33490))))) ? ((min((max(var_3, 4134653658)), (max(33481, var_3))))) : (max((-2147483647 - 1), var_7))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_11 [i_0] = (1883 | 33554431);
            var_16 ^= ((11535550474902803156 ? 18446744073709551615 : (~var_1)));
            var_17 = (~65535);
        }
        arr_12 [i_0] = (min((((arr_0 [i_0]) ? 41494 : (min((arr_9 [i_0] [i_0]), var_7)))), -108));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_15 [0] |= (((min(63653, (arr_13 [16] [18])))) ? (arr_14 [i_4] [i_4]) : (((arr_14 [i_4] [i_4]) | (-23055 < 1))));
        arr_16 [i_4] = (min(((((7 + 1898) >= (((arr_13 [i_4] [i_4]) ? (arr_13 [i_4] [i_4 + 2]) : (arr_13 [i_4] [i_4])))))), ((-(4294967291 >= var_6)))));
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        var_18 = (arr_18 [i_5 - 2]);

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_19 -= (arr_21 [i_5]);
            arr_23 [i_6] = ((~(max(var_2, var_0))));
            var_20 = ((((max(33554437, (-1046 > 0)))) | (~24)));
        }
    }
    var_21 = var_7;
    #pragma endscop
}
