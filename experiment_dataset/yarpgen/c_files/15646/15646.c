/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 *= var_4;
                                var_18 = (min(0, (((((2413413885007941468 ? 255 : (arr_6 [7] [i_4])))) ? ((~(arr_7 [i_3] [i_3] [i_3]))) : -883452947))));
                            }
                        }
                    }
                    var_19 |= ((((min(((24 & (arr_0 [i_2]))), ((-883452924 ? 6864 : 883452947))))) ? ((((-2413413885007941459 / -1) ? ((var_4 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0]))) : var_5))) : ((-25 ? (arr_0 [i_0]) : var_8))));
                    var_20 = (max(var_20, ((min((arr_5 [i_0] [i_0]), ((((0 > (arr_7 [i_0] [i_0] [i_0]))) ? -8785590103369470398 : (59 % var_0))))))));
                }
                arr_13 [i_1] [i_0] = ((((~58671) + 2147483647)) << (var_13 - 97));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 ^= ((~(((arr_8 [i_0] [i_0] [i_0] [i_0]) ? ((58672 ? -1 : var_13)) : (arr_17 [7] [i_1] [i_5] [12] [i_1])))));

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_21 [i_0] [15] [i_0] [i_6] [i_6] |= ((((var_4 ? (arr_3 [i_0]) : (var_14 % var_0)))) ? (((~1) ? (min(var_10, (arr_2 [i_7] [i_5]))) : var_7)) : ((+(((arr_4 [i_0] [i_1] [i_0]) ? 35184372088832 : (arr_17 [1] [i_1] [1] [1] [i_7]))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (((max(var_0, (arr_15 [i_0] [i_7])))) ? (((max((arr_15 [i_1] [i_6]), var_5)))) : (((arr_15 [i_7] [i_6]) ? var_8 : (arr_15 [i_7] [i_1]))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19;i_8 += 1)
                            {
                                var_22 = (arr_12 [i_0] [i_1] [i_0] [i_6] [i_0]);
                                arr_25 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_8] [i_0] [i_1] [i_1] [i_0]);
                                var_23 = (min(var_23, (((((arr_18 [7] [i_8]) ? (arr_7 [i_0] [i_5] [15]) : 58675))))));
                            }
                            var_24 = (max(var_24, (((((((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), var_12))))) / (arr_6 [i_0] [i_5]))))));
                        }
                    }
                }
                var_25 &= (((((var_3 ? -109 : (((arr_8 [i_0] [i_0] [i_0] [i_0]) % 255))))) ? var_4 : -24));
            }
        }
    }
    var_26 *= 0;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_27 = ((((((-(arr_27 [i_9]))) + 2147483647)) << ((((3302049960673497686 >> (((arr_17 [i_9] [i_9] [8] [i_11] [i_10 + 2]) - 51)))) - 11))));
                    var_28 = (min(var_28, (((((((arr_10 [i_9] [1] [5] [i_11] [2]) ? 0 : var_14))) ? (min((arr_8 [i_10] [i_10] [i_10] [i_10 + 2]), var_12)) : ((max((((arr_17 [i_9] [i_10 + 1] [i_10 + 1] [i_11] [i_9]) ? var_13 : 6864)), ((var_6 ? 0 : 1))))))))));
                    var_29 &= (max((-127 - 1), -6790767343276670906));
                }
            }
        }
    }
    #pragma endscop
}
