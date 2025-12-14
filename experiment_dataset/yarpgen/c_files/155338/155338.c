/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_12 ? var_8 : 50)))) ? var_14 : (((var_2 * (var_0 >= -1))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 50;
        arr_3 [i_0] [i_0] = (min((-var_7 ^ var_12), -3175248358124209547));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [10] [i_1 - 1] = 16256401381400510967;
        arr_7 [i_1] = ((0 ? (arr_4 [i_1]) : var_8));
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = ((-13619 ? ((((arr_11 [i_2] [i_2]) == (arr_4 [2])))) : var_16));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_2] [i_3] [13] = ((1585415011 ? -1 : 8796995115232892342));
            arr_16 [1] [13] = (((arr_10 [10] [10]) ? -2147483647 : ((-5 ? 2147483647 : (arr_8 [i_2] [1])))));
            arr_17 [i_2] = ((((((arr_13 [i_2] [i_3]) - (arr_11 [i_2] [i_2])))) ? ((var_10 ? 13619 : (arr_8 [6] [6]))) : (arr_13 [i_3] [i_2])));
            arr_18 [i_2] [3] = var_6;
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            arr_22 [i_2] = ((((arr_19 [i_2] [i_4]) >= (arr_13 [i_2] [i_2]))));
            arr_23 [i_2] [i_4 + 1] = (((133169152 ^ var_9) & (var_16 | var_10)));
        }
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            arr_27 [i_5] = (min((arr_13 [i_5 - 1] [i_2]), var_8));

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_30 [2] [i_6] [i_6] = (((!(arr_11 [11] [i_5 - 1]))) ? (arr_28 [i_5 + 1] [i_5 - 1]) : 206);
                arr_31 [i_2] [i_2] [i_5] [i_5] = (-((var_8 ? var_3 : (arr_24 [i_2] [i_5 - 1] [i_6]))));
                arr_32 [i_5] [i_5] = (min((((-(arr_19 [i_2] [i_5 - 1])))), (arr_11 [i_5 + 1] [i_5])));
                arr_33 [i_6] [i_6] [i_6] = (((((71 ? 7 : 22654))) && (((arr_8 [i_2] [i_5]) || (arr_9 [12])))));
                arr_34 [i_2] [i_5] [i_2] = (((((max(-66, 53)))) + ((((max((arr_8 [i_5] [i_6]), (arr_9 [i_2])))) ? -1999327500 : ((var_5 ? (arr_9 [i_2]) : (arr_13 [i_2] [i_5])))))));
            }
            arr_35 [i_2] [i_5] = (((max((arr_25 [i_5] [i_5 - 1] [i_2]), (arr_28 [i_5 + 1] [i_2])))));

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_38 [i_5] [i_5] [i_5] = -2100226311932203888;
                arr_39 [i_5] [i_5] [7] [i_7] = var_13;
            }
            arr_40 [4] = var_15;
        }
        arr_41 [2] [i_2] = (max(((0 ? 27 : 3231179861085283075)), ((min(var_4, (arr_25 [i_2] [4] [i_2]))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_44 [i_8] = ((-32767 - 1) != ((53919 ? 23739 : var_7)));
            arr_45 [4] = ((arr_43 [i_2] [i_8] [i_8]) >> ((((-1088750408 ? 128 : (arr_28 [i_2] [i_8]))) - 115)));
            arr_46 [i_2] [i_8] = (((arr_9 [i_2]) ? (52198 && 1) : ((255 ? 1 : 2680609172610754484))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_49 [i_9] [i_2] [i_2] = (((arr_36 [i_2] [i_9] [i_2]) ? (((((2472692076696164792 ? (-9223372036854775807 - 1) : 9053464848650839420))) ? (arr_37 [i_2] [i_2] [11]) : var_9)) : ((max(114, var_8)))));
            arr_50 [i_2] = 31;
        }
        arr_51 [i_2] [i_2] |= ((107 ? 143 : ((((arr_21 [i_2]) || 36680)))));
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        arr_54 [i_10] [14] = 11;
        arr_55 [i_10 - 1] = -var_12;
    }
    #pragma endscop
}
