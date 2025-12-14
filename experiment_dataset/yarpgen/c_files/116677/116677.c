/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_2] = (arr_11 [i_3] [i_3] [i_3] [i_3]);
                                var_17 = (max(((-((1 ? 1 : 1)))), ((629718770 ? (arr_2 [i_4]) : (1 >= 1)))));
                            }
                        }
                    }
                    var_18 ^= ((~(((((arr_10 [i_0] [i_0] [i_0 + 1] [i_0]) + 2147483647)) << (((arr_11 [i_0 - 1] [3] [2] [i_2 - 1]) - 49942))))));
                    arr_15 [i_2] = -11014636601891310829;
                    var_19 = 0;
                    arr_16 [i_2] [i_1] [i_2] = (min(-14, 1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] = (((((((11569152766137001469 ? 528482304 : 694583141)) + 1))) + -2095137531));
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_6] [i_7] [i_8 - 1] [i_9] = (((((((1 ? 1 : 2638930229175375123))) ? -521562664 : -1363890931098700538)) >= 1));
                                var_20 = (max(var_20, (((((((arr_20 [i_7 - 1] [i_8 - 2] [i_8 + 1]) ? 1 : (max(39015, (arr_1 [i_5 - 1] [i_9])))))) ? (arr_28 [i_9 + 1] [i_7 - 1] [i_9 + 1] [i_9] [i_7 - 1] [i_6] [i_6]) : (((arr_17 [i_7 + 1]) ? (arr_11 [i_5 - 1] [i_5 - 1] [i_7 - 1] [i_9 - 1]) : (max((arr_6 [i_5] [i_6] [i_7]), 1)))))))));
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_9] = ((((((arr_4 [i_8 - 3] [11]) ? -var_16 : 12))) ? ((2199829764 ? 9039313215863341348 : (arr_24 [i_5] [i_5 - 1] [i_5 - 1]))) : (((((((arr_5 [9]) - 0))) ? (arr_5 [i_8]) : 681999636)))));
                                var_21 = (min(var_21, (((((max(695011244, (arr_22 [i_7 + 1] [i_7 + 1])))) ? (((((arr_22 [i_9 - 1] [i_7 + 1]) >= 9407430857846210262)))) : (min((arr_11 [i_5] [i_7 + 1] [i_5 - 1] [i_8 + 2]), 6877591307572550139)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_37 [i_5] [i_6] [i_10] [i_10] = (arr_10 [i_11] [i_10] [i_5] [i_5]);
                            var_22 ^= var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
