/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_2 << (((var_0 + var_8) - 2417183505)))))));
                    arr_9 [i_0] [i_0] [i_2] = (((var_2 + var_7) || 45921));

                    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = (max(var_14, ((((arr_0 [i_0 + 4] [i_2 - 1]) < 19615)))));
                        arr_13 [4] [i_3] [i_2] [i_3] = (10466757051072555185 % var_6);
                        var_15 += ((11 | (arr_11 [i_2 + 1] [i_0] [i_3 + 1] [i_0 + 1])));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] = (((arr_7 [i_0] [i_1] [i_2] [i_1]) + 831));
                        var_16 = (45921 || 1);
                        arr_17 [i_2] = ((-5805279102417515529 | (-32767 - 1)));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_17 = (min(var_17, (1045798672 == 32738)));
            arr_22 [i_0] = (19614 > -32739);
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 6;i_6 += 1)
    {
        var_18 = ((var_6 | (8429748530806551721 << var_1)));
        arr_25 [i_6] = (var_9 * -37);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_19 = (min(var_19, (((var_4 || (arr_26 [i_7 + 3]))))));
        arr_30 [i_7] = ((((((arr_27 [i_7]) % (arr_28 [22] [16])))) != var_10));
        var_20 -= ((arr_26 [i_7 + 3]) & var_0);
        var_21 ^= (var_4 || var_6);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_33 [i_8] = ((1023 >= (((arr_29 [i_8] [i_8]) + (arr_26 [i_8])))));
        var_22 = (max(var_22, (var_11 & var_7)));
        var_23 = (max(var_23, ((((arr_31 [i_8]) % -799882065127579109)))));
        var_24 = (min(var_24, (var_0 != var_8)));
    }
    var_25 = ((var_9 || (((var_12 % (var_1 ^ 10466757051072555185))))));
    var_26 = var_2;
    #pragma endscop
}
