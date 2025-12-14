/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (max(var_17, (arr_6 [0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (-(arr_0 [i_1 + 2]));
                                arr_13 [i_0] [i_0] [i_3] [i_3] [i_3] = (min(var_3, -6506265612865095723));
                                arr_14 [i_2] [3] [6] [i_3] [i_3] = ((46976 ? (((~((min((arr_12 [i_3] [i_1 - 1] [i_2] [i_3] [11]), var_9)))))) : 6506265612865095706));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = (max((min((max((arr_1 [1]), 5584641489643759171)), (1 != var_9))), (arr_12 [i_1] [i_1 + 3] [i_1] [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [2] = ((((-57 == (arr_6 [i_5]))) ? 31 : var_0));
                    arr_20 [i_1] [i_1 + 2] [i_1] = ((-(arr_9 [i_1 - 2])));
                    arr_21 [i_0] [i_1 - 1] [i_5] [i_5] = ((var_12 / (arr_17 [i_0] [i_0] [i_0])));
                    var_21 *= var_6;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_22 = (min(((-32 ? (arr_22 [i_1 + 1] [i_1] [i_1 - 1] [i_6]) : (arr_4 [i_1 + 1] [i_1]))), 6506265612865095726));
                    var_23 = (max(var_23, (((((((arr_22 [i_0] [i_1] [5] [i_6]) ? ((var_1 ? (arr_4 [4] [i_0]) : (arr_8 [i_0] [i_1 + 3] [i_6]))) : (arr_12 [i_1] [i_1] [i_1] [i_1] [12])))) ? (arr_10 [i_0] [i_1] [i_6] [2]) : (691716426 + 1301371687))))));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_24 ^= (~var_10);
                    arr_28 [i_0] = (arr_17 [0] [i_1 - 1] [8]);
                }
                arr_29 [i_0] [7] = -3;
                var_25 = 1337489019;
            }
        }
    }
    var_26 -= 4294967294;
    var_27 = var_16;

    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_28 &= (arr_6 [7]);
        arr_33 [i_8] [i_8] = ((!((((!(arr_12 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
    }
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_29 += var_9;
        var_30 ^= var_8;
        var_31 = (max(-864645980, (-2147483647 - 1)));
    }
    #pragma endscop
}
