/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_9;
        var_19 = (min(25070, (((arr_0 [i_0 + 1]) | 40466))));
        var_20 &= (arr_2 [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 ^= (min(25091, ((135 ? 32367 : 25083))));

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_22 = ((((((arr_7 [i_2 + 1] [i_1] [i_1]) ? (((arr_6 [i_1]) - (arr_8 [i_1] [i_1]))) : ((max((arr_6 [i_1]), 18750)))))) ? (((var_17 > (arr_8 [i_1] [i_1])))) : ((max((((arr_8 [i_1] [i_1]) ^ (arr_5 [i_1]))), (var_11 != 9426739531463484841))))));
            var_23 = (((arr_7 [i_2 - 1] [i_2] [i_1]) != ((min((arr_8 [i_2 + 1] [i_1]), (var_17 + var_9))))));
            arr_9 [i_2] [i_2] [i_1] = max(((min(10, (arr_6 [i_1])))), ((((min(var_18, 25091))) << ((((min(104, var_12))) - 97)))));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_13 [i_1] [i_1] = (((min(0, ((max((arr_10 [i_1] [i_2 + 1] [i_1] [i_3]), (arr_8 [i_1] [i_1])))))) < ((min((!var_10), 55618)))));
                arr_14 [i_3] [i_2 - 1] [i_1] [i_3] = ((~((-(min((arr_12 [i_1] [i_1] [i_1] [i_1]), var_2))))));
                var_24 = (i_1 % 2 == zero) ? (((((((arr_6 [i_1]) >> (((arr_6 [i_1]) - 12857))))) ? ((((((arr_12 [i_1] [i_1] [i_1] [i_1]) >= (arr_8 [i_1] [i_1])))))) : (arr_11 [i_1])))) : (((((((arr_6 [i_1]) >> (((((arr_6 [i_1]) - 12857)) - 33516))))) ? ((((((arr_12 [i_1] [i_1] [i_1] [i_1]) >= (arr_8 [i_1] [i_1])))))) : (arr_11 [i_1]))));
                var_25 ^= max((min((arr_7 [i_3] [i_2 - 3] [i_3]), (arr_7 [i_3] [i_2 - 1] [i_3]))), (((arr_7 [i_3] [i_2 + 1] [i_3]) ? (arr_7 [i_3] [i_2 - 3] [i_3]) : (arr_7 [i_3] [i_2 - 2] [i_3]))));
            }
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            var_26 *= (min(-6663251303591946098, 9223372036854775807));
            arr_17 [i_1] [i_1] = (((((min((arr_11 [i_1]), var_13)) ^ ((((arr_12 [i_1] [i_1] [i_1] [i_1]) ? 52854 : (-32767 - 1)))))) - ((max((max((arr_5 [i_1]), (arr_10 [i_1] [i_1] [i_1] [i_4]))), (((arr_5 [i_1]) / (arr_5 [i_1]))))))));
            var_27 = (i_1 % 2 == zero) ? ((min(var_3, (((((arr_8 [i_1] [i_1]) ? (arr_12 [i_4] [i_4 + 1] [i_4] [i_1]) : (arr_12 [i_1] [i_4 - 1] [i_1] [i_1]))) >> (((max(var_0, (arr_12 [i_4] [i_4] [i_1] [i_1]))) - 9135114637540363962))))))) : ((min(var_3, (((((arr_8 [i_1] [i_1]) ? (arr_12 [i_4] [i_4 + 1] [i_4] [i_1]) : (arr_12 [i_1] [i_4 - 1] [i_1] [i_1]))) >> (((((max(var_0, (arr_12 [i_4] [i_4] [i_1] [i_1]))) - 9135114637540363962)) - 29240661994036397)))))));
        }
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_28 = (max(((min((max(var_1, -2147483645)), ((((arr_10 [i_5 - 1] [i_5 + 1] [i_5] [i_5]) ? 89 : 1960973663)))))), (((arr_19 [i_5]) % (max((arr_7 [i_5] [i_5] [i_5]), 1))))));
        arr_20 [i_5] = (min(1, -var_7));
        var_29 = -6897218876033468260;
        var_30 = ((-8 ? 208 : 2147483644));
        arr_21 [i_5] = ((((((min((arr_19 [i_5]), 4769149345111212253))) ? (max(var_4, (arr_2 [i_5]))) : (min((arr_6 [i_5]), (-2147483647 - 1))))) != ((var_15 ? 1284468102 : ((min((arr_16 [i_5] [i_5]), 11)))))));
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_24 [i_6] = (min(((min((arr_23 [i_6 - 1]), (max((arr_22 [i_6]), (arr_23 [i_6])))))), (var_14 / 241)));
        var_31 = max((max(((((arr_22 [i_6 + 1]) < 64))), (((arr_23 [i_6]) / var_4)))), (arr_22 [i_6]));
    }
    var_32 &= (!var_9);
    var_33 = (((max((max(var_17, var_17)), var_8))) ? ((max(var_3, var_11))) : var_7);
    #pragma endscop
}
