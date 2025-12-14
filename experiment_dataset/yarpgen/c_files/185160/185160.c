/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_1] [i_1])))) ? var_13 : (arr_2 [i_1] [i_1] [i_0])));
            var_20 = ((-(max((arr_0 [i_0]), (arr_3 [i_0] [i_1] [i_1])))));
            var_21 = ((!((((!(arr_2 [i_0] [i_1] [i_0])))))));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_22 = (((((64 ^ (arr_3 [i_0] [i_2] [i_0])))) - ((((max(var_13, (arr_4 [i_2 - 1] [4] [i_0])))) - -var_1))));
            arr_9 [17] [17] = (((((-(var_3 > var_6)))) ? ((((((arr_6 [i_0] [9]) - (arr_3 [14] [i_0] [1]))) > var_7))) : (arr_6 [i_0] [7])));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_23 = ((((var_12 - var_4) ? var_7 : ((-(arr_10 [i_0] [i_3] [10]))))));
                arr_14 [i_4] = (((max((var_16 / var_2), var_15)) != ((((-753503747279607796 + var_9) ? var_8 : (arr_2 [i_0] [i_3] [i_0]))))));
                var_24 = ((var_14 && (((arr_7 [i_0] [i_0]) && (arr_8 [i_0] [i_4])))));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_18 [i_0] [18] [i_5] = (((var_14 > var_11) ? (((arr_4 [3] [i_3] [i_5]) ^ var_14)) : ((753503747279607796 ? var_16 : var_15))));
                var_25 = (arr_2 [i_0] [19] [i_5]);

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_22 [i_6] [15] [i_3] [i_0] = (((((+(((arr_6 [i_0] [i_0]) / 163))))) ? (((((var_4 ? -127 : (arr_21 [i_6] [i_6] [i_5] [12] [i_0] [i_0])))) ? (min(var_5, var_9)) : 64)) : (((((636408786 == (arr_3 [i_0] [i_3] [i_5]))))))));
                    var_26 = ((var_3 % (((((99 | 1) > -78))))));
                    var_27 ^= (((138 ? ((1548929858 + (arr_12 [i_0] [i_3] [i_0] [i_0])) : var_6))));
                    var_28 = ((!(arr_20 [i_5] [i_5] [i_5] [i_5])));
                    var_29 |= ((((((2016 >= 743013491) / (min(var_13, (arr_7 [i_3] [i_5])))))) ? (min(((var_8 >> (arr_17 [i_0] [i_0]))), var_16)) : ((((((((arr_8 [i_3] [2]) ? (arr_19 [i_6]) : -78))) && ((max(var_5, -47)))))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_26 [i_7] [i_5] [i_3] [11] [i_0] = (arr_21 [i_7] [i_7] [i_5] [i_3] [i_0] [19]);
                    arr_27 [i_0] [9] [i_5] [7] = (var_0 ? 2712991171633000287 : ((((-86 != (arr_11 [i_7] [18]))))));
                    var_30 = (((-(-1 * var_1))));
                }
                var_31 = (max(var_31, (12438499977594794246 > var_2)));
            }
            arr_28 [2] [i_3] [i_0] = (max(var_14, ((((max((arr_20 [i_0] [i_3] [i_3] [i_0]), var_3)) == (((min(var_10, -64)))))))));
        }
        var_32 = ((!((((((var_4 | (arr_24 [12] [12] [i_0] [i_0] [i_0] [1])))) ? (arr_6 [i_0] [i_0]) : 4104360445605300604)))));
        var_33 ^= (~(max(((var_14 - (arr_13 [i_0] [5] [i_0] [i_0]))), (arr_13 [i_0] [i_0] [i_0] [i_0]))));
        var_34 += (arr_17 [i_0] [i_0]);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_35 ^= (!var_17);
        arr_31 [i_8] = (min((((((arr_30 [i_8] [3]) ? (arr_30 [i_8] [i_8]) : var_6)) * var_7)), (((~var_7) ? var_12 : ((var_4 ^ (-32767 - 1)))))));
    }
    var_36 = var_7;
    #pragma endscop
}
