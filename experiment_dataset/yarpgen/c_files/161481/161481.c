/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((var_7 + (var_0 < var_7))), 64505));
    var_13 -= (((var_5 * 12604230441478833815) & ((max((~var_7), var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_14 &= (~var_0);
        var_15 = ((((((arr_0 [i_0]) + 79))) + var_11));
        arr_3 [i_0] [1] = ((var_7 < (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 = 71916856549572608;
        arr_6 [i_1] &= var_3;
        arr_7 [i_1] = var_10;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_16 [i_3] [i_4] = var_7;

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_5] [i_4] [i_4] [i_1] [i_2] [i_4] [i_1] = ((min((1031 & var_1), (((8414327236726657409 ? (arr_0 [i_1]) : 0))))) % (((~(var_7 & 8614)))));
                            arr_20 [i_1] [i_2] [i_4] [i_4] [i_4] [i_5 + 2] = ((((min((arr_8 [i_3]), var_5))) ? (((((var_10 && (arr_15 [i_3] [i_4] [i_3]))) && (var_11 && 64505)))) : ((1048 ? (arr_5 [i_5 + 1] [i_2 + 1]) : (arr_5 [i_1] [i_1])))));
                            arr_21 [i_1] [i_4] [i_3] [i_4] [i_5] = var_8;
                            var_17 &= (((((((var_5 ? (arr_8 [i_5]) : (arr_10 [i_1] [i_1])))) ? (((arr_9 [3] [i_3] [i_4]) * 1048)) : (((max(var_0, var_7))))))) ? var_3 : var_10);
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_18 = -var_8;
                            var_19 = ((max(var_9, (arr_14 [i_1] [i_1] [7] [i_2 - 1] [i_4] [i_4]))) >> (var_11 - 49));
                            arr_25 [i_1] [i_4] [i_4] [i_6] = (((arr_14 [i_6] [i_4] [i_3] [i_2 + 1] [i_4] [i_1]) ? (((arr_24 [i_2 - 2] [i_4] [i_2 - 2]) & 34027)) : (((!(arr_22 [i_4] [i_2 + 1] [i_2] [i_2 - 1] [i_4]))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            arr_28 [1] [i_4] [i_7] = (arr_24 [i_1] [i_4] [1]);
                            var_20 = ((((((arr_14 [i_1] [i_2] [i_3] [5] [i_4] [i_7 + 4]) ? var_7 : var_4))) < (arr_15 [i_2 + 1] [i_4] [i_2 + 1])));
                            arr_29 [i_1] [i_4] [1] [i_1] [i_3] = (((776 & var_5) ? ((var_6 ? var_6 : var_3)) : (((var_2 ? var_9 : var_5)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1)
    {
        var_21 = ((!var_1) && (((arr_30 [i_8 + 1] [i_8 + 3]) || (arr_30 [i_8 - 3] [i_8 - 1]))));
        arr_32 [i_8] = (((143 || 11764) && (var_2 && var_8)));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_22 = (min((arr_34 [i_9]), ((((((arr_34 [i_9]) & var_11))) ? ((((arr_33 [i_9]) & var_0))) : (~var_3)))));
        arr_35 [i_9] [i_9] = 11527152038144350797;
        var_23 = 21231;
        arr_36 [17] [17] = (!(!59069));
    }
    var_24 ^= (max((var_8 | var_7), (((var_7 >= (min(var_0, 1073741792)))))));
    #pragma endscop
}
