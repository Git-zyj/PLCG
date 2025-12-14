/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 > var_2) >= var_7));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [5] = (arr_1 [1]);
        arr_5 [i_0] |= arr_3 [i_0];
        var_14 = ((((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [7])))) ? (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) : (((((128 ? 3658709910 : 238269777079990436))) ? -178634059 : 126))));
        var_15 = (max(var_15, (((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])))) ? ((((((arr_0 [i_0]) ? (arr_0 [8]) : (arr_0 [i_0 + 1]))) > (((arr_2 [i_0]) * (arr_0 [6])))))) : (((((arr_0 [i_0]) && (arr_3 [i_0]))) ? (arr_0 [12]) : (arr_0 [i_0 - 1]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_16 = ((arr_9 [11] [1] [i_0 + 1]) && (arr_6 [i_0]));
                var_17 = (((arr_6 [i_0 - 1]) ? (arr_8 [i_1]) : (arr_9 [i_0 - 1] [i_1] [i_2])));
                var_18 = (((((arr_7 [i_0]) < (arr_2 [i_0]))) && ((((arr_6 [20]) ? (arr_7 [i_1]) : (arr_0 [11]))))));
                var_19 = (arr_3 [i_0]);
            }
            var_20 = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])));
            var_21 = ((((((arr_6 [i_1]) ? (arr_9 [i_0] [i_0] [i_1]) : (arr_7 [i_0])))) ? (arr_6 [i_0 + 1]) : (arr_7 [i_0 - 1])));
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_22 = (min(var_22, ((((((arr_11 [i_3]) > (((arr_8 [i_3]) % (arr_8 [i_3]))))) ? ((((arr_0 [i_3]) ? 1 : (arr_3 [i_3 + 1])))) : (((((18208474296629561179 ? -8949101129645163029 : 17189))) ? (arr_10 [i_3 + 1]) : (arr_8 [i_3 + 1]))))))));
        var_23 ^= ((((((arr_6 [i_3 + 1]) ? (((arr_6 [i_3]) ? (arr_8 [2]) : (arr_10 [i_3 + 1]))) : (arr_6 [i_3 + 1])))) ? ((((((((arr_8 [i_3]) > (arr_10 [i_3]))))) > (((arr_11 [i_3]) ? (arr_1 [i_3]) : (arr_9 [i_3] [i_3] [i_3])))))) : (arr_0 [i_3 + 1])));
        var_24 = ((((((((arr_1 [i_3 + 1]) ? (arr_10 [i_3]) : (arr_7 [i_3])))) && (arr_8 [i_3 + 1]))) ? ((((arr_1 [17]) ? (arr_7 [i_3 + 1]) : (((arr_12 [i_3 + 1] [i_3]) ? (arr_2 [i_3]) : (arr_1 [i_3])))))) : (((((arr_9 [12] [i_3] [i_3 + 1]) ? (arr_0 [i_3]) : (arr_6 [i_3]))) % ((((arr_10 [1]) ? (arr_11 [i_3]) : (arr_0 [i_3]))))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_25 = (arr_2 [i_4]);
        var_26 = (min(var_26, ((((arr_7 [i_4 + 1]) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4 + 1]))))));
    }
    var_27 = (((((-8949101129645163029 && 18446744073709551615) > ((var_4 ? var_0 : var_0)))) ? (((((18208474296629561180 ? 2241052423006688320 : -62)) < var_3))) : ((((((var_3 ? var_2 : var_4))) > ((var_2 ? var_10 : var_3)))))));
    #pragma endscop
}
