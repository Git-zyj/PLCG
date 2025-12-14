/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((15916 + (var_7 == var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_15 = -var_13;
            var_16 = (arr_5 [i_1 - 2]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_17 = ((((var_12 ? var_2 : (arr_8 [i_2] [11]))) + var_10));
            var_18 = (((arr_7 [i_2] [i_0]) == 425129232));
            var_19 = ((+((var_3 ? (arr_7 [i_0] [i_2]) : 1))));
            var_20 = ((113 ? (arr_6 [i_0] [i_0] [i_2]) : 99));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_21 = (((!1) + (arr_11 [i_0] [i_0])));
            var_22 = ((1 + (arr_2 [i_3 - 1])));
            arr_12 [i_3] = (var_5 <= var_0);
            var_23 = (((arr_8 [i_3] [i_0]) ? ((((arr_2 [i_3]) >= 30))) : (arr_4 [i_3] [i_3 - 1])));
        }
        var_24 = ((-(arr_10 [i_0] [i_0] [i_0])));
        arr_13 [i_0] [i_0] = ((2143289344 == (arr_9 [i_0])));
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_25 = (max(var_25, (arr_0 [i_4] [i_4])));
        var_26 &= (max(var_9, 0));
        arr_17 [i_4] &= ((3467751925 << (2143289344 - 2143289332)));
    }
    var_27 = var_1;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_8] = (var_5 >= -0);
                                arr_32 [1] [i_8] [i_7] [i_8] [i_5] = (min((((-31 ? var_10 : (arr_27 [i_5] [i_6] [4] [i_8] [4] [4])))), (min((((arr_25 [i_5] [i_5] [i_5] [i_5]) & 4096)), ((var_5 ? (arr_19 [i_8]) : var_2))))));
                            }
                        }
                    }
                    var_28 -= (((min(2127250057, (arr_28 [i_6]))) >= 0));
                    arr_33 [i_7] [i_6] [i_6] [i_5] = (((var_7 > var_0) ? ((-((49619 ? var_8 : (arr_23 [i_5] [i_5] [i_5]))))) : 4294967291));
                    var_29 = (arr_26 [i_5] [i_6] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
