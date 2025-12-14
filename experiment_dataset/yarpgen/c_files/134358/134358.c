/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 = 0;
        var_12 = (min(var_12, var_6));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        {
                            var_13 = ((!((max((arr_12 [i_0]), (arr_12 [i_0]))))));
                            arr_15 [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] [i_3] |= (arr_12 [i_3]);
                            arr_16 [i_0] = 23;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_14 ^= var_1;
                        var_15 -= (((arr_7 [i_1] [i_0 - 2] [i_5 + 2]) ? (((arr_5 [i_6]) / -var_6)) : (max(-1, (max(var_5, var_5))))));
                    }
                }
            }
            var_16 = (min(var_16, var_3));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_17 = ((+((((3641381753 && 1311107686) >= var_7)))));
                        var_18 = ((-87 ? 0 : 9223372036854775807));
                    }
                }
            }
        }
        var_19 += ((((1774223153 && (!3527276940))) ? ((-1151325360 ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_9 [i_0 - 3] [1] [i_0]))) : ((min((arr_10 [i_0 + 1] [10]), (arr_6 [i_0 + 1] [0]))))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_20 &= (min((max((arr_0 [i_9] [i_9]), (arr_37 [1] [1] [i_13] [i_13] [i_13] [i_13]))), ((((-1 % var_9) ? ((max(-18, -1))) : var_8)))));
                                var_21 += (max(((((arr_35 [i_11] [i_9] [i_10 + 1] [i_12] [i_10 + 1]) / (arr_35 [i_11] [i_11] [i_10 + 2] [i_11] [i_11])))), (max((((4252958055351528860 ? 1 : (arr_4 [i_11] [i_10] [i_11])))), (max((arr_8 [i_12] [i_11] [i_10] [i_9]), -1))))));
                            }
                        }
                    }
                    var_22 = (((((arr_24 [i_10] [i_10 + 1] [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10 + 1]) ? (arr_24 [i_11] [i_10 + 1] [i_10 - 1] [i_10 - 1] [3] [i_10 - 1]) : var_10)) > (((~(~-1))))));
                }
            }
        }
    }
    #pragma endscop
}
