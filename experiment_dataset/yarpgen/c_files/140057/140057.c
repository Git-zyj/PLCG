/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (var_9 * -106);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 += 12;
                arr_7 [i_0 - 1] [i_0 + 4] = (((-117 - 12) ^ var_16));
            }
        }
    }
    var_21 += (max(var_3, (((((-18702 ? var_1 : 9223372036854775798))) ? 139 : ((min(122, var_2)))))));

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_22 += ((!((min((arr_13 [i_2 + 1]), var_14)))));

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_16, (((-(-123 + 1))))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = ((!(~var_13)));
                    var_25 -= 18701;
                }

                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_26 [i_2 + 1] [i_7] [i_7] = ((!(((var_8 ? (arr_25 [i_2] [i_3] [i_4] [i_6 - 2] [i_7 + 3]) : 28645)))));
                        var_26 ^= ((((2097152 ? (arr_15 [i_6 + 4] [i_3] [i_3] [i_6 + 1]) : (arr_15 [i_2 + 1] [i_2] [14] [10]))) >> ((((var_6 >= var_9) >= ((28646 ? 6 : 15009)))))));
                        var_27 = ((((var_11 ? (arr_18 [i_3] [i_2 - 1] [i_4] [i_6 + 1] [i_4]) : -8951598096462317178)) / 2944192765));
                        var_28 = (((((min((arr_20 [i_2 + 1] [i_2 + 1] [i_2 - 1]), (arr_20 [i_6 + 2] [i_3] [i_2 + 1]))))) >= ((var_13 ? ((-29847 ? 2944192765 : (arr_12 [i_3]))) : var_9))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_29 = ((var_14 ? var_1 : (((arr_18 [i_2] [i_3] [i_4] [i_4] [i_8]) ? var_2 : (arr_17 [i_2 + 1] [i_6 + 4])))));
                        var_30 = (max(var_30, 13604493859379329395));
                    }
                    var_31 = (min(var_31, (((-(min((!18701), (((arr_10 [i_2] [i_2] [i_2]) ? var_0 : (arr_11 [i_2] [i_3] [i_6]))))))))));
                    var_32 = ((var_10 > ((690547299088455608 ? (-127 - 1) : 2372639770))));
                }
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {
                var_33 = (max(var_33, ((((arr_11 [i_2] [i_3] [i_2 + 1]) ? (!15009) : ((var_5 ? (0 + 156) : ((9 ? var_11 : 157)))))))));
                var_34 = (max(var_34, ((((max(var_14, (arr_30 [i_3] [i_2] [i_2 - 1] [i_2 + 1])))) ? (((((min(18690, (arr_12 [i_2])))) ? ((var_3 ? var_11 : var_10)) : (var_2 == var_4)))) : ((80 ? (((105 ? 18701 : var_8))) : ((var_13 ? 5989484972706773344 : 15417))))))));
                var_35 = (min((((arr_28 [i_9] [i_9] [i_3] [i_3] [i_3] [i_2] [i_2]) ? (~14054754777372531929) : (((10 ? -1 : var_14))))), -var_7));
                var_36 *= ((-((~(max((arr_24 [i_2] [i_3] [i_3] [i_3] [8] [i_3] [i_9]), var_11))))));
                var_37 = ((((~((18701 ? 1925864957 : var_0)))) > (((15009 - (arr_21 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 1]))))));
            }
        }

        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_38 = (max(var_38, var_12));
            arr_33 [i_10] = ((-75 >= (((arr_21 [i_10] [i_2] [i_2] [i_2 - 1]) ? 60794 : ((var_4 ? 64 : 160))))));
            var_39 = (arr_28 [i_2 - 1] [i_2] [i_10] [i_10] [i_10] [i_10] [i_10]);
        }
    }
    var_40 = (((var_17 + 2147483647) >> ((((((var_13 ? var_18 : 28635)) ^ ((min(28644, var_14))))) - 33))));
    #pragma endscop
}
