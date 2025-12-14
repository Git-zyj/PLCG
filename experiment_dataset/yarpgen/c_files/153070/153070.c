/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = ((-(arr_1 [i_0 + 3])));
        arr_2 [i_0] = arr_1 [22];
        arr_3 [i_0] = (arr_1 [i_0 + 2]);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_0 [14] [14]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_13 [1] [i_2 + 1] [i_3 + 1] [i_2] = ((~((min((arr_5 [i_1 + 3]), -114)))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_14 = (max(var_14, (arr_8 [i_1 - 1] [i_3 + 1] [i_5])));
                            var_15 = (max(((((arr_16 [i_1 + 3] [i_2 - 1] [i_3 - 1] [i_5] [i_5]) || (arr_6 [i_2])))), (max(var_2, 1))));
                            arr_17 [i_1] [i_1 + 3] [i_1] [i_1 - 1] [i_1] [i_2] [16] = ((-((~(arr_6 [i_2])))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        arr_20 [i_6 + 1] [i_6] |= ((+(((arr_18 [i_6]) ? (arr_10 [i_6 - 1] [i_6] [i_6] [i_6]) : -9223372036854775799))));
        var_16 = min(((((arr_11 [22] [22] [i_6 - 1] [i_6] [i_6 - 2]) || (arr_14 [12] [12] [i_6] [i_6] [i_6 - 1])))), (min((arr_1 [i_6]), (max((arr_7 [i_6]), (arr_11 [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1]))))));
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_30 [i_7] = arr_22 [i_6];
                        var_17 = (((arr_6 [i_7]) ? (max((arr_14 [i_8] [i_7 - 2] [i_7 - 3] [i_9 - 3] [i_7 - 3]), (arr_19 [i_6 - 1] [i_7]))) : (((((arr_4 [i_9 - 1]) || (arr_4 [i_9 - 1])))))));
                        var_18 |= var_4;
                    }
                }
            }
        }
        var_19 = (arr_11 [i_6] [i_6] [i_6] [14] [i_6]);
        arr_31 [i_6] = (min((((arr_6 [i_6]) << (((((arr_14 [i_6 + 1] [i_6] [i_6] [i_6 - 2] [i_6]) ? (arr_7 [i_6]) : (arr_28 [i_6] [i_6] [i_6] [i_6]))) - 229)))), (arr_1 [i_6 - 2])));
    }
    var_20 |= var_9;
    #pragma endscop
}
