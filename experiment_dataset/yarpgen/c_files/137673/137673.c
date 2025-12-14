/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = -20973;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 = ((((((arr_2 [i_1] [i_1]) % (arr_2 [i_1] [i_1])))) ? (arr_2 [i_1] [i_1 + 2]) : (arr_6 [i_0] [i_0] [i_2])));

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (((-20973 ? 12728 : 22095)));
                        var_21 = (max(var_21, 0));
                        var_22 += 155;
                    }
                    arr_11 [i_1] = (((((var_4 ? -1 : (arr_6 [i_0] [6] [i_2])))) ? (((33 == (arr_0 [i_0])))) : var_8));
                    arr_12 [i_0 + 1] [i_2] [i_2] &= ((~-23401) & (~var_10));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_23 = (arr_10 [i_0] [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_24 -= (arr_9 [i_6] [i_5] [8] [i_0]);
                                var_25 = ((~(((var_16 || (arr_5 [i_4] [i_6]))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_26 = var_16;
                    var_27 *= var_15;
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    arr_25 [i_0 - 1] [i_0 - 1] [i_8 + 1] [i_1] = (((arr_3 [i_1 - 1] [i_1 + 1] [i_0 + 1]) ? 1023 : (((var_10 == (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                    var_28 = (max(var_28, 0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 9;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            {
                arr_31 [i_9] [i_9] = (((-19460 ? -1678904328944707320 : -1024)));
                arr_32 [i_9] [i_9] [i_9] = (48 ^ -94);
            }
        }
    }
    var_29 ^= 0;
    var_30 = (((var_7 ? (!100) : var_0)));
    var_31 = (min(var_31, (!-3638057057104030787)));
    #pragma endscop
}
