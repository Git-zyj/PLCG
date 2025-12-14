/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, -3795876842992750490));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_1] [i_2] = max(((min((arr_1 [i_0]), (min(-3442796031920406803, var_1))))), ((-4504003697247665322 ? (arr_9 [i_2] [i_1]) : ((0 ? (arr_5 [1] [i_0]) : (arr_12 [i_3]))))));
                    }
                }
            }
            arr_15 [13] [i_1] = (((((((max((arr_4 [6] [i_0] [i_0]), 1))) * (arr_2 [i_1])))) ? 1 : ((var_10 / (((arr_3 [i_0] [i_1] [i_1]) ? (arr_12 [i_0]) : (arr_10 [i_0])))))));
            arr_16 [i_0] [i_1] [i_1] = var_9;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_16 -= (1 > var_4);
                        var_17 = (-(((arr_7 [i_0] [i_4] [i_4] [i_1]) ? 4294967295 : var_12)));
                        arr_23 [i_0] [12] [i_0] [i_0] = (((((((max(1, (arr_3 [i_0] [i_4] [i_5]))))) - (((arr_4 [i_5] [i_4] [i_0]) ? (arr_19 [i_0] [i_1] [i_5]) : (arr_22 [i_0] [i_0] [17]))))) / -15));
                    }
                }
            }
            arr_24 [i_1] = var_9;
        }
        var_18 ^= (0 ? (((((3442796031920406802 ? 2047 : -10486))) - 7)) : (((max(var_13, var_13)))));
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_19 = (((45968 ? ((min(var_13, 128))) : var_14)));
        arr_27 [i_6] [i_6 + 3] = (arr_25 [i_6 - 2]);
        var_20 = var_12;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    {
                        var_21 &= (max((arr_21 [8] [9] [i_8] [i_9] [i_9]), (arr_32 [14])));
                        arr_36 [i_6] [i_7] [i_6] [i_9] = (min((-127 - 1), 38431));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            var_22 = (((arr_4 [i_10] [i_10] [i_6 - 2]) ? (arr_40 [i_6 + 3] [i_6 - 2]) : var_12));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    {
                        var_23 = (((-32762 == 65521) ? ((~(arr_8 [i_10]))) : (arr_37 [i_6] [i_6 + 1] [i_11 - 1])));
                        var_24 = var_12;
                        var_25 = (((arr_29 [i_6 - 2] [i_10 + 2]) ? (arr_29 [i_6 - 2] [i_10 + 2]) : var_9));
                    }
                }
            }
            var_26 = (arr_21 [i_6] [i_10 + 1] [17] [13] [i_10 - 1]);
        }
    }
    var_27 += (min(((var_8 < (var_6 + var_7))), (((!-217939341) != ((min(var_12, var_1)))))));
    #pragma endscop
}
