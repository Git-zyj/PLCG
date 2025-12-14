/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = ((((!(((~(arr_1 [i_0])))))) ? ((1123355341 ? 90052780 : (max((arr_0 [i_0]), 90052809)))) : ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_11 *= ((((arr_1 [i_0]) ? 65534 : (65535 * var_5))));
        var_12 = (4204914489 | 5427033957077013347);
        var_13 = (max(var_13, (((-810877313710959596 / (arr_1 [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= 65524;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (max(11340889, 31));
                        var_16 ^= ((min(4204914493, 0)));
                        var_17 = ((min(var_3, 13019710116632538269)));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_18 ^= -var_0;
            arr_13 [i_5] = (--90052766);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_18 [i_7] [i_7] = (((-(arr_10 [i_4]))));
                var_19 = ((-2102097657 ? 8191 : 65519));
            }
            for (int i_8 = 4; i_8 < 14;i_8 += 1)
            {
                var_20 |= ((-2603903887300130603 ? (arr_5 [i_8 - 4]) : (((16 <= (arr_17 [i_4]))))));
                var_21 = 90052803;
                arr_21 [i_6] [i_6] [i_8 - 3] [i_4] = (max(((((arr_16 [i_4] [i_4] [i_4]) ? (arr_19 [i_4] [i_4] [i_8]) : (arr_0 [i_8])))), (((((!(arr_16 [i_4] [i_4] [i_8]))) || (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                var_22 = (min(var_22, ((((~(arr_9 [i_4] [i_6])))))));
            }
            var_23 ^= ((!((max((arr_6 [i_4] [i_6] [i_4]), (arr_5 [i_4]))))));
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    {
                        var_24 = (((arr_29 [i_4] [i_4] [i_9] [i_11]) ? ((((arr_11 [i_4]) << (16777215 - 16777207)))) : var_2));
                        var_25 -= ((var_9 ? (max((arr_2 [10] [i_9] [i_11]), 1)) : (((-(arr_4 [i_4] [i_10] [i_4]))))));
                        var_26 = (min(var_26, (~-1)));
                    }
                }
            }
            var_27 *= (((((1 ? -110 : (((!(arr_20 [i_4]))))))) ? (arr_3 [i_4] [i_4] [i_9]) : (max((~-20395), (arr_15 [i_4] [i_4] [i_9])))));
            var_28 = (min(var_28, (!0)));
            arr_30 [i_9] [i_9] = ((-((-(arr_19 [i_4] [i_9] [i_4])))));
        }
        var_29 = (!var_1);
        arr_31 [i_4] [i_4] = (min((((!(arr_20 [i_4])))), (arr_11 [i_4])));
        var_30 += ((~((1 ? 1 : -810877313710959614))));
    }
    var_31 += var_5;
    #pragma endscop
}
