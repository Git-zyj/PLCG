/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 16496654180003312731;
    var_20 |= var_7;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [0] = (max((((((!(arr_3 [i_0 - 2] [2])))) + (!var_9))), (((arr_0 [i_0 + 2]) ? (((arr_2 [1]) ? 53 : 9393)) : (((arr_1 [3]) ? (arr_1 [i_0]) : 62456))))));
        var_21 ^= -737997470;
        arr_5 [12] = ((!((min(-1, (arr_1 [23]))))));
        arr_6 [18] = ((12554154556724568201 > ((((arr_0 [i_0 - 2]) ? ((38475 ^ (arr_1 [5]))) : ((min(113, 3365))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = ((-(arr_3 [i_1 + 2] [i_1])));
        var_23 = ((!(arr_2 [i_1 + 2])));
        arr_10 [10] = ((var_13 ? (arr_9 [i_1 + 2] [i_1]) : (((!(arr_0 [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    var_24 = 9223372036854775807;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_2] [i_2] [i_2] [i_2] = (arr_2 [i_2 - 1]);
                        var_25 = var_14;

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            var_26 = ((143 ? (arr_13 [i_2]) : (arr_15 [i_2] [i_6 - 3])));
                            arr_24 [4] [i_2] [i_5] [22] = var_5;
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_27 = (((((arr_16 [0] [0]) % (((((arr_9 [i_2] [22]) || 855984339)))))) + (((min(((((arr_1 [i_2]) >= (arr_14 [i_2 + 1] [9])))), (arr_22 [i_2] [i_2] [i_2] [16] [i_2])))))));
                            arr_27 [i_2] [i_2] [i_2] = (min((arr_13 [i_2]), (arr_15 [i_2] [i_3])));
                            arr_28 [i_2] [i_3] [i_4] [i_4 + 1] [6] [i_4 + 1] [i_2] = (arr_23 [i_2 + 1] [i_3 + 1]);
                        }
                    }
                    arr_29 [i_2] [i_4 - 1] [i_4] [i_2] = ((!(arr_12 [14])));
                    var_28 = (((((4294967282 ? -22342 : 40065))) ? ((((((arr_14 [i_2] [i_4 + 2]) ? 28900 : (arr_3 [i_2] [i_3])))) ? var_16 : ((2493492988560393633 ? (arr_3 [i_3 - 1] [i_3 - 1]) : 12)))) : (min((min((arr_25 [i_2] [i_2]), -1)), ((var_17 ? var_1 : var_10))))));
                }
            }
        }
    }
    #pragma endscop
}
