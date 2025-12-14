/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_14 += (var_2 ? (var_12 & 128) : (arr_0 [i_0]));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                var_15 = var_6;
                var_16 = var_11;
            }
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_17 = var_1;
        arr_13 [i_3] [i_3 - 2] = ((arr_9 [7] [7] [i_3] [i_3 + 1]) ? var_11 : (((arr_0 [i_3]) ? ((113 ? var_1 : var_0)) : (arr_4 [i_3 - 2]))));
    }

    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        arr_16 [2] &= var_11;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_19 [i_4 - 1] [i_4 - 1] = 281457796841472;
            arr_20 [i_4] [i_5] [i_5] = (((!var_13) ? (arr_15 [i_4] [i_4]) : (~var_4)));
        }
        var_18 = (min(var_18, var_5));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_23 [i_6] = ((((arr_22 [i_6] [i_6]) ? 6576282110429348752 : (var_6 - var_7))));
        arr_24 [i_6] = (min((arr_21 [i_6] [i_6]), ((var_0 ? var_2 : 1))));
        arr_25 [5] = 65535;
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_19 = (min(var_19, (1521789847 | 281457796841455)));
        arr_29 [8] |= (29288 ? ((~(var_1 + var_0))) : 1073741823);
    }
    var_20 = var_9;
    var_21 = ((((~((-281457796841490 ? 65527 : 1))))) ? (~847279387) : (!-1));
    #pragma endscop
}
