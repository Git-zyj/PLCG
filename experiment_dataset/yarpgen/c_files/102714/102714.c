/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((~23944) ^ var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [11] [i_1] = (min((((!((min((arr_1 [i_0 - 1] [i_0]), 1)))))), (((((~(arr_3 [i_0])))) ? (arr_3 [6]) : ((min(1780456486, var_3)))))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (((((~(~489549101)))) ? 23943 : 2220));
                        var_21 += min(437714126, (arr_11 [3] [i_2] [i_1] [i_0 - 1] [i_0]));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_22 = ((+((((arr_6 [i_1] [i_1] [i_4]) < var_5)))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_23 ^= 1245604432;
                            arr_19 [i_0] [i_1] [i_2] [i_4] = var_4;
                        }
                        arr_20 [10] [6] [0] [0] &= -241;
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_23 [8] [i_1] [8] = max(var_8, var_3);
                        var_24 = (max(var_24, var_5));
                        var_25 = (~(arr_12 [i_6] [i_2] [i_1] [i_0]));
                        arr_24 [i_1] = arr_16 [i_2 - 1] [i_2 - 2];
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_7] = (arr_13 [i_1]);
                        arr_30 [i_1] [7] [i_1] [i_1] = (~532676608);
                        var_26 = (min(var_26, (!var_9)));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_27 = (max(((max(var_0, 10846))), 1913817845749938469));
                            var_28 = 1;
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_29 &= ((var_11 ? (((!(((1245604432 ? var_3 : (-9223372036854775807 - 1))))))) : 31762602));
                            var_30 = (max(var_30, var_4));
                        }
                    }
                    arr_36 [i_1] = ((-(max((!1), var_8))));
                    arr_37 [i_1] = (!var_16);
                }
                for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_31 -= (23125 | 1780456486);
                    arr_41 [i_0] [i_1] [i_10] = (((28598 ? (arr_21 [i_10 - 1] [12] [i_10] [1]) : (arr_21 [i_10 + 2] [i_10] [15] [i_10]))));
                }
            }
        }
    }
    var_32 = (min(var_32, ((~(((~var_9) % ((var_2 ? 61776 : -17009))))))));
    #pragma endscop
}
