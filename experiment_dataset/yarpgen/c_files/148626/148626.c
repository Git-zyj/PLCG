/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (!255);
        arr_4 [i_0] = 38650;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = 127;
        var_12 = var_9;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = (max(128, 0));
            var_13 = (min(((-1800 ? 0 : (((arr_9 [i_1] [i_1 + 1] [i_1 + 1]) * 2834)))), -124));
            arr_11 [i_1] = -795743812;
            var_14 *= ((!(((((((arr_1 [i_1] [i_1]) * var_8))) ? (!0) : (arr_9 [1] [1] [i_1 + 2]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = ((2701944521 ? 10 : 49989));
                        var_16 = ((((-1959675776469443490 + 9223372036854775807) >> (4294967295 - 4294967284))));
                    }
                }
            }
        }
    }
    var_17 *= (min((((min(var_11, 2)) * (((127 << (var_2 - 1108912069)))))), (((((min(var_4, var_9))) >> ((((min(var_4, var_4))) - 9391)))))));

    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_18 = (arr_18 [i_5 - 1]);
        var_19 *= (!var_9);
        var_20 = 0;
        arr_20 [i_5] [i_5] = ((4294967289 ? ((4294967289 ? (min(6, 504403158265495552)) : var_7)) : 18));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_21 = (((arr_17 [14] [i_6] [i_6] [i_6] [i_6]) ^ var_6));
        var_22 *= var_2;
        arr_23 [i_6] = ((-(!9155)));
    }
    #pragma endscop
}
