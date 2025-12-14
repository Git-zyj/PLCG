/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((!(var_1 & 35969))) ? (((((max(1443359826, 560027116))) > -862127562619712736))) : -var_5));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 1;
        var_15 -= (((~(arr_2 [i_0]))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_16 = 82;
                            var_17 = -560027112;
                            var_18 = (((9223231299366420480 ? var_0 : 560027111)));
                        }
                    }
                }
            }
            var_19 = (max(var_19, (((-(arr_8 [i_1] [i_1 - 2] [i_1] [i_1]))))));
            arr_13 [i_0] [i_0] = 1;
        }
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_20 += ((((32758 ? 25278 : (arr_8 [i_5 - 2] [i_5 - 2] [i_5] [8]))) + (arr_10 [i_5] [i_5 + 2] [i_5 + 1])));
        arr_16 [i_5] = (((715562894 | var_5) ? (((var_7 ? -119 : 1031515696))) : -1346589266104125533));
        arr_17 [i_5 - 1] [i_5] = ((-(24155 ^ -112)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_20 [i_6] = ((((var_6 ? 121 : 22654))) ? ((((arr_8 [i_6] [i_6] [i_6] [i_6]) ? (arr_8 [12] [i_6] [i_6] [i_6]) : -1443359849))) : ((var_10 ? (arr_7 [i_6] [i_6] [i_6] [i_6]) : 560027111)));
        var_21 = (-20 == 5861100188397795675);
        var_22 += ((3263451599 ? (arr_4 [i_6] [i_6] [i_6]) : var_11));
    }
    #pragma endscop
}
