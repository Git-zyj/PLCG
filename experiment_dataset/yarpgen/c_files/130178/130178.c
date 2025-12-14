/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_8;
    var_14 = ((((~((min(4315, var_9)))))) ? var_0 : (~var_9));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] = ((~(arr_4 [6])));
            var_15 = 136;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        var_16 = ((((((arr_11 [i_0] [i_2] [i_3] [i_4] [i_4]) ? ((var_6 ? var_2 : 4344)) : (arr_8 [i_0] [i_0])))) ^ ((var_9 ? ((((arr_4 [i_4]) ? (arr_12 [i_4]) : (arr_9 [i_0 - 2] [i_2] [i_4])))) : (arr_11 [i_0] [i_4 + 3] [9] [i_4] [i_4])))));
                        var_17 = (arr_14 [i_2] [i_0] [i_0] [i_4 - 2]);
                        arr_15 [i_2] [i_0] = (min((min(((55883 ? var_4 : var_7)), (arr_8 [i_0] [i_0]))), (var_0 < var_8)));
                        var_18 = (((((-4311 - 138) ? (arr_10 [i_0] [i_2] [i_3]) : (((var_11 + 9223372036854775807) >> (var_11 + 5502468550915699165))))) >> (17991264073431330920 - 17991264073431330906)));
                    }
                }
            }
            var_19 += (arr_8 [10] [i_2]);
            arr_16 [i_0] [i_2] [i_0] = ((((((var_11 % -8030511586502450742) ? (arr_3 [i_0] [i_0]) : -var_12))) ? (((arr_12 [i_2]) ? (min((arr_11 [i_0] [i_2] [i_2] [i_2] [i_2]), var_8)) : (arr_7 [i_0] [i_0] [i_2]))) : ((((arr_1 [i_2]) + (arr_12 [i_0 + 1]))))));
        }
        arr_17 [i_0] = (((((-var_1 ? (arr_2 [i_0] [i_0 + 1]) : var_9))) ? (((((min((arr_0 [6] [i_0]), (arr_4 [i_0]))))) * (arr_7 [i_0] [i_0 + 1] [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_18 [i_0] = (((min(((var_2 / (arr_14 [i_0] [i_0] [i_0] [2]))), ((((arr_10 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_12 [i_0])))))) % (min(var_2, 3020943074))));
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_20 ^= (((((arr_21 [i_5 - 2]) + (arr_20 [i_5 - 2] [i_5 - 3]))) + (arr_19 [i_5 - 3])));

        for (int i_6 = 4; i_6 < 22;i_6 += 1)
        {
            var_21 = 4363039550403927055;
            var_22 = (min((((arr_24 [i_5 - 2] [i_5 - 2]) + (arr_20 [i_5] [i_5]))), (arr_22 [i_5] [i_5 + 4])));
        }

        /* vectorizable */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            arr_29 [i_7] [i_5] = (((arr_19 [i_7 + 1]) / var_7));
            arr_30 [2] [i_7] = (arr_26 [i_7 - 1]);
            arr_31 [i_7] = (arr_24 [i_7 - 1] [i_5 + 2]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_36 [i_5] [5] = (((((arr_27 [i_5 - 3] [i_5 + 3] [10]) ? (arr_27 [i_5 + 3] [i_5 + 1] [2]) : (arr_27 [i_5 + 1] [i_5 + 4] [16]))) & ((min((arr_25 [i_5 - 1] [i_8] [i_8]), 1891862235)))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_23 = var_3;
                            var_24 += (((((0 + (arr_42 [i_11] [i_9] [i_8] [i_5 - 1])))) ? (((arr_39 [i_5] [i_5] [i_5]) / (((arr_25 [i_11] [i_5] [i_5]) ? (arr_39 [i_5] [i_5] [i_11]) : var_1)))) : (arr_40 [i_5 - 1] [i_8] [i_9])));
                        }
                    }
                }
            }
        }
        var_25 = (max(var_25, 74));
    }
    #pragma endscop
}
