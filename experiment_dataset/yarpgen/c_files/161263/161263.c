/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_17 *= (max(((((min(-17424, var_0))) ? var_8 : (((arr_0 [i_0 - 2]) ? (arr_0 [i_0]) : 40)))), ((max((max(21148, var_7)), (arr_1 [i_0 - 4]))))));
        var_18 = 50331648;
        var_19 = ((~((40 ? (4294967279 + -2147483640) : 50331654))));
        var_20 = (max(var_20, (min((!9324144965133639969), (max(1, ((min((arr_0 [i_0]), var_12)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] = (arr_3 [i_2] [i_1]);

                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            var_21 = (9324144965133639969 != 1896907881);
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_4 + 3] = (((arr_4 [i_1]) % (((arr_12 [i_4 - 1]) ? (arr_12 [i_4 - 1]) : (arr_12 [i_4 - 3])))));
                        }
                        arr_16 [i_3] [i_3] [i_1] [i_3] = (arr_7 [i_0] [i_1] [i_0 - 1] [i_0 - 2]);
                        arr_17 [i_0] &= (arr_6 [i_0 - 2] [i_0 - 2]);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_22 = (((((var_6 << (var_0 - 119)))) ? (((-1 + (min(var_0, -1714505903))))) : (min((arr_20 [i_5]), (((var_2 ? 1896907881 : var_0)))))));

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_23 = ((!(arr_21 [i_5] [i_6])));
            var_24 = (max((((var_7 / (arr_22 [i_6] [i_6])))), (min(12074155967351615442, 11564802057141756628))));
            var_25 += min(((min((arr_21 [i_6 - 1] [i_6 - 1]), (arr_21 [i_6 - 1] [i_6 - 1])))), (min(-22028, 2877781110)));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_26 = (((!(2198901171054724916 | 1))));
            var_27 = (max((max((arr_26 [i_5]), (max(var_6, (arr_25 [i_7]))))), var_16));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_29 [i_8] [i_5] = 2198901171054724941;
            arr_30 [i_5] [i_5] = 6881942016567794980;
            arr_31 [i_5] = (min((((min(16247842902654826680, 2251799813685248)))), ((var_8 - (~var_3)))));
        }
        arr_32 [i_5] [i_5] = (arr_26 [i_5]);
    }
    var_28 = (min(var_28, (((~(((var_13 * var_0) + var_3)))))));
    #pragma endscop
}
