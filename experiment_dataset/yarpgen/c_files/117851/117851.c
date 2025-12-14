/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((min(var_4, ((var_0 ? var_8 : var_2)))) >= var_6));
    var_11 = ((((((8598602223351345645 ? 8598602223351345674 : 37)))) ? (((((min(-8598602223351345641, var_5))) ? var_4 : (var_9 | var_6)))) : (min(((min(var_7, 131))), var_1))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 ^= (min(((13205110 ? 8598602223351345653 : 168)), ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] [i_0] [i_1] = (131 * 3583647791);
            var_13 = (((((9223372036854775807 ? 15 : var_5))) ? (-8598602223351345641 - -8566064416214001438) : (arr_2 [i_1 - 2] [i_1 - 2])));
            var_14 += 3020873125;
            var_15 = -28181;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                arr_12 [i_2] &= ((var_0 ? 9102601308205471335 : (arr_9 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2 - 2])));
                arr_13 [i_0] [i_2] = -9699811965666362853;
                var_16 = (max(var_16, ((((arr_3 [i_2] [i_0] [i_2]) ? -8598602223351345639 : (arr_3 [i_2] [i_2] [i_3 + 2]))))));
                var_17 = (var_1 - (((~(arr_9 [i_0] [i_0] [i_3 - 2] [i_0])))));
                var_18 = (1 - -80304385);
            }
            var_19 = (min(var_19, 0));
        }
        var_20 *= ((min((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [1] [i_0]))));
        var_21 += var_1;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_22 = ((((!(arr_16 [4] [i_4]))) ? (arr_16 [i_4 + 1] [i_4]) : (arr_14 [i_4 - 1])));
        arr_17 [i_4 - 2] = (1323052288 || 16020245461949127784);
        arr_18 [i_4 + 2] = (((arr_14 [i_4 + 2]) / ((var_0 ? 8598602223351345647 : var_9))));
    }
    #pragma endscop
}
