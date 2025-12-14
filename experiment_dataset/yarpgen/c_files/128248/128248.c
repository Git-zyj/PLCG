/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_13 * ((var_14 ? (max(30, 0)) : var_6)));
    var_20 = (max(var_20, var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_0] = (((min(var_12, (var_10 || 1567882882)))) ? -210338734 : (arr_3 [i_0]));
                        arr_11 [i_0] [i_2] = ((min(var_3, ((var_4 - (arr_9 [i_0] [i_0] [8] [i_0] [i_0] [i_3 + 1]))))));
                        arr_12 [i_1 + 1] [i_0] [i_0] [i_2] = var_8;
                        var_21 = (min(var_21, (((51 ? 461519017 : 774769778)))));
                        var_22 = ((1019158229 | var_6) | var_12);
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_23 = (arr_15 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0] [i_0] [i_0 - 2]);
                        arr_17 [i_0] [i_2] [i_2] [i_2] = var_5;
                        var_24 = (((min((arr_13 [i_0] [i_4 - 1]), (arr_13 [i_0] [i_4 + 1]))) | ((239242220 ? (arr_14 [i_4]) : (arr_14 [i_4 + 2])))));
                        var_25 = -1227167615;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_26 = ((0 || ((var_17 || (((var_13 ? var_15 : var_12)))))));
                        var_27 = (max(var_7, var_13));
                        var_28 = var_9;
                    }

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_29 = (var_9 ? (((516431662 ? 206 : var_5))) : var_12);
                        arr_25 [i_0 + 2] [i_1 - 3] [i_0 + 2] [i_0] = (1342113611 / (((arr_13 [i_0] [i_0]) ? (arr_13 [i_0] [i_0]) : var_17)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_30 = var_17;
                        arr_28 [i_0] [i_0] [6] [i_0] = (arr_27 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0]);
                        arr_29 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_7] = ((16646144 && (arr_3 [i_1 - 1])));
                        var_31 = -1;
                        arr_30 [i_1] [i_2] [i_0] = 3926586535;
                    }
                }
                var_32 = ((1905154445 ? 67092480 : (1534947221 >= 1227167614)));
                arr_31 [i_0] [12] = ((!((min((arr_27 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0]), (max(var_15, (arr_26 [i_1] [i_0 - 3] [i_0 - 3]))))))));
                var_33 = (arr_18 [i_0] [i_0] [15]);
            }
        }
    }
    var_34 = var_7;
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            {
                var_35 = ((arr_16 [i_8 - 1] [i_8 - 2] [i_8 + 3] [i_8 - 3] [11]) ? (max((min(var_0, var_0)), -1227167612)) : 446394661);
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_42 [i_8] [4] [i_10] [4] = (arr_20 [15] [i_10] [9] [i_10 + 1] [10] [i_10]);
                            var_36 = (arr_3 [i_10]);
                            var_37 = (min(var_37, (arr_9 [i_8 - 2] [i_8 - 2] [i_11] [i_8 - 2] [i_9] [0])));
                        }
                    }
                }
                arr_43 [i_8] = -var_18;

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_38 = arr_15 [i_9 - 2] [i_9] [i_9 - 2] [0] [i_9 + 1] [i_9 - 2];
                        var_39 = (max((((arr_24 [i_8 - 2] [i_9 - 2] [i_9 - 1]) ^ (arr_24 [i_8 + 2] [i_9 + 1] [i_9 - 3]))), (max((arr_24 [i_8 - 3] [i_9 - 2] [i_9 - 3]), var_10))));
                    }
                    arr_51 [i_8] [i_8] = min((((1534947218 / (arr_40 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 3] [i_8 + 2])))), (((arr_50 [i_9 - 1] [i_8 - 1] [i_8]) ? (arr_22 [i_8 + 3]) : (arr_49 [6] [i_9] [i_8] [i_9 - 3]))));
                    arr_52 [i_8] [i_8] = ((arr_5 [i_8] [i_8 + 1] [17] [i_9 - 2]) & 0);
                }
                var_40 = (min(var_40, ((((max(((3909075135 >> (var_2 + 1717394613))), 126523270)) != (min(2291422856, var_2)))))));
            }
        }
    }
    #pragma endscop
}
