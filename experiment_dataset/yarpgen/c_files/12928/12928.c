/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-((3793525027 ? var_2 : var_1))))) ? ((((var_3 ? var_13 : var_10)) ^ var_8)) : (min(var_3, var_13))));
    var_15 = (max(var_15, 17844));
    var_16 = (min((((((var_6 ? var_9 : var_8)) & 6706513528428777939))), 4011443000));
    var_17 = ((var_7 ? ((max(var_8, var_7))) : 3793525025));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 += (((((-111 | (arr_0 [i_0] [12])))) ? ((((var_12 << (((((arr_0 [i_0] [10]) + 3622901004726573310)) - 7)))) | (arr_1 [11]))) : ((((((((arr_0 [0] [0]) ? (arr_0 [2] [12]) : 18446744073709551594))) || (arr_0 [i_0] [6])))))));
        arr_2 [i_0] = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) ? ((-(arr_0 [i_0] [i_0]))) : ((((var_6 || (arr_0 [i_0] [i_0])))))));
        var_19 += (min(-99, (((arr_1 [i_0]) ? (max((arr_1 [i_0]), (arr_0 [i_0] [10]))) : ((14291847108518132417 ? (arr_1 [i_0]) : (arr_0 [10] [2])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_5 [1] [i_1] = ((var_6 ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1])));
        var_20 ^= (((arr_1 [i_1]) * (arr_1 [i_1])));
        arr_6 [i_1] = (((arr_3 [i_1]) / (arr_3 [i_1])));
        var_21 = (arr_1 [i_1]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((((var_13 ? (arr_0 [i_2] [i_2]) : (arr_4 [i_2] [8])))) ? (arr_8 [i_2]) : var_5)) >= (((arr_0 [i_2] [i_2]) ^ ((-(arr_0 [i_2] [i_2]))))));
        arr_11 [4] = (((max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2]))) ^ (~var_1)));
        arr_12 [i_2] = (min((arr_1 [i_2]), 190));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_22 *= arr_14 [i_3];

        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            var_23 -= -var_3;
            var_24 -= (arr_9 [1]);
            arr_20 [i_4] = (((arr_4 [i_3] [i_3]) ? (((arr_4 [i_4 - 1] [i_3]) % (arr_9 [3]))) : (arr_14 [i_3])));
        }

        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            arr_23 [i_5] [i_5] = 7;
            var_25 = (arr_1 [3]);
            var_26 = 10827673070786382707;
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_26 [i_3] [i_3] = ((var_3 ? (arr_16 [i_3] [i_3] [i_6]) : -16488));
            var_27 = (((arr_0 [i_6 - 1] [i_3]) ? (arr_0 [i_6 + 1] [i_3]) : (arr_0 [i_6 + 1] [i_3])));
        }
        var_28 ^= arr_19 [i_3] [i_3];
    }
    #pragma endscop
}
