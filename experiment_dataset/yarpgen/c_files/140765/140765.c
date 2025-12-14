/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (((min(var_3, var_6)) - 2729068242)))) >> 0));
    var_12 = ((~(min(var_1, var_8))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = (((((min((arr_5 [i_4] [i_3] [i_0] [i_0]), (arr_6 [0]))))) ? (((arr_3 [i_2] [i_3 - 1] [i_2]) ? (arr_3 [i_0] [i_4] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : ((-((min((arr_1 [0]), (arr_6 [i_0]))))))));
                                arr_14 [i_2] [i_1] [i_2] [i_1] [i_1] [i_2] = (i_2 % 2 == 0) ? (((var_2 / ((((!(arr_9 [i_3] [i_3 - 1] [i_4] [i_4] [i_2])))))))) : (((var_2 * ((((!(arr_9 [i_3] [i_3 - 1] [i_4] [i_4] [i_2]))))))));
                            }
                        }
                    }
                }
                var_13 = ((min((-32767 - 1), ((~(arr_2 [i_0] [i_1]))))) + -76);
                arr_15 [i_1] = (((((-(((-32767 - 1) ? 48306 : -113))))) ? (min((arr_9 [i_1] [i_1] [i_1] [i_1] [i_0]), (arr_3 [i_0] [5] [i_0]))) : (((arr_5 [i_0] [i_0] [i_0] [0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : ((85 << (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]) - 2444931126679179614))))))));
                arr_16 [i_0] [i_0] [i_0] = 15;
            }
        }
    }
    #pragma endscop
}
