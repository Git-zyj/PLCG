/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (((8527640658480193389 ? -9223372036854775789 : 102)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 &= ((min((arr_0 [i_0 - 1]), (arr_7 [i_0] [i_1] [i_0 - 1] [0]))));
                        arr_11 [i_0] [i_0] [5] [5] [i_3] [i_0] = ((((max((arr_5 [i_1] [i_2] [i_0 - 1]), (arr_10 [i_0] [i_1] [i_0])))) ? (((90 ? 3264303054 : 124))) : (12144134135783484879 * -10)));
                    }
                    var_15 = ((-(~-31959)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_16 = (~-12144134135783484879);
                        arr_14 [i_0] [i_0] [i_2] [i_4] [1] [i_4] = ((((!(arr_2 [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [9] [10] [i_2] [i_0] [i_1] = (1 / 6144);
                        arr_18 [i_0] [i_1] [1] [5] = (((((2 ? 390417947 : -1229777500465320326))) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 - 1])));
                        arr_19 [4] &= (max((min((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [8] [6]), var_0)), (1 & 1)));
                        arr_20 [i_1] [i_0] [i_2] [7] [i_2] = 11360285038557715958;
                        var_17 = (max(var_17, ((((((1230542741 ? (((arr_8 [i_0 - 1]) ? (arr_0 [i_2]) : var_5)) : ((((arr_3 [i_0 - 1] [i_1] [i_2]) / (arr_15 [i_0 - 1] [1] [i_0 - 1]))))))) ? (min(4207675829, 14713)) : ((((min(1, (-32767 - 1)))))))))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 7;i_7 += 1) /* same iter space */
                        {
                            arr_27 [4] [i_0] [4] [4] [4] = (((arr_26 [i_0 - 1] [i_1] [i_2] [i_0] [10]) + 733119086229939140));
                            arr_28 [i_1] [10] [i_0] [i_7] = (arr_22 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_7 + 3]);
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 7;i_8 += 1) /* same iter space */
                        {
                            var_18 = ((arr_32 [i_0]) == (arr_31 [i_0 - 1]));
                            var_19 = (min(var_19, (arr_3 [3] [i_2] [i_6])));
                        }
                        for (int i_9 = 1; i_9 < 7;i_9 += 1) /* same iter space */
                        {
                            var_20 += (arr_3 [i_0] [i_1] [i_2]);
                            var_21 = var_4;
                            arr_36 [i_0] [i_1] [i_2] [4] [i_9 + 3] = ((-2037215134354466057 + 9223372036854775807) >> 0);
                            var_22 = ((-(min(-124, ((14716 ? 32761 : -23241))))));
                        }
                        arr_37 [i_0] [i_0] [10] = (arr_3 [i_0 - 1] [i_1] [i_0 - 1]);
                        var_23 = ((((max(-2, -104))) - 32742));
                        var_24 = (((arr_15 [i_0] [i_0] [10]) * ((((min((arr_2 [i_0]), var_2))) ? -32746 : -var_12))));
                    }
                }
            }
        }
    }
    var_25 = var_10;
    var_26 ^= ((var_6 / (min(var_11, (1 | var_5)))));
    var_27 = (min(var_27, ((min((~32767), var_2)))));
    #pragma endscop
}
