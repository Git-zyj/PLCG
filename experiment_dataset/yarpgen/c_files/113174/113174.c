/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [2] = ((((((min(var_8, var_10))) ? (arr_0 [i_0]) : var_6)) < ((max((((var_14 ? var_6 : (arr_1 [i_0])))), 7773069458439643837)))));
        var_15 &= (max((arr_2 [i_0] [i_0]), ((max((arr_1 [i_0]), (arr_2 [7] [i_0]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_0] = (max(var_14, (arr_1 [i_1])));
            arr_9 [i_1] [i_1] = var_9;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_2] = (arr_10 [i_0] [i_0] [i_0]);
            var_16 = (((((arr_1 [i_2]) != (max(881080899, (arr_10 [i_2] [i_2] [i_0]))))) ? (((((-(arr_4 [i_0] [7]))) != (((arr_11 [i_2]) % var_9))))) : -var_13));
        }
        arr_13 [i_0] [i_0] = ((-((var_10 ? 67 : (((((arr_7 [i_0]) + 9223372036854775807)) >> (arr_6 [i_0] [i_0])))))));
    }
    for (int i_3 = 4; i_3 < 6;i_3 += 1)
    {
        var_17 = ((((((arr_1 [i_3 - 1]) ? (arr_1 [i_3 - 1]) : (arr_1 [i_3 - 1])))) ? (arr_1 [i_3 - 1]) : ((max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1]))))));
        arr_17 [i_3] [i_3] &= 26;
        arr_18 [i_3] [i_3] = (arr_5 [i_3]);
        arr_19 [4] = (max(((3413886401 ? (((arr_7 [i_3 - 3]) ? 7025 : var_5)) : (-127 - 1))), 1));
        var_18 &= ((((((((arr_5 [i_3]) ? var_6 : (arr_16 [i_3])))) ? (((arr_10 [i_3] [i_3] [i_3]) ? var_2 : var_11)) : ((var_2 >> (var_5 - 966271248))))) & 1073741823));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        arr_22 [i_4] [i_4] = var_9;
        arr_23 [11] = (arr_20 [i_4]);
        arr_24 [i_4 - 1] = ((29696 >= (-32767 - 1)));
        arr_25 [i_4] = ((var_11 ? var_3 : (((var_11 ? 1 : var_12)))));
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = ((max((-29696 % 105), (arr_27 [i_5]))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_31 [i_6] &= ((63 ? ((((!(-67 < -28810))))) : ((172 ? 20 : 297854208570657003))));
            arr_32 [i_5] [i_5] = ((arr_27 [i_5]) * (((((arr_29 [i_5] [i_5] [i_5]) >> (((arr_27 [i_5]) - 174)))) * ((max(var_10, (arr_29 [i_5] [i_5] [i_5])))))));
        }
        arr_33 [8] [i_5] &= (max((((var_5 >= (arr_28 [i_5])))), (((arr_20 [i_5]) ? (arr_26 [12] [i_5]) : (var_12 != var_11)))));
    }
    var_20 = var_2;
    #pragma endscop
}
