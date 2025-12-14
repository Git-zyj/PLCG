/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [1] = ((arr_3 [i_0 + 2]) - (arr_3 [i_0 + 3]));
            var_21 = (((arr_5 [i_0 + 1]) + (arr_0 [i_0 - 1])));
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (max(((((arr_1 [i_0 + 2]) <= ((min(60246, (arr_0 [10]))))))), (max((((arr_4 [7]) ? (arr_2 [i_0] [i_0 + 4]) : (arr_5 [i_2 + 2]))), (max((arr_5 [i_0 + 2]), (arr_4 [18])))))));
            arr_10 [i_0] [i_0] [i_2 - 1] = ((((((((-(arr_8 [i_0] [i_0]))) + 2147483647)) >> (arr_0 [i_0 - 2]))) ^ (arr_1 [i_0 + 4])));
            arr_11 [i_0 + 2] [i_0 + 2] [9] = arr_8 [11] [i_2];
        }
        var_22 = ((3066093687 && (((((((arr_4 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0])))) ? ((~(arr_8 [i_0 - 1] [i_0]))) : (arr_7 [i_0 + 4] [i_0 + 4] [i_0 + 3]))))));
        arr_12 [i_0 + 1] = (arr_0 [i_0]);
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_23 ^= (arr_16 [i_5]);
                        arr_21 [i_3] [i_4] [i_5] [i_4] = (arr_4 [14]);
                        arr_22 [i_4] [i_4] [i_6] = (max((((~(arr_16 [i_5])))), (((arr_4 [i_4]) << ((((-(arr_8 [i_3 + 2] [i_4]))) + 314))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 = (max(var_24, ((min((min((arr_5 [i_7]), (arr_2 [i_3] [i_7]))), (((min(43, (arr_25 [i_3 + 1] [i_7] [18]))) - (arr_14 [i_3 - 2]))))))));

                    for (int i_9 = 3; i_9 < 21;i_9 += 1)
                    {
                        arr_30 [i_3] [16] [i_3] [i_9] = (arr_14 [i_3 - 1]);
                        var_25 = arr_25 [i_3 - 1] [i_7] [i_3 - 1];
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_26 += (arr_16 [14]);
                        arr_33 [i_10] [i_8] [17] [i_3] = ((6457742773564219669 & ((((arr_16 [i_8]) | (arr_1 [i_3 - 1]))))));
                        var_27 = (min(var_27, (!210)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
