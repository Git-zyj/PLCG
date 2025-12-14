/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((8381146457234469403 ? (~var_11) : (min((max(var_11, var_17)), (!-1468022013650022698)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_7 [12] [i_2] = (((arr_1 [i_0]) ? ((-12282 ? var_18 : (arr_3 [i_0] [i_1]))) : (arr_3 [i_0] [i_2])));
                    arr_8 [i_0] [i_0] [i_2] = ((arr_2 [i_2] [i_1] [i_2]) ? (arr_5 [i_1]) : (arr_2 [i_0] [i_0] [i_0]));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_3] = (((((var_9 ? (arr_4 [i_0] [i_1] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (arr_1 [i_3]) : (arr_3 [i_0] [i_1])));
                    arr_12 [i_0] [i_0] [i_0] = ((!(~var_14)));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_0] [8] [14] [i_0] = (((arr_14 [i_0] [i_4] [i_4] [i_4]) ? ((((((arr_15 [i_0] [i_1] [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_1])))) ? ((((1468022013650022698 < (arr_16 [i_0] [i_1] [i_4]))))) : -1468022013650022698)) : var_3));
                    arr_18 [i_0] [i_1] = (min(7832702055503131551, var_6));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_22 [i_0] [i_0] [12] = -1468022013650022715;
                    arr_23 [10] = ((max((arr_20 [i_1]), (arr_20 [i_0]))));
                }
                arr_24 [i_0] [i_0] [i_0] = (min(((((-(arr_4 [i_0] [i_0] [i_0] [i_0]))))), ((690074474 ^ (min(var_5, (arr_9 [i_0] [i_1] [i_1])))))));

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_27 [i_0] [i_0] [i_1] [i_0] = ((~((((4294967295 ? (arr_19 [i_0] [i_1] [i_0]) : (arr_19 [i_6] [i_1] [i_6]))) ^ var_18))));
                    arr_28 [i_0] [i_0] [i_6] = (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (max((arr_25 [i_0] [i_1] [i_6]), (arr_0 [i_0] [i_0]))) : (+-1468022013650022698)));
                    arr_29 [i_0] = ((((((arr_13 [i_0] [i_1] [i_6]) ? (arr_13 [i_0] [i_1] [i_6]) : (arr_13 [6] [i_1] [7])))) ^ (((arr_13 [i_0] [i_1] [i_1]) ? (arr_13 [i_0] [i_1] [i_6]) : var_3))));
                }
            }
        }
    }
    var_20 = ((~((~((var_15 ? var_8 : var_18))))));
    var_21 |= var_6;
    var_22 = var_0;
    #pragma endscop
}
