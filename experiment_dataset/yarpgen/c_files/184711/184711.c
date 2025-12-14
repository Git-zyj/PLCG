/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -9223372036854775779;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 = (max((arr_0 [i_0]), (((!(arr_0 [1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [24] [i_3] = ((max((arr_2 [i_0 - 1] [i_0 - 1] [i_2]), (120 * -7968))));
                        var_12 = -7973;
                    }
                }
            }
        }
        var_13 = (max(var_13, (((arr_6 [i_0] [i_0] [i_0 - 1]) ? (((!(((arr_4 [i_0] [i_0] [i_0]) >= var_4))))) : (((!(arr_1 [i_0 - 1]))))))));
        var_14 = (((max(17883759785038497325, 1)) - ((min((~3), var_4)))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_15 = 562984288671054291;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        {
                            arr_25 [i_4] [i_5] [10] [i_4] [i_8] [i_4] [i_5] = (max((arr_18 [i_5] [i_5]), (max(9223372036854775776, (14335247903992014885 + 6)))));
                            var_16 = ((((((arr_20 [i_4]) & (max(80390060, (arr_18 [i_4] [i_7])))))) ? ((((var_8 >= var_3) ? var_3 : ((-(arr_18 [i_7] [i_7])))))) : var_1));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    {
                        var_17 = (((max((arr_9 [i_10] [i_11 - 1]), (arr_9 [i_4] [i_11 - 2]))) << (var_5 + 815154224)));
                        var_18 = (arr_19 [i_4] [i_9] [i_4] [i_11]);
                        arr_35 [i_4] [i_10] = (~((max(39, -6861))));
                    }
                }
            }
        }
        arr_36 [i_4] |= 40750;
    }
    var_19 *= ((!((max(var_1, (!var_7))))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            {
                var_20 = ((((((~(arr_0 [i_13]))) + 2147483647)) << (((max((arr_5 [i_12] [i_13] [22]), (arr_5 [i_12] [i_13] [i_13]))) - 12921973734092702082))));
                arr_42 [i_13] = (min(((max(46, -77))), ((~(arr_9 [i_12] [i_12])))));
                var_21 = (arr_0 [i_12]);
                arr_43 [i_12] [i_13] = max((max(((max((arr_39 [i_12]), (arr_4 [i_12] [i_12] [i_12])))), (max(2566742615056498764, (arr_37 [i_12] [i_13]))))), (arr_0 [i_13]));
            }
        }
    }
    #pragma endscop
}
