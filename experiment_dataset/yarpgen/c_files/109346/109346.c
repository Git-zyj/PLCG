/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min((((((arr_1 [i_1]) ? 103 : 2492076085771746044)) / var_8)), var_11));
                    var_15 = var_4;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = var_11;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = (arr_13 [i_3] [i_4] [i_3] [i_4]);
                    var_18 = ((((!(65510 | 14334499865702778435)))));
                    var_19 = ((((((var_8 != (((arr_10 [i_3] [i_3] [i_5]) ? 65510 : (arr_9 [i_3] [i_3]))))))) >= ((4112244208006773181 ? 18446744073709551615 : -984325741570706807))));
                    var_20 = (min(var_20, ((((!(arr_13 [i_4] [i_4] [16] [i_5 - 2])))))));
                    var_21 = (((18446744073709551595 ? (arr_14 [i_5 + 1] [i_4]) : (((var_1 ? (arr_11 [1]) : (arr_11 [i_5])))))));
                }
            }
        }
        var_22 = ((~((((2640740700 < var_6) == (min((arr_11 [i_3]), var_1)))))));
    }
    #pragma endscop
}
