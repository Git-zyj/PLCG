/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((~(arr_10 [i_3] [i_2] [i_1])));
                            var_19 = (((((((-69 ? -514890365 : -1785587709)) - ((1 ? 127 : 0))))) && ((max((min(43, (arr_2 [i_0]))), ((max((arr_9 [i_1]), 127))))))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_3] = 1;
                            arr_15 [i_1] [i_1] = (((((arr_8 [3] [i_1] [i_2 - 1] [3]) ? 1 : (arr_10 [5] [i_1] [i_2 + 1]))) <= (~1)));
                        }
                    }
                }
                var_20 = (min(var_20, ((max(((((127 ? -1348094020 : 14083)))), (((max(0, 1)) ? (1 && 104) : (((arr_10 [i_1] [i_0] [i_0]) ? (arr_9 [i_1]) : 23684)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        var_21 = (min(var_21, (((((((arr_22 [i_7 - 1] [i_6] [i_4 + 1]) ? (arr_22 [i_7 + 1] [i_4 + 1] [i_4 + 1]) : (arr_19 [i_7 - 1] [i_4] [i_4 + 1])))) ? (((!(arr_19 [i_7 - 1] [i_4] [i_4 + 1])))) : (((arr_22 [i_7 - 1] [i_4] [i_4 + 1]) ? -527084189 : (arr_19 [i_7 + 1] [i_5] [i_4 + 1]))))))));

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_22 -= ((max(-var_15, 19)));
                            arr_29 [i_4] [6] [i_4] [6] [i_8] = ((+(max((((arr_26 [i_4] [i_5 - 2] [i_6] [i_7 + 1] [i_8]) ? 1 : 1)), (((var_7 != (arr_25 [i_4] [i_5] [i_6] [i_4] [i_8]))))))));
                            var_23 = (max(var_23, (~1)));
                            var_24 *= ((((max(((~(arr_28 [i_5] [6] [i_5]))), ((-224702153 ? (arr_19 [i_8] [i_6] [i_4 + 1]) : (arr_22 [i_4] [i_4] [i_8 - 1])))))) ? 1 : (((~127) % (arr_20 [i_4 + 1] [i_5 - 1])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_4 - 1] [i_5] [i_4] [1] = (((2147483647 != (arr_23 [i_4] [i_4]))));
                        arr_33 [i_4] [i_4] [i_5 - 2] = ((0 + ((var_4 ? (arr_17 [i_4]) : -122))));
                    }
                    arr_34 [i_4] [i_4] [i_6] = (min(((min((max(50304, 0)), var_15))), (min(((max(8, (arr_20 [i_5 + 1] [i_5])))), (((arr_22 [i_6] [i_5] [i_6]) ? var_17 : 0))))));
                    arr_35 [i_5] |= (~-40);
                }
            }
        }
    }
    #pragma endscop
}
