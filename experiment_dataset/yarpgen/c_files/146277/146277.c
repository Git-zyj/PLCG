/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_10 -= (min((((arr_3 [2]) ? 37324 : (arr_6 [i_2]))), (arr_3 [i_2])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [8] = ((-126 ? ((109 ? -11 : (arr_4 [i_0]))) : 246));
                            var_11 &= 1;
                            var_12 = (arr_7 [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_13 ^= ((((-2147483647 - 1) - (arr_5 [i_0] [i_0] [i_0]))) != 122);
                            var_14 = (max(var_14, (arr_4 [0])));
                            var_15 |= (((((~(arr_18 [i_0] [i_0] [i_2] [i_5])))) ? var_7 : ((-(!-122)))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_16 = (((((arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : 3780684752)) == ((((((255 ? -1 : 253))) ? -6 : 1)))));
                            var_17 *= var_8;
                            arr_22 [i_0] [i_1] [11] [i_3] [i_0] = ((!(((var_3 << (((arr_20 [i_0] [i_1] [8] [11] [i_6]) - 1482475773)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_18 = (arr_5 [i_0] [i_1] [i_1]);
                            var_19 = (0 * var_3);
                        }
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_31 [8] [i_2] = (!var_6);
                        var_20 = ((-(((((-1 ? (-2147483647 - 1) : var_5)) <= -7)))));
                        arr_32 [i_0] [i_1] [i_2] [i_2] [0] = (((((-(arr_8 [i_0] [i_1] [i_2] [i_8])))) ? (min(((max((arr_25 [10] [i_0] [i_0] [11] [i_0] [i_8] [i_0]), 65129))), (max(var_1, var_0)))) : (((1 ^ var_7) ? (arr_7 [i_1]) : ((-(arr_3 [i_8])))))));
                    }
                    var_21 = 422998639;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 24;i_10 += 1)
        {
            {
                var_22 ^= ((((((arr_37 [4]) - (arr_37 [i_9])))) ? (arr_34 [1] [i_10]) : ((max((arr_34 [i_9] [i_10 - 1]), (arr_33 [i_10 - 1]))))));
                var_23 = (max((arr_38 [i_10] [i_9]), ((248 ? -16 : 0))));
                arr_39 [i_9] [i_9] &= ((48 % ((~(arr_35 [i_10 - 3] [i_10 - 3])))));
            }
        }
    }
    var_24 |= -var_5;
    #pragma endscop
}
