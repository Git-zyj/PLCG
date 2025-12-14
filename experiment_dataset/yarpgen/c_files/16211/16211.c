/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [1] = (((arr_1 [i_0 + 4]) ? (arr_1 [i_0]) : var_2));
        var_10 = (78 ? -74 : var_8);
        arr_4 [i_0] = 31;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = var_8;
        var_11 ^= var_4;

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_12 = (min((arr_12 [i_1 - 1]), ((~(arr_6 [i_1] [i_2 + 1])))));
            arr_13 [i_1] [i_1] [i_2 + 2] = (i_1 % 2 == 0) ? ((((15903827569149628627 >> (((arr_6 [i_1] [i_2 - 1]) - 12998252604278521920)))) << (((min((arr_11 [i_1] [i_2 + 2] [i_1 - 3]), var_3)) - 53)))) : ((((15903827569149628627 >> (((((arr_6 [i_1] [i_2 - 1]) - 12998252604278521920)) - 14701195337016832686)))) << (((min((arr_11 [i_1] [i_2 + 2] [i_1 - 3]), var_3)) - 53))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_18 [i_1] = ((-((((max((arr_16 [i_1 + 3] [12] [i_1]), (arr_7 [i_1 + 3] [i_1 + 3]))) < 73)))));
            arr_19 [i_1] = (arr_12 [i_1 + 2]);
            arr_20 [i_1] [i_1] = ((-(((arr_5 [i_1 - 2]) ? (arr_5 [i_1 - 2]) : var_1))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_23 [i_1] [i_1] = (((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> (var_2 == -59)));
            arr_24 [i_1] [3] = (-(min(var_0, (max(var_6, (arr_15 [i_1]))))));
            arr_25 [i_1] [i_1] = ((((((!(arr_14 [i_1 + 3] [12]))) ? var_0 : ((74 ? var_3 : var_1))))) ? ((max((arr_5 [i_1 + 1]), 15473304614906098902))) : ((var_8 ? -79 : (min(var_5, (arr_10 [i_1]))))));
            arr_26 [i_4] |= ((((((max(2888314878065425514, (arr_6 [i_4] [0])))) ? ((-20 ? 17673940921916407193 : var_1)) : (arr_16 [i_4] [i_4] [i_4])))) ? (arr_6 [i_4] [i_4]) : (arr_9 [i_4]));
        }
        arr_27 [i_1] [i_1] = ((((~((var_3 << (var_5 - 11715279494384528920)))))) ? ((var_4 ? (arr_16 [i_1] [i_1] [i_1]) : (arr_17 [12] [i_1] [i_1 - 3]))) : (arr_12 [i_1]));
    }
    var_13 = (max(var_13, ((min(((var_6 / ((var_5 ? var_5 : var_4)))), -3)))));
    var_14 = max((min((var_1 < var_9), var_7)), ((var_2 ? var_5 : ((var_6 ? var_4 : -23)))));
    #pragma endscop
}
