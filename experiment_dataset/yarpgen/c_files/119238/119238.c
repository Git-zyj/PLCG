/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (var_1 && 11817);
    var_14 ^= -var_6;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (--0);
        var_15 = (min((arr_0 [i_0 - 1] [i_0 + 1]), (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 2])))));
        var_16 = (max(var_16, (((!((((((var_1 ? (arr_1 [i_0]) : 0))) ? (var_3 / var_5) : ((var_3 ? var_11 : var_1))))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 -= (((((arr_0 [i_1] [i_1]) ? var_0 : var_10)) + (-14 - var_2)));
        var_18 = -var_6;
        var_19 = ((~((((arr_3 [i_1 + 2] [i_1 + 2]) == -27590)))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((((((((arr_4 [i_2]) ? var_5 : (arr_5 [9]))) + 2147483647)) >> (((!(arr_7 [i_2] [i_2]))))))) ? (((max(-22108, var_6)))) : (!var_9)));
        var_20 = (max(var_20, (((-var_7 ? (((0 <= 0) ? ((var_1 ? var_1 : var_11)) : var_10)) : (((22108 != 3549) ? (var_2 + 22117) : (arr_8 [i_2 + 1]))))))));
        var_21 |= ((((((arr_7 [14] [14]) ? var_7 : (arr_8 [i_2 + 1])))) ? var_4 : ((var_7 ? (arr_7 [8] [8]) : (arr_8 [i_2 - 1])))));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_4] [12] [8] |= (((~(-20621 + -1))));
                    var_22 = (min(var_22, var_2));
                    var_23 = (((arr_3 [i_4 - 4] [i_3 - 3]) ? ((var_12 ? -3528 : (arr_6 [i_2]))) : ((max(-22113, var_0)))));
                    arr_15 [i_3] [i_2] [i_4] = ((((((+(((arr_8 [i_2]) ? (-32767 - 1) : var_12)))) + 2147483647)) >> (((min((arr_8 [i_2]), (var_11 % var_12))) + 3189))));
                }
            }
        }
        var_24 = (max(var_24, var_10));
    }
    var_25 = var_9;
    #pragma endscop
}
