/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((var_2 ? 4294967268 : var_9))) ? (3431966080 > 1227486367) : var_14);

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_1] [i_3] [12] [i_1] [i_1] [i_1] = ((arr_3 [i_1 + 2] [i_1] [i_3 - 2]) & (arr_3 [i_1 + 2] [i_1] [i_3 - 2]));

                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            var_17 = (((arr_10 [i_2 + 1] [i_3 - 4] [i_3 - 4] [i_4 - 1] [i_4]) ? (arr_6 [i_0] [i_4 + 2] [i_0] [i_3 + 1]) : -1815697219));
                            var_18 = (min(var_18, ((((arr_7 [i_3] [i_3] [i_2]) ? (arr_7 [i_3] [i_1 - 2] [i_3]) : (arr_7 [i_2] [12] [i_4]))))));
                            var_19 = var_12;
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] = ((var_2 ? 223 : (arr_0 [i_1 - 3])));
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_3] [i_3] [2] = var_0;
                            var_20 = (arr_17 [i_3] [i_5]);
                            var_21 = 1023;
                        }
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        var_22 |= 13;
                        arr_21 [i_6] [i_1] [i_6] [i_1] [i_1 - 1] [i_6] = (i_1 % 2 == zero) ? ((((11342 << (((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2 + 1] [i_6 - 1]) + 9386)))))) : ((((11342 << (((((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2 + 1] [i_6 - 1]) + 9386)) - 19445))))));
                    }
                    var_23 = (((arr_19 [i_1 - 3] [i_1 - 2] [i_2 - 2] [i_1]) ? (((2179204788 ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (arr_10 [i_0] [i_1] [i_1] [i_2] [5])))) : (((arr_1 [i_0] [i_0]) ? var_2 : 1))));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 11;i_7 += 1)
                {
                    var_24 = var_6;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 ^= ((var_0 ? (arr_19 [i_0] [i_1 + 1] [i_7 - 1] [i_7]) : (arr_27 [i_1 - 2] [i_0] [i_8] [i_8 + 2])));
                                arr_30 [i_0] [i_1 + 1] [i_7] [i_1] = (!28);
                                var_26 = ((((arr_0 [i_9]) != 1)));
                                var_27 ^= (arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_7]);
                            }
                        }
                    }
                    var_28 ^= ((-150870916 - ((((-9223372036854775807 - 1) > 32)))));
                    arr_31 [i_1] [i_1] [i_1] = (((((523205084 ? 1405 : 27))) ? ((5369022271753269350 ? var_8 : (arr_29 [i_0] [i_0] [i_0] [1] [i_0] [i_0]))) : (arr_2 [i_1 - 3] [i_1])));
                    arr_32 [i_0] [i_1] [7] [i_7] = (arr_20 [i_1]);
                }
                var_29 *= (arr_7 [12] [i_1] [1]);
                var_30 = (-9223372036854775807 - 1);
            }
        }
    }
    var_31 = 140737488355327;
    #pragma endscop
}
