/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 = ((((((var_1 & 8299177111271404123) ? (35937 ^ -5276488208715681443) : (arr_1 [4])))) ? ((((((arr_3 [i_0] [i_2]) < var_7))))) : (max(((min((arr_2 [i_1]), (arr_6 [5] [i_0 + 2] [i_1] [i_2 - 2])))), (var_9 | -1088410380)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((!(((0 ? var_4 : (((!(arr_11 [i_2]))))))))))));
                                var_13 ^= ((((((arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4]) ? 2147483647 : 2412463669)))) ? (((((-1088410380 <= (arr_5 [i_0] [i_1] [i_2 + 2] [i_4])))))) : (((-(arr_4 [i_1] [i_1])))));
                                var_14 = (((((603167057 ? (arr_11 [i_1]) : ((min((arr_5 [i_0] [i_1] [i_2] [i_3]), 9)))))) ? (arr_1 [i_0]) : (max(((max(var_1, (arr_2 [i_1])))), (((arr_5 [i_1] [i_1] [i_3] [i_4]) & var_0))))));
                                var_15 = ((((min((((arr_3 [i_2] [i_3]) ? 11 : var_10)), (((arr_5 [i_3] [i_1] [i_1] [i_3]) >> (((arr_5 [i_0] [i_4] [i_4] [i_3]) - 53723))))))) ? (max((arr_1 [i_1]), var_9)) : (((19 ? (arr_11 [i_1]) : var_5)))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] = (((min((arr_0 [1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 2]))) <= ((((!var_6) % ((((arr_9 [i_0] [i_1] [i_1]) || (arr_5 [i_4] [i_1] [i_2] [i_3])))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_16 = (min((((arr_13 [i_5]) ? (((arr_14 [i_5]) / (arr_4 [i_5] [i_5]))) : 1079085268)), (min(((1 ? 2147483647 : (arr_14 [i_5]))), (arr_9 [i_5] [i_5] [i_5])))));
        arr_15 [i_5] = (max(((max((arr_1 [i_5]), (arr_8 [i_5] [i_5] [i_5])))), ((255 & (((~(arr_0 [i_5] [i_5]))))))));
        arr_16 [i_5] = (arr_14 [i_5]);
        var_17 -= (arr_2 [i_5]);
        var_18 = ((-16359 > ((min((arr_8 [i_5] [i_5] [i_5]), (min(19, -21292)))))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_19 ^= -var_9;
        var_20 = (min(var_20, ((((max(((var_6 ? var_0 : (arr_4 [i_6] [i_6]))), (81 >= 87)))) ? (~var_10) : 7972))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] [i_7] = (((((arr_3 [i_7] [0]) ? -84914562725444677 : var_10)) == (arr_14 [i_7])));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_21 = ((3215882028 ? 90 : (((arr_27 [i_9] [i_10]) ? var_8 : (arr_30 [i_7] [i_8] [5] [i_9] [i_10] [i_11])))));
                            var_22 = (arr_0 [i_7] [i_11]);
                        }
                        arr_33 [i_7] [i_7] [i_7] [i_7] &= ((var_3 ? ((((arr_27 [i_8] [i_10 - 3]) < 23070))) : 16383));
                        var_23 = (min(var_23, (~var_3)));
                        var_24 = (max(var_24, ((((~4294967295) ? (arr_29 [i_8] [i_9] [i_10]) : (arr_0 [i_7] [i_10 - 1]))))));
                    }
                }
            }
            arr_34 [i_7] |= (((~var_9) ? (arr_6 [i_7] [i_8] [i_7] [i_7]) : (arr_17 [i_8])));
        }
    }
    var_25 = (((((--16386) + 2147483647)) >> (-var_9 - 14158343688408659813)));
    var_26 = var_2;
    #pragma endscop
}
