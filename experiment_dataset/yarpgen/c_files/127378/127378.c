/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(((min(var_0, var_0))), (var_10 + var_9))) <= (min(var_5, (((var_4 ? var_6 : var_12)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((max((arr_1 [i_0] [i_0]), ((max((arr_0 [i_0]), 32765)))))) ? ((((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) < ((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))))) : (((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0]))) ^ ((min((arr_2 [1]), (arr_2 [i_0])))))));
        var_16 = ((((((min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))) < ((min((arr_2 [i_0]), (arr_2 [i_0])))))) ? ((((((arr_1 [i_0] [i_0]) << (((arr_2 [i_0]) - 125))))) ? (((arr_2 [i_0]) - (arr_0 [i_0]))) : ((min((arr_0 [i_0]), (arr_2 [i_0])))))) : (((arr_1 [i_0] [i_0]) ? (((arr_0 [1]) - (arr_2 [i_0]))) : ((min((arr_2 [i_0]), (arr_0 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_17 = (arr_2 [i_1]);
        arr_7 [i_1 + 1] = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_18 = (min((arr_9 [i_2]), ((((((arr_10 [i_2] [i_2]) < (arr_11 [i_2] [i_2])))) * ((max((arr_11 [i_2] [i_2]), (arr_10 [i_2] [i_2]))))))));
        arr_12 [i_2] [14] = (((arr_8 [i_2]) ? (min((((arr_11 [14] [i_2]) + (arr_10 [i_2] [i_2]))), (((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_11 [i_2] [i_2]))))) : ((((((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_9 [i_2]))) == ((min((arr_10 [i_2] [i_2]), (arr_10 [i_2] [i_2])))))))));
        var_19 = (arr_9 [i_2]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = ((((min((((arr_0 [i_3]) - (arr_10 [2] [i_3]))), (arr_14 [i_3])))) ? (arr_10 [2] [i_3]) : ((((((arr_5 [i_3] [i_3]) ? (arr_9 [0]) : (arr_11 [i_3] [i_3])))) ? (((arr_0 [0]) ? (arr_10 [4] [i_3]) : (arr_2 [i_3]))) : (((arr_6 [i_3]) / (arr_14 [i_3])))))));
        arr_15 [i_3] = ((((min((((arr_13 [i_3]) ? (arr_5 [6] [i_3]) : (arr_10 [14] [14]))), (((arr_2 [i_3]) << (((arr_0 [i_3]) - 110))))))) < (((((arr_4 [12]) + 9223372036854775807)) << (((((arr_6 [i_3]) ^ (arr_11 [1] [i_3]))) - 535))))));
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 |= ((65525 / (-2147483647 - 1)));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_22 = (((arr_18 [i_4]) ? (arr_19 [i_4] [i_4] [1]) : (((arr_18 [i_4]) ? (arr_19 [15] [2] [i_4]) : (arr_17 [i_4])))));
            arr_22 [i_4] = ((((((arr_16 [i_4]) - (arr_18 [i_4])))) ? (arr_18 [i_5]) : (arr_19 [i_4] [i_5] [i_5])));
            arr_23 [i_4] = (((arr_18 [i_4]) ? (arr_17 [i_4]) : (arr_21 [i_4] [i_5])));
            var_23 += (((arr_16 [i_5]) ? ((((arr_17 [i_5]) == (arr_18 [i_4])))) : (2147483647 % 2147483647)));
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_24 *= (((min(((((arr_24 [16] [20] [6]) != (arr_18 [i_4])))), (((arr_21 [0] [i_6]) ? (arr_24 [i_4] [8] [8]) : (arr_20 [i_6] [17]))))) << (((max((((arr_21 [10] [8]) ? (arr_19 [i_4] [22] [i_6]) : (arr_17 [16]))), (((arr_21 [1] [i_6]) ? (arr_16 [1]) : (arr_24 [4] [22] [i_6]))))) - 185935426))));
            arr_26 [i_4] [i_6] = min(((((((-127 - 1) ? 2147483628 : (-127 - 1)))) ^ (((arr_17 [i_4]) ? (arr_19 [i_4] [i_6] [17]) : (arr_21 [i_4] [i_6]))))), ((((arr_17 [i_4]) == (max((arr_19 [22] [i_6] [22]), (arr_17 [i_4])))))));
        }
        arr_27 [i_4] = ((((((((arr_20 [i_4] [i_4]) * (arr_16 [i_4])))) ? (((arr_19 [i_4] [9] [9]) ? (arr_20 [i_4] [i_4]) : (arr_17 [i_4]))) : ((((arr_17 [i_4]) < (arr_19 [16] [i_4] [i_4]))))))) && (arr_20 [i_4] [i_4]));
        var_25 = (arr_20 [i_4] [i_4]);
    }
    var_26 = ((((8 ? 16644476946806760309 : 2147483644)) - (((((var_5 ? var_2 : var_5))) ? var_7 : ((var_0 ? var_2 : var_13))))));
    #pragma endscop
}
