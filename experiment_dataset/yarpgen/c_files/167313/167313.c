/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0]) & (((((arr_0 [i_0] [i_0]) == 0)) ? -var_1 : -21688))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [11] = -5787999149759913395;
                        var_13 &= ((-30610 <= ((-(arr_9 [i_0] [i_1] [i_1] [i_2 + 1] [i_3])))));
                        var_14 = arr_8 [i_2];
                        arr_12 [i_0] [i_1] [i_0] [i_1] = ((((~(min(-139305598, var_5)))) * (((!(var_10 + 16877982229011501133))))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((+(((arr_3 [i_0] [i_0] [i_0]) - (arr_3 [i_0] [i_0] [i_0])))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_4] [i_0] [i_0] = 45626;
            var_15 = (arr_5 [i_4]);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_16 = (min(var_16, (arr_17 [i_0] [i_0] [i_0])));
                arr_23 [i_0] [i_0] [i_0] [i_5] = var_7;
                var_17 = -45642;
            }
            var_18 = ((((((arr_9 [i_0] [i_0] [i_0] [i_4] [7]) & 1))) && var_3));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_19 = var_8;
        var_20 = (max(var_20, (((~(arr_1 [i_6]))))));
        var_21 = (((((+(max((arr_0 [i_6] [i_6]), (arr_19 [i_6] [i_6] [i_6])))))) ? (((var_9 >= ((var_7 ? (arr_2 [i_6]) : 139305598))))) : (((arr_24 [1] [1]) ? ((((arr_21 [i_6] [i_6]) && (arr_14 [i_6] [i_6])))) : (var_3 <= var_2)))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = ((var_0 ? (min(var_5, ((var_7 ? var_2 : var_10)))) : (((1 + var_10) + (((max(var_2, (arr_2 [i_7])))))))));
        arr_30 [i_7] = min(((-((var_7 >> (var_5 + 14946))))), var_7);
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_37 [i_8 - 1] = ((((((var_1 << (((arr_14 [i_8 - 1] [i_8]) - 1706)))) >> (((-6724324336524562128 & var_8) - 28903))))) || ((min(-227302835, 8192964629842250411))));
            arr_38 [7] [7] = ((((((arr_32 [i_8] [i_8]) ? (arr_8 [i_8 + 2]) : (((536870911 <= (arr_14 [1] [i_9]))))))) ? (max(((var_1 ? (arr_17 [1] [i_9] [i_9]) : (arr_4 [i_9] [i_9] [i_8 + 2]))), (~1))) : var_5));
            var_22 = (arr_2 [i_8]);
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            arr_42 [i_8] [4] [i_10 + 1] = ((((((max((arr_36 [i_10] [i_10]), (arr_14 [i_8] [i_8])))) ? ((((arr_20 [i_10] [i_10] [i_10] [i_8]) && -20777))) : ((-106 ? (arr_10 [i_8] [i_8] [i_10]) : 0)))) != (arr_8 [i_8])));
            arr_43 [i_8] = ((((min(((1073741696 ? var_6 : 17105)), (!var_8)))) ? var_1 : ((-(arr_39 [i_10 - 1] [i_8 + 2] [i_8 - 1])))));
        }
        var_23 = ((~(((1 > (((!(arr_9 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8] [i_8])))))))));
    }
    #pragma endscop
}
