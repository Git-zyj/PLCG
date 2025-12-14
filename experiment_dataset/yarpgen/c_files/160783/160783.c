/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = -633885388;
                    var_21 -= ((((arr_0 [i_0 - 1]) ^ (min(9554078837653422816, -18)))));
                    arr_9 [i_0] = (((!(arr_5 [i_0 - 1] [i_0]))));
                }
            }
        }
        var_22 = ((7 ? ((((var_5 <= (arr_3 [i_0 - 1] [i_0]))))) : (((arr_0 [i_0 + 1]) % ((var_12 % (arr_6 [i_0])))))));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_23 -= -20;
        arr_12 [i_3] = 1024;
        var_24 += (((var_14 ? -18 : (arr_5 [12] [12]))));
        var_25 -= (((arr_5 [i_3 - 1] [4]) | var_12));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_26 = (min((arr_14 [i_4]), (var_13 / 20)));
        var_27 += (arr_14 [14]);
        arr_15 [i_4] = (max((((((arr_13 [i_4]) ? 1024 : var_13)) >= -0)), (arr_14 [i_4])));
        arr_16 [i_4] = (arr_14 [i_4]);
        var_28 = (min(1, ((min(219, var_15)))));
    }
    var_29 = (max(var_29, (((var_7 ? var_3 : ((((((min(var_18, 992))) <= var_6)))))))));
    var_30 = (min(var_30, ((max(var_19, var_18)))));
    #pragma endscop
}
