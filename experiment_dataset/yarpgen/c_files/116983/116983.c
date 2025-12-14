/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [10] &= min(((max((arr_2 [i_0]), (arr_2 [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((~(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 ^= (((!1) < 13));
        var_14 = (max(((var_12 - (arr_1 [15]))), (((((min(1, 1))) >= ((min(-11285, 1))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_15 = ((~(arr_8 [i_2])));
        arr_10 [i_2] = ((arr_8 [i_2]) ? (arr_8 [i_2]) : 1);
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_16 = (max(var_16, (((~((68715282432 ? 1 : 1)))))));
        arr_13 [i_3] [i_3] = ((~((((arr_12 [i_3 + 1] [14]) != (arr_12 [i_3 - 3] [i_3 - 3]))))));
        var_17 &= (arr_12 [i_3] [i_3]);
        var_18 = 1;
    }
    var_19 = (min(var_19, var_2));

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = (max(var_20, (min((((arr_9 [i_4]) ? (arr_17 [i_4]) : (arr_1 [i_4]))), (arr_14 [i_4])))));
        arr_18 [i_4] = (max(1, (arr_17 [i_4])));
        var_21 = (min(var_21, (((!((min(62, 1))))))));
        var_22 = (max(var_3, (((~(arr_17 [i_4]))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [i_5] |= ((((min((arr_26 [i_8 - 1] [i_7] [i_6] [i_5]), 1))) / ((((max((arr_24 [i_5] [i_6] [i_6] [i_5]), (arr_20 [i_7])))) ? (((var_1 >> (((arr_24 [i_5] [i_5] [16] [i_8]) - 1444358552342442953))))) : (~17169051115669810402)))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_23 += (arr_31 [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_8 - 2] [i_8 + 1]);
                            arr_33 [i_5] [i_5] [24] [i_7] [i_8 + 3] [8] = 1;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_24 = (max(var_24, (arr_31 [i_5] [i_6] [i_7] [i_8] [i_10])));
                            var_25 = (max(var_25, ((max((min((arr_34 [i_8 + 1] [i_8] [i_8] [i_8 - 2] [i_8 + 2] [i_8 + 2]), (arr_34 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1]))), (((arr_34 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1]) >> var_0)))))));
                        }
                    }
                }
            }
        }
        arr_37 [i_5] = (max((((((((-32767 - 1) ? var_1 : var_7))) && (arr_36 [i_5])))), (arr_31 [18] [24] [i_5] [i_5] [i_5])));
    }
    var_26 = ((-((~((max(25, var_12)))))));
    var_27 = var_7;
    #pragma endscop
}
