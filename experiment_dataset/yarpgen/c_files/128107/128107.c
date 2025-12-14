/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((!(((var_4 ? 37906 : 63897)))))) >> 0);
    var_13 = (min(var_13, var_8));
    var_14 = 163;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [1] = (((arr_1 [i_0]) ? -var_5 : (arr_0 [i_0] [11])));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [0] [i_1] [i_3] [i_4] = ((~(arr_5 [1] [i_1])));
                            arr_16 [i_1] [i_3 + 2] [9] [11] [i_1] [i_1] = (arr_12 [4] [i_3 - 1] [i_2] [i_3] [i_4]);
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = (!26429);
                            var_15 -= -7907205612791323432;
                        }
                    }
                }
            }
            arr_18 [13] [i_1] = ((arr_0 [i_1] [i_0]) ? (arr_1 [i_0]) : (arr_3 [i_0] [5]));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_5] = (-26430 / -1696986149);
            var_16 = (26432 ? (~var_8) : -26408);
            arr_22 [i_5] [i_5] = (((!var_10) & ((7907205612791323432 >> (128 - 92)))));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_31 [i_7] |= ((((26429 ? (arr_8 [i_8] [i_7] [i_7] [2]) : 18174390637506134168)) >> (26571 - 26537)));
                        var_17 = (max(var_17, ((((arr_8 [i_8] [i_7] [i_7] [i_0]) ? (~26282) : (((arr_27 [8] [i_6] [5] [i_0]) ? (-127 - 1) : (arr_9 [i_0] [i_6] [i_6] [i_7] [i_7] [i_7]))))))));
                        var_18 = (min(var_18, 1835988331));
                    }
                }
            }
            arr_32 [i_6] = (((arr_24 [i_6 - 1] [i_6 + 1]) <= var_2));
        }
    }
    #pragma endscop
}
