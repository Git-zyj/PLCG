/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_5 << (((var_0 >= ((var_1 ? 3 : -1631184646850874852)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 *= (~32748);
                                var_13 = (max(var_13, (((8191 ? ((((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]) - -32748))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : -6557))) : (((arr_0 [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]) : var_2)))) : ((min(((13988847443098206537 ? (arr_4 [i_0] [i_1] [i_3] [i_4]) : 1648012401)), (((arr_8 [i_0] [i_3] [i_2] [i_3]) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]) : -1234466659))))))))));
                                arr_12 [i_0] [i_1] [i_4] [i_0] [i_4] [i_1] [i_2] = ((((((min(-2635460571118036717, -32748))) ? (arr_6 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((min((arr_0 [i_0]), 8201)))))) > (((~(arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_14 = (arr_0 [i_0]);
                                var_15 = (arr_4 [i_3] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_5] [i_0] = (arr_1 [i_1]);
                    arr_17 [i_5] [i_1] [i_1] [i_0] = 126;
                }
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    var_16 = 8199;
                    var_17 = ((3 ? (arr_9 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_0] [i_0]) : (((arr_11 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6 - 2]) ? (arr_11 [i_6 + 1] [i_6] [i_6 - 3] [i_6] [i_6 + 1]) : (arr_11 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6 - 1])))));
                    arr_20 [i_6] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    arr_21 [i_6] [i_1] = ((((((arr_11 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 3] [i_6]) / (arr_11 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6])))) ? (arr_11 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 3] [i_6]) : ((-1 ? (arr_11 [i_6 - 3] [i_6 + 1] [i_6] [i_6 + 1] [i_6]) : (arr_11 [i_6 - 3] [i_6 + 1] [i_6] [i_6 - 3] [i_6])))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_24 [i_0] [i_1] [i_7] |= (arr_23 [i_7] [i_1] [i_0]);
                    var_18 = (min(var_18, (((var_8 ? 1388488143430802346 : ((((arr_18 [i_1]) ? 1 : (((arr_6 [i_7] [i_7] [i_1] [i_0] [i_0]) & (arr_9 [i_7] [i_1] [i_1] [i_0] [i_0])))))))))));
                    var_19 = ((~(((arr_19 [i_0] [i_7] [i_7]) ? (arr_5 [i_1] [i_7]) : (arr_22 [i_0] [i_0])))));
                }
            }
        }
    }
    var_20 = (0 || var_3);
    var_21 = ((min(((max(var_4, var_2)), var_9))));
    #pragma endscop
}
