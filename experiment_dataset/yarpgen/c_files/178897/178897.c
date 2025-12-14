/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 / (((((var_9 >> (var_10 - 9620249158182988054)))) ? (max(var_12, 3087283615)) : (11866982477427419478 && -1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (~1218408460)));
        var_18 |= ((!(arr_0 [i_0])));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_19 = (min(var_19, (~30218)));
            var_20 = (-30223 * 123);
        }
        arr_5 [i_0] = -30208;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [0] &= var_0;

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_21 = (~(arr_2 [i_2] [i_5] [i_2]));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_23 [18] [i_2] = 30237;
                            var_22 = -44978;
                            var_23 = (!(((var_4 ? var_14 : (arr_21 [i_4])))));
                            var_24 = (((arr_19 [i_2] [i_3] [i_4] [i_6] [i_6]) ? (arr_12 [i_2]) : 59884));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_27 [9] [i_3] [i_2] [13] [i_7] = -30223;
                            arr_28 [i_2] [i_3] [1] [i_2] [i_7] = (var_8 ? -30218 : 90);
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_25 = -30218;
                            var_26 = (max(var_26, var_1));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_27 = -30247;
                            arr_35 [i_2] [i_2] [12] [i_4] [2] [i_5] [i_2] = ((~(((arr_19 [i_2] [i_3] [i_3] [10] [6]) - 1))));
                            arr_36 [i_2] [i_3] [8] [i_4] [2] [i_5] [i_9] = var_11;
                            var_28 = (max(var_28, (arr_14 [i_2] [14] [i_5] [i_4])));
                            var_29 &= ((41798381 ? 1167822474 : -30229));
                        }
                        var_30 = var_5;
                    }
                }
            }
            var_31 = var_7;
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_32 -= (((arr_2 [i_2] [12] [i_2]) ? 4643071534418378804 : (arr_2 [i_2] [4] [i_10])));
            var_33 = (-1179177760 > 13561883367937056466);
        }
        arr_41 [i_2] [i_2] = (arr_31 [i_2] [i_2] [4] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        arr_45 [i_11] = ((arr_13 [i_11] [i_11] [i_11]) >> (var_12 - 141));
        var_34 = 487609245;
    }
    var_35 = ((var_8 ? (((min((4643071534418378804 >= 30197), 1)))) : var_7));
    #pragma endscop
}
