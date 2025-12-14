/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 ? ((var_12 ? ((max(var_2, var_1))) : (var_10 ^ var_9))) : ((max(var_10, ((var_17 ? var_11 : var_19)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [12] [i_1] [i_2] = (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]);

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_21 = (arr_4 [i_0] [8] [i_2 + 1]);
                            arr_15 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4] |= var_7;
                            var_22 = (i_1 % 2 == 0) ? ((((arr_13 [i_0] [i_0] [i_1] [8] [13]) >> (((arr_3 [i_1] [i_2 - 2]) + 153323633832321243))))) : ((((arr_13 [i_0] [i_0] [i_1] [8] [13]) >> (((((arr_3 [i_1] [i_2 - 2]) + 153323633832321243)) + 4777437851294847443)))));
                            var_23 = (arr_5 [i_2 + 1] [i_2] [i_2 + 1]);
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_5] [i_5] &= (244 % -22);
                            arr_21 [i_1] [9] [11] [i_1] [9] = ((!(arr_3 [i_1] [i_1])));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_24 = ((var_7 ? (arr_19 [i_0] [i_2 + 2] [i_1]) : (arr_11 [15] [15] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                            var_25 = ((((var_6 + (arr_16 [i_0] [7] [i_0] [i_0] [i_0] [i_0] [20]))) - (arr_24 [i_6] [i_6] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            arr_25 [i_0] [i_1] [7] [0] [i_1] [i_1] = var_1;
                            var_26 += (((var_1 ? 251 : 251)));
                        }
                    }
                }
            }
            var_27 &= (((arr_18 [18] [18] [18] [i_1] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_22 [1])));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_28 = (max(var_28, (((-(arr_3 [8] [8]))))));
            arr_28 [i_7] [i_0] [i_0] = (((arr_24 [i_0] [i_0] [i_7] [i_0] [5] [i_7]) >= (arr_27 [i_7])));
        }
        arr_29 [i_0] [i_0] = ((var_11 ? var_4 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [19])));
    }
    var_29 ^= max((((max(var_17, 562949953421184)) >= (((max(var_3, var_4)))))), (var_9 >= var_11));
    var_30 = (max(var_30, (((-7 * (((var_18 ? var_6 : (!var_9)))))))));
    var_31 = ((~(((21 <= 4611123068473966592) ? 4362862139015168 : ((7 ? 4294967295 : 0))))));
    #pragma endscop
}
