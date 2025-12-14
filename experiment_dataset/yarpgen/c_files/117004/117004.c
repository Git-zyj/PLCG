/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_10 = (min(0, -23885));
        var_11 = ((!((max((arr_1 [i_0]), -23885)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_12 |= ((~(((((-23864 ? (arr_0 [6]) : var_3))) ? -1 : (arr_1 [i_1])))));
            var_13 = 59;
            var_14 = (((-(29 + 4294967295))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((~((min((!255), var_1)))));
            var_15 = (max(var_15, ((max(((-(arr_7 [i_0] [i_2]))), ((-(arr_0 [i_2]))))))));
        }
        arr_10 [13] = 50;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_16 = ((1 ? (arr_14 [i_3]) : (arr_3 [i_3] [i_3])));
                                arr_22 [i_3] [3] [0] [i_6 - 3] [i_7] = -3;
                                arr_23 [3] [i_3] [i_5] [i_6] [i_6] = (!1);
                            }
                        }
                    }
                    var_17 = 1742698797;
                    arr_24 [i_3] [i_4] [i_3] [i_3] = (arr_4 [i_3]);
                    var_18 = (arr_11 [i_4]);
                }
            }
        }
        arr_25 [8] &= ((-115 ? (((var_2 ? 63 : 1))) : -611484472330180227));
        arr_26 [i_3] = (arr_6 [14] [14] [i_3]);
    }
    var_19 = var_1;
    #pragma endscop
}
