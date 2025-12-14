/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = ((1 ? -1 : (((((max(5, 27))) ? ((69188338 ? 14306016 : 22858)) : 1)))));
                    var_22 = (min(var_22, (7 | 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_1 - 1] [i_3] [i_1 - 1] [2] [i_1 + 1] = (min((-27 * var_19), ((((((var_13 & (arr_9 [i_4] [i_1 + 1] [i_3] [14] [i_1 + 1] [14])))) ? var_13 : (arr_14 [1]))))));
                                var_23 &= ((1 | ((var_0 * (arr_15 [i_4 - 1] [i_2])))));
                            }
                        }
                    }
                    var_24 = 4294967263;
                    var_25 = (min(var_25, (arr_3 [i_2] [1] [1])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_25 [10] [i_5] [i_5] [i_5] &= (((arr_7 [i_0] [i_5] [1]) > (((+(((arr_24 [6]) ? (arr_18 [i_0] [1] [17]) : 1)))))));
                    arr_26 [i_6] = min(12605, 1850347879);
                }
            }
        }
        var_26 = (((((((var_3 * var_5) < (min(37826, -1)))))) & 14411486008485443679));
        var_27 |= ((((((((arr_24 [18]) ? var_2 : var_4)) + (149 % -11264)))) * ((18446744073709551614 ? 8 : -3))));
    }
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_38 [i_7] [i_8] [i_9] [i_10] [14] [i_10] = ((var_1 ? var_7 : 4));
                        var_28 -= (min((arr_10 [i_7] [15] [i_7] [i_10] [10]), ((min(((((arr_1 [i_8] [i_9]) != (arr_37 [i_7] [i_7] [i_7] [i_9] [i_7])))), 1778473364)))));
                        arr_39 [i_10] [i_9] [i_7 + 2] [i_7 + 2] [i_10] = (arr_24 [i_10]);
                    }
                }
            }
        }
        var_29 |= ((((((arr_3 [i_7 + 2] [i_7 - 1] [i_7 + 2]) ? (arr_3 [i_7 + 1] [i_7 - 1] [i_7 + 2]) : (arr_3 [i_7 + 1] [i_7 - 1] [i_7 - 1])))) || (arr_3 [i_7 + 2] [i_7 - 1] [i_7 + 2])));
    }
    #pragma endscop
}
