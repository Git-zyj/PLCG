/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_0;
    var_16 &= var_12;
    var_17 = ((((max(24062, 63))) && ((!(2334156765 || 0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (~var_14);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = var_6;
                        var_20 = 2334156765;
                        var_21 = (((arr_10 [i_2] [i_0]) ? (arr_0 [i_0] [i_1]) : 9198317313457550567));
                        var_22 = ((arr_12 [i_0] [4] [i_1] [i_2] [i_2] [i_3]) && var_2);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = (arr_12 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]);
            var_24 = ((var_12 ^ (arr_3 [i_4] [i_4])));
            arr_15 [i_0] [i_0] = ((0 ? (-93 / 24062) : (((arr_8 [i_0] [i_0] [i_4] [i_0]) ? 18446744073709551615 : 2921694172))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_20 [i_5] &= 3410309285;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_25 &= ((!(~15190128493555639759)));
                            var_26 = -63893;
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_27 = 1;
            arr_34 [i_0] = (!0);
            arr_35 [i_0] [i_0] [i_0] = (arr_2 [i_9] [i_0]);
            var_28 = 2473;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    arr_41 [i_0] [i_10] [i_10] = (((!var_10) || (arr_39 [i_10] [i_11])));
                    var_29 = (min(var_29, (((!(arr_38 [i_10] [i_10]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        var_30 = ((!(((var_3 | (arr_43 [i_12] [i_12]))))));
        var_31 = -24082;
    }
    #pragma endscop
}
