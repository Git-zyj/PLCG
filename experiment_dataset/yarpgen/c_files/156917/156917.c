/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, (((-((~((((arr_1 [i_0]) == (arr_1 [i_0])))))))))));
        var_12 = (((((+((0 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))) ? (max((((arr_2 [i_0]) ? 7916818280846998630 : var_7)), (~var_8))) : var_1));
        arr_3 [i_0] = ((~((((arr_0 [i_0] [i_0]) <= (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_13 *= var_9;
                            var_14 = (max(var_14, (((min((!var_5), var_3))))));
                            var_15 = var_10;
                            arr_19 [3] [i_4] [i_3] [5] [i_5] = ((!(arr_11 [i_2] [3] [i_2])));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_4] = min((255 == var_0), ((((4272097691 ? var_10 : (arr_20 [4] [1] [i_3 + 1] [0] [3] [i_6 - 2]))) >= (-7916818280846998630 != var_5))));
                            var_16 = (-((var_5 ? (arr_15 [i_4 - 1] [i_4 - 1] [7] [i_3] [i_3] [5]) : 255)));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_17 |= 12;
                            arr_25 [9] [i_4] [i_3 - 4] [1] [i_3 - 3] [1] = -7916818280846998616;
                            arr_26 [i_4] [i_2] [i_3 - 3] [i_4] = var_2;
                            var_18 = (arr_24 [i_3 - 4] [i_3 + 1]);
                            var_19 &= ((((arr_10 [i_4 - 1] [i_4] [i_7]) / (arr_21 [i_3] [i_3] [i_4 - 1] [i_4 - 1]))));
                        }
                        var_20 ^= ((((249 << (var_10 + 2288))) << ((((~(arr_8 [i_4 - 1] [i_4 - 1] [i_3 + 1]))) - 20811))));

                        for (int i_8 = 3; i_8 < 9;i_8 += 1)
                        {
                            var_21 = 22869604;
                            arr_30 [i_4] [i_4] [i_3] [i_3 + 2] [i_8] = (max(var_6, 1));
                            var_22 ^= (arr_14 [i_4 - 1] [i_4] [i_3] [i_3 - 3]);
                            var_23 = ((var_7 ? ((var_5 ? (((arr_21 [i_4] [i_2] [i_3] [8]) ? var_5 : 255)) : -var_4)) : var_8));
                        }
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            var_24 = var_9;
                            var_25 -= ((min(((0 ? (arr_18 [0] [5] [7] [i_1]) : 31)), ((((arr_4 [8]) ? (arr_21 [i_3] [i_2] [i_4] [i_9]) : var_0))))));
                            var_26 |= (max((((arr_23 [i_1] [i_2] [i_3] [i_3] [2] [1] [i_9]) ? (-5378857280987783534 < 19580) : (arr_18 [i_9] [1] [i_1] [i_1]))), 7916818280846998630));
                        }
                    }
                }
            }
        }
        var_27 -= ((~(((((var_6 ? (arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [1]) : var_5))) ? 18 : (arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [1])))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        arr_37 [i_10] = ((var_3 ? ((((arr_0 [i_10] [i_10]) != (arr_0 [i_10] [i_10])))) : (~-19577)));
        arr_38 [i_10] = (((19576 ? 1675880826 : -4095)) / (((((arr_2 [i_10]) << (var_0 - 19539))))));
        var_28 = (max((var_3 <= var_1), (arr_0 [i_10] [i_10])));
        arr_39 [i_10] = (((((~(arr_0 [i_10] [i_10])))) ? 19558 : (((arr_36 [i_10]) ? ((((arr_1 [1]) && var_3))) : ((max((arr_35 [i_10] [i_10]), 244)))))));
    }
    var_29 = var_9;
    var_30 = ((var_2 || (((var_7 | (var_0 ^ 21))))));
    #pragma endscop
}
