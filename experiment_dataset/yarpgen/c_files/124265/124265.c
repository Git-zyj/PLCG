/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((var_15 ? -593044679 : var_10))), ((min(var_11, 1815203183812184221)))));
    var_17 = (((min(153, var_2))) ? var_3 : ((min((((4064 ? var_2 : var_10))), ((var_3 ? var_12 : var_6))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((min(593044653, (arr_1 [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((1582725382324425590 ? (arr_1 [i_0]) : (arr_1 [6]))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_3] = (((arr_10 [i_0] [i_0]) > (((((arr_3 [i_0] [i_0]) >= 153))))));
                        var_18 = -153;
                        var_19 += ((min((arr_6 [2] [i_3] [i_0]), (arr_6 [i_0] [i_1] [1]))));
                    }
                }
            }
            var_20 = (var_10 ? (arr_5 [i_1]) : ((106 ? 794644411491768111 : 149)));
            var_21 = (((arr_10 [i_0] [i_0]) ? (((11022754118447236581 + -25726) ? ((~(arr_0 [i_0]))) : ((var_6 ? (arr_1 [i_0]) : (arr_2 [i_0]))))) : (arr_3 [i_0] [i_0])));
            var_22 = ((((var_9 ? 6 : var_15))));
            var_23 += ((-(min((arr_1 [i_1]), (arr_0 [i_1])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_24 += ((~((~(arr_0 [i_4])))));
            arr_17 [i_0] [i_0] = (0 >= var_13);
            var_25 = var_6;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_20 [i_0] [i_5] [i_5] &= ((-7552764642879487556 ? var_7 : (arr_8 [i_5] [i_5] [i_5])));
            var_26 = (arr_19 [i_0] [i_0] [i_0]);
        }
        arr_21 [i_0] [i_0] = (((min(6701068839875911622, (arr_10 [i_0] [i_0]))) == (arr_13 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        var_27 = ((!(109 ^ var_15)));
        arr_25 [i_6] = ((-(arr_23 [i_6 + 1])));
    }
    #pragma endscop
}
