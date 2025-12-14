/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [5] [i_0] [i_1] = (max(-14692782956576601687, var_2));
            var_12 ^= (arr_5 [i_1] [i_1] [i_0]);
            arr_7 [i_0] [i_1] = var_7;
            arr_8 [i_1] [i_1] = (((-6717219410509720365 && 1430972002) | (max((((arr_5 [i_0] [10] [4]) % var_11)), ((((arr_0 [i_1] [2]) >= (arr_5 [i_1] [i_1] [i_0 + 1]))))))));
        }
        arr_9 [i_0] [i_0] = max(((-15336 & (((arr_0 [i_0] [i_0]) ^ (arr_2 [i_0 + 3]))))), -var_3);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_13 = (max(var_13, var_10));
        var_14 = (min(var_14, 1277329244));
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((min((arr_13 [0]), (32767 >= 458752))))));
        arr_15 [8] [i_3] = max(var_6, (min((~var_7), (arr_1 [i_3]))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_16 = var_4;
                var_17 = var_11;
                var_18 = (max((max((max(30720, 3017638076)), ((((arr_21 [i_4] [i_4] [4]) ? (arr_16 [i_4]) : var_9))))), (min(((~(arr_18 [i_4]))), (((var_0 ? 24407 : var_8)))))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_19 = (((arr_23 [i_6]) ^ var_1));
        var_20 = (min(var_20, ((max(-1099511627776, 15519223454542899348)))));
        var_21 = ((((max(-860006754, (!var_4)))) ? (((~var_7) ? (1711825870797052655 > var_6) : ((~(arr_24 [i_6]))))) : (arr_23 [i_6])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = ((-(((min(var_4, (arr_28 [12]))) >> (var_10 - 4045284624)))));
        arr_30 [i_7] [i_7] = -var_11;
    }
    #pragma endscop
}
