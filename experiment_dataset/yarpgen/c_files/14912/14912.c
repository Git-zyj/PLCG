/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((~(var_6 & 0)));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = max((((!(arr_3 [i_2])))), (min((max((arr_8 [i_0] [i_1] [i_3]), 64014)), var_6)));
                        }
                    }
                }
                var_11 *= ((!(((-(arr_8 [i_0] [i_0] [1]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_12 = (((((((((arr_9 [i_4] [i_4]) ? 11910753727915094392 : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ? (64038 >= var_3) : (arr_5 [i_4] [i_4] [i_4])))) ? ((-(arr_12 [i_4] [i_4] [i_4] [i_4]))) : (arr_16 [i_4] [i_4])));
        arr_17 [i_4] = (((max((arr_5 [i_4] [i_4] [i_4]), (arr_8 [i_4] [i_4] [i_4]))) >> (((arr_8 [i_4] [i_4] [i_4]) + 20794))));
        var_13 = ((((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) < (arr_4 [i_4]))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_14 = (arr_18 [i_4] [i_4] [i_7]);

                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            arr_30 [i_5] [i_7] [i_6] [i_5] = (max((((((max((arr_16 [i_8] [i_7]), (arr_27 [i_4] [i_4] [i_5] [i_6] [i_7] [i_8])))) * 1966440066))), (max((arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]), var_0))));
                            arr_31 [i_4] [i_5] [i_6] [i_4] [i_5] [i_4] [i_6] = ((!(((((((arr_9 [i_6] [i_5]) ? (arr_3 [i_8]) : 65535))) ? ((max((arr_26 [i_4] [i_5] [i_6] [i_7] [i_8]), (arr_4 [i_4])))) : (!54166))))));
                            arr_32 [i_5] = (((((!(((arr_24 [i_6] [i_5]) < (arr_12 [i_4] [i_5] [i_6] [i_8])))))) * (1489 & 1527)));
                        }
                        arr_33 [i_4] [i_5] [i_6] [i_7] [i_5] = (arr_11 [i_4] [i_4] [i_4] [i_6] [i_6] [i_7]);
                    }
                }
            }
        }
        var_15 = (min(var_15, ((max(-110, ((-(arr_2 [i_4]))))))));
    }
    #pragma endscop
}
