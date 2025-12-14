/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_12 = (max(var_12, (arr_7 [i_0] [i_1] [i_2] [i_1])));
                var_13 = (min(var_13, 183));
                var_14 -= ((70 ? var_7 : var_0));
            }

            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                var_15 = (min(var_15, (603382718867456839 + var_1)));
                var_16 |= var_4;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_17 -= ((!(arr_6 [6])));
                var_18 = (max(var_18, (arr_8 [i_4] [i_4] [i_1] [i_4])));
                var_19 -= ((((var_11 * (arr_3 [i_0] [i_1]))) ^ (var_1 >= var_4)));
                var_20 -= (17843361354842094776 ? (arr_2 [i_0]) : var_1);
            }
        }

        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            var_21 -= (((arr_15 [i_5 - 3]) <= -1360998251));
            arr_16 [i_5] [i_5] [0] |= (arr_5 [i_0] [i_5] [i_5 - 1] [i_0]);
            var_22 ^= (((var_4 ^ var_9) ? (arr_4 [i_5 - 2] [1] [i_5 - 3] [i_5 - 3]) : -65));
            var_23 += (46762 > 184);
            var_24 -= (((((var_9 ? var_7 : (arr_10 [i_0] [4] [i_0] [10])))) ^ (arr_4 [i_0] [i_5 - 1] [i_5] [i_0])));
        }
        for (int i_6 = 4; i_6 < 8;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            var_25 = (max(var_25, ((((arr_0 [i_7]) ? (arr_0 [i_7]) : (arr_15 [i_0]))))));
                            var_26 = (max(var_26, (((((arr_8 [i_9] [i_8] [0] [i_9]) ? var_0 : var_4))))));
                            var_27 += ((var_0 ? ((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [5]) | var_5))) : (((arr_12 [6] [i_7] [10] [i_9]) ? var_10 : 107))));
                        }
                    }
                }
                var_28 ^= var_2;
                var_29 -= ((((((arr_18 [i_0] [i_7] [i_7]) + (arr_21 [i_0] [i_0] [i_7] [8])))) || var_7));
            }
            for (int i_10 = 3; i_10 < 9;i_10 += 1)
            {
                var_30 -= (((arr_17 [0]) | var_6));
                var_31 ^= ((4553165784887235991 ? 89 : (arr_20 [2] [i_10] [i_10])));
                var_32 = ((var_8 ? (arr_17 [10]) : var_2));
            }
            var_33 = (min(var_33, var_2));
            var_34 -= (arr_18 [10] [2] [10]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_35 = (max(var_35, ((((arr_1 [i_11]) < var_9)))));
                        var_36 = ((arr_19 [i_11] [i_11]) ? var_10 : (arr_30 [i_6 - 4] [i_6] [6]));
                    }
                }
            }
        }
    }
    var_37 |= (((((var_10 | (((var_5 ? var_5 : 0)))))) ? var_5 : ((var_2 >> ((var_3 >> (var_5 - 21492)))))));
    var_38 |= 12;
    #pragma endscop
}
