/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 ^= ((((160 && (arr_0 [2])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        var_15 &= 0;
                        var_16 *= (arr_4 [i_0] [i_1] [0]);
                        arr_8 [i_0] [i_0] [i_0] [i_3] = var_7;
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(((~135) ? (arr_1 [i_0] [i_0]) : (!var_12)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_17 = (arr_13 [i_0] [i_1] [i_2] [i_1]);
                            var_18 ^= ((~(arr_17 [8] [i_2 - 1] [i_1] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_19 = (160 <= 17);
                            var_20 = (arr_20 [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            var_21 |= ((0 ? 1 : -11123));
                            var_22 ^= (((!-6774903636083725580) ^ var_8));
                            arr_25 [i_0] [i_1] [i_0] [i_1] [i_0] = (((((~(arr_7 [i_0] [0] [5] [i_0])))) ? ((((!(arr_14 [i_7] [i_1] [i_7]))))) : var_8));
                        }
                        var_23 += (arr_18 [i_2] [2] [i_2] [9] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_24 = (min((((!((max(9199505662670419043, -9223372036854775785)))))), 4294967278));
                        var_25 = ((((((((!(arr_7 [i_1] [i_1] [i_8] [i_0])))) >> (((!(arr_22 [i_2] [i_0]))))))) ? (((arr_11 [i_0] [i_2 - 1] [4] [i_0] [i_0]) ? ((-(arr_23 [i_0] [i_1] [i_2]))) : -2018490040325855497)) : ((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((!(arr_1 [i_0] [i_0])))) : (arr_4 [i_2 - 1] [i_2] [i_2]))))));
                    }
                    var_26 = (arr_23 [i_1] [i_1] [2]);
                    var_27 = (arr_17 [i_0] [i_1] [i_0] [i_0]);
                }
            }
        }
        var_28 = ((!((!(arr_20 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_29 = ((!((max(var_6, var_1)))));
    #pragma endscop
}
