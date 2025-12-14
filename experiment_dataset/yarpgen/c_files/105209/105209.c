/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 ? ((12624139674072365952 ^ ((min(var_16, var_1))))) : ((((((var_16 + 9223372036854775807) >> (var_14 - 790070217335628860))) ^ ((max(25165824, var_4))))))));
    var_19 = (min(32749, (((2147483647 | var_7) ? ((min(18604, var_6))) : var_17))));
    var_20 = (min(var_20, (var_6 ^ var_8)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [1] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_21 = ((((min(((max((arr_0 [i_0] [i_0]), 110))), ((var_4 ? (arr_2 [i_0]) : 1697552478))))) ? (((((108 ? (arr_0 [i_0] [i_0]) : 9102))) ? ((1 | (arr_1 [i_0]))) : (((arr_1 [5]) ? (arr_1 [i_0]) : 21417)))) : (arr_0 [5] [i_0])));
        var_22 = 0;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_23 *= (((((+(min((arr_4 [i_1]), 1802633961))))) || (((-(min((arr_5 [i_1]), 96)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_24 = (((((((((arr_9 [i_1] [0] [i_3]) - (arr_7 [i_1] [i_3])))) - (((arr_10 [i_1] [i_1] [i_3]) ? var_2 : 8))))) ? (min(((min((arr_7 [i_1] [i_3]), var_7))), (((arr_4 [i_2]) ? var_8 : 15)))) : (arr_7 [i_2] [i_3])));
                    arr_12 [i_1] [0] [i_2] [i_3] |= (((1764847198 | -1940906942) && (((var_12 % (arr_7 [i_1 + 1] [i_1 + 1]))))));
                    var_25 = (arr_4 [i_3]);

                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_1] [6] [i_2] [i_3] [13] = ((-(min((max(-10, var_2)), var_13))));
                        var_26 ^= ((68 ? (arr_11 [i_2] [i_3] [9]) : (min((arr_10 [i_1] [i_1] [8]), (max(var_16, (arr_6 [11])))))));
                        var_27 &= (min(((min(((max((arr_8 [i_4]), 21425))), (((-2147483647 - 1) ? -33 : (arr_9 [i_1] [i_1] [i_4])))))), (((arr_6 [i_3]) ? 0 : var_2))));
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            var_28 ^= (((arr_19 [i_1] [i_2] [i_5] [i_6]) <= (((((arr_19 [i_1 + 1] [i_2] [i_5] [i_6 - 2]) >= var_3))))));
                            arr_22 [i_1] [i_1] [i_3] [i_3] [3] [5] = 1;
                        }
                        var_29 ^= ((17682 - (arr_13 [i_1] [6] [6])));
                        var_30 = ((~((((arr_19 [i_1 + 2] [i_2] [i_3] [i_5]) <= (arr_7 [i_1 + 2] [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_2] = (((arr_4 [i_2]) || (arr_19 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 1])));
                        var_31 ^= ((+((((arr_15 [1] [i_2] [i_3]) < var_7)))));
                        var_32 = (arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1]);
                    }
                }
            }
        }
        arr_27 [i_1] &= ((arr_15 [6] [i_1] [i_1]) << (((max(var_2, (arr_13 [i_1] [12] [i_1 + 2]))) - 684487535952129094)));
    }
    #pragma endscop
}
