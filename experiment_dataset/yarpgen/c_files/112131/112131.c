/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_0]))) & (((arr_3 [i_1]) ? (arr_3 [6]) : (arr_3 [i_0])))));
                var_18 = ((((((arr_6 [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : 10))) ? (((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [7] [i_1] [i_0]))) : ((min((arr_2 [i_0]), (arr_2 [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_19 -= (!10);
                    arr_15 [i_2] [i_3] [7] = (((arr_8 [i_4 - 2]) ? (arr_9 [i_3 + 1]) : (((arr_8 [i_2]) | (arr_13 [10] [i_3])))));
                    var_20 = (((arr_7 [i_3] [i_3 + 2]) ? (arr_7 [i_3 + 4] [i_3 + 4]) : (arr_7 [3] [i_3 + 1])));
                }
                arr_16 [i_3] [i_3 + 1] = (((((-31180 ? (arr_13 [i_3] [i_3]) : -123))) ? (((arr_14 [i_3 + 1] [i_3] [i_3 + 2]) ? ((-12 ? (arr_13 [i_2] [i_3]) : 17293091234608922877)) : (~20997))) : ((~(min((arr_10 [i_3 + 1]), (arr_13 [i_2] [i_3])))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_25 [i_2] [10] [i_3] [i_5] [i_2] [i_3] [i_7 - 1] = -32752;
                                var_21 -= ((-((((((arr_12 [i_2] [i_3] [i_6]) % (arr_20 [i_2] [i_2] [i_5] [i_2] [i_2] [i_7 + 1])))) ? (((-(arr_7 [i_5] [i_6])))) : (arr_23 [i_2] [i_2] [i_2] [i_2])))));
                                arr_26 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3] = (((arr_24 [9] [1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) * ((-(arr_24 [i_7] [i_7] [i_7] [i_7 - 1] [5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
