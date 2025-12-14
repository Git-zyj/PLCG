/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0 - 1] = (arr_0 [i_0]);
        arr_5 [i_0] [i_0] = ((-(((arr_0 [i_0 + 1]) ? var_5 : (min((arr_1 [i_0]), var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_12 [i_1] = (((arr_8 [i_0 - 1]) ? (2495524325629166321 * 2092916179) : (min((arr_8 [i_0 + 1]), (arr_8 [i_0 - 1])))));
                    var_14 = (arr_2 [i_0]);
                    var_15 = (arr_7 [i_0 + 1] [i_0 + 1]);
                    var_16 = ((((4279266774 ? (2092916185 && 15951219748080385293) : (~24)))) != 2495524325629166321);
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = ((((((arr_2 [i_3 - 1]) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 - 1])))) ? (((arr_14 [i_3]) ? (((arr_8 [i_3]) & (arr_0 [i_3]))) : ((((arr_0 [i_3]) ? (arr_10 [i_3] [i_3] [i_3 - 1]) : (arr_1 [i_3 - 1])))))) : (((((((arr_13 [i_3]) * (arr_14 [i_3]))) < (arr_6 [i_3])))))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        var_17 ^= (max(((+((var_12 ? (arr_11 [i_3] [i_3] [i_5] [i_6]) : (arr_9 [i_3 - 1]))))), (arr_3 [i_4])));

                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_18 = 0;
                            var_19 ^= (arr_11 [i_7 + 1] [i_6 + 2] [i_4] [i_3 - 1]);
                        }
                        arr_24 [4] [i_4] [i_3] [i_6 + 1] = (arr_8 [i_3]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_20 = ((-(arr_9 [i_3 - 1])));
                        arr_31 [i_3] [i_10] = (arr_26 [i_3 - 1] [i_3] [i_3]);
                        var_21 ^= ((!((max(53827, -8)))));
                    }
                }
            }
        }
    }
    var_22 = (((~var_6) + var_1));
    var_23 = (~var_8);
    #pragma endscop
}
