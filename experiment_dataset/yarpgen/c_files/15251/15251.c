/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 13526;
        var_18 = ((((((!4101678356) ? (((arr_1 [i_0]) ? var_7 : var_14)) : (!var_15)))) && ((((var_6 && (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_19 = 9223372036854775807;
                        var_20 ^= ((193288938 ? ((var_11 ? (arr_7 [i_0] [i_0] [i_0]) : 4101678379)) : (!45207)));
                        var_21 = (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 14857 : (!0)));
                    }
                }
            }
            var_22 -= (arr_6 [i_0] [i_0] [i_0]);
            var_23 &= (arr_8 [i_0] [i_1] [i_1]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_15 [i_0] [i_0] [14] = (max((((!((((arr_4 [i_0] [i_0] [i_0]) + 0)))))), ((-(((arr_5 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : var_0))))));
            var_24 = ((((((arr_10 [i_0] [i_4] [i_0] [i_4] [i_4] [i_4]) ? (arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_9 [i_0] [i_0] [i_4] [i_0])))) ? (max((((!(arr_0 [i_4])))), ((var_7 ? (arr_7 [i_4] [i_0] [i_0]) : 18446744073709551615)))) : ((max(((((arr_4 [i_4] [i_4] [i_0]) - var_4))), (((arr_13 [i_0] [i_0]) + (arr_6 [i_0] [i_0] [i_4]))))))));
        }
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            var_25 = (((!(arr_18 [i_0] [i_0]))));
            var_26 &= ((-(arr_12 [i_5] [i_5 + 2] [i_5])));
            arr_20 [i_5] = ((-18446744073709551593 ? ((18446744073709551601 ? (arr_12 [i_0] [i_0] [i_5 - 2]) : (arr_8 [i_0] [i_0] [i_0]))) : (!296237757)));
            var_27 = var_11;
        }
        var_28 *= (1023 - 16487);
        var_29 = ((((((!var_11) ? (((var_0 ? 64 : (arr_19 [i_0] [i_0])))) : var_16))) || ((((!32764) ? (!1) : (var_16 || var_4))))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 13;i_6 += 1)
    {
        arr_25 [i_6] = 9223372036854775807;
        var_30 -= -0;
        var_31 = ((-817572008 ? 8474644937751237150 : 0));
    }
    #pragma endscop
}
