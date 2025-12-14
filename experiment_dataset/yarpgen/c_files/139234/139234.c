/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] = (arr_10 [i_0] [i_1] [5] [6] [i_2] [10] [i_2]);
                                var_20 = (((arr_10 [i_2] [i_3] [i_3] [i_2] [i_1] [i_1] [i_2]) * 9));
                            }
                        }
                    }
                    arr_12 [i_2] = (!var_7);
                }
            }
        }
        var_21 = (!243);
        arr_13 [i_0] [i_0] = (((var_15 + 9223372036854775807) >> (var_4 - 4818188806310752201)));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_16 [i_5] = 232;
        var_22 ^= var_3;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_23 [2] [i_6] [i_7] = (((max(2, var_15)) ^ 1));
                    var_23 = (((((!(arr_19 [i_7] [i_6 + 1])))) ^ (((27797 == (max(var_10, 709601764)))))));
                    arr_24 [i_7] [i_7] [i_5] &= (arr_19 [i_5] [i_6 - 1]);
                    arr_25 [i_6] [i_6] = ((+(max((var_7 == -3), 650440980))));
                }
            }
        }
        arr_26 [i_5] [i_5] = -3346434134473668581;
        arr_27 [i_5] [i_5] = 1;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        var_24 = (max(var_24, (((-(arr_29 [i_8] [i_8]))))));
        arr_31 [1] |= arr_28 [i_8];
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_35 [i_9] = (max(0, ((((~114) >= (arr_34 [i_9]))))));
        arr_36 [i_9] = ((-22769 / 178) ? (var_16 << var_2) : (arr_34 [3]));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_41 [4] = (~22740);
        arr_42 [i_10] = (66 ^ -26590);
    }
    var_25 = (!33420);
    #pragma endscop
}
