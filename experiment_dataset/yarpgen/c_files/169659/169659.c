/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                var_11 = (min(var_11, (var_10 / var_4)));
                var_12 = (min(var_12, var_3));
                arr_9 [i_0] [i_1] |= var_7;
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_13 [i_0] [i_0] [i_3] [i_0] = ((var_8 & ((var_7 ? 127 : -2020621729))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_16 [i_0] [i_1] [i_3] [i_4] = 15418564895973172084;
                    arr_17 [i_4] [i_3] [1] [i_0] [i_0 - 1] = -127;
                    arr_18 [i_1] = (((((182787884 ? 3028179177736379531 : 28))) && (-2147483647 - 1)));
                }
            }

            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                arr_21 [i_0 + 1] [i_1] [i_5] = ((var_7 ? -444 : 1));
                arr_22 [i_0 + 1] = var_5;
                var_13 = (max(var_13, 13));
            }
            var_14 = 1;
            var_15 = (min(var_15, ((((arr_0 [i_0 + 1]) ? (var_5 + 13749731949663496598) : ((((arr_10 [i_0 + 1] [i_1]) >> (var_4 - 634979321200539758)))))))));
            var_16 = (min(var_16, var_3));
        }
        var_17 |= ((((max((((arr_7 [i_0]) | 0)), ((min(0, 0)))))) ? ((((var_4 && ((max((arr_20 [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0 + 1] [i_0])))))))) : (max(((max(0, var_1))), (max(var_2, 5295682172164025676))))));
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_18 = (min(var_18, ((max(((394287907 ? (8 * 2147483647) : 14989505596270064403)), (max(var_4, (78 & 1488211374442763620))))))));
        arr_27 [8] = ((((var_3 & (-78 & 0))) % var_4));
        var_19 = (1048575 ? ((((max(1, var_10))) ? (9137663237647526455 * var_1) : 1048575)) : var_8);
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_20 = (max(var_20, (((var_0 | (arr_30 [4]))))));
        var_21 = ((((min((arr_31 [i_7]), ((2020621728 ? -79 : var_5))))) ? ((((-26678 + 2147483647) >> 6))) : (max((arr_29 [i_7] [i_7]), (arr_29 [i_7] [i_7])))));
        var_22 = (min(var_22, 14));
        arr_32 [i_7] = min(var_4, (((9223372036854775807 - var_9) >> (54587 == 0))));
        arr_33 [i_7] = var_2;
    }
    #pragma endscop
}
