/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [0] |= (max((arr_2 [i_0 - 1]), ((max((arr_2 [i_0 + 1]), (arr_3 [2] [2]))))));
                var_14 = (min(var_14, (arr_1 [2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (((arr_10 [i_0 - 2] [i_1 + 1]) ? (((arr_10 [i_0 + 1] [i_1 + 2]) ? (arr_10 [i_0 - 1] [i_1 + 1]) : (arr_10 [i_0 - 1] [i_1 + 2]))) : (arr_10 [i_0 - 1] [i_1 - 2])));
                            arr_13 [i_2] [i_2] [i_2] [i_2] &= (min(((((arr_8 [i_3]) ? var_12 : ((~(arr_10 [i_0] [i_0])))))), (arr_9 [i_0 + 1] [i_0] [i_1] [i_2] [i_2] [i_0])));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_15 |= arr_8 [i_2];
                                arr_17 [i_0] [i_0] = (min((arr_14 [i_4] [6] [i_3] [i_3] [6] [6] [i_0]), (((((var_1 >> (((arr_0 [i_1]) + 10280))))) ? 3 : (arr_15 [1] [i_1 + 2] [i_0] [i_1 + 2] [i_0] [5] [i_4])))));
                                var_16 = (max(var_16, ((((1 - 128) ? ((28579 ? 512 : (max((arr_3 [i_4] [i_4]), (arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [6] [i_4]))))) : ((1 ? 5 : (arr_15 [i_0] [i_1] [i_4] [i_4] [i_2] [i_4] [i_0]))))))));
                                arr_18 [i_0] [i_2] [i_2] [i_2] [2] [i_1 - 1] [i_0] = (((((!(arr_14 [i_3] [1] [1] [i_3 + 2] [4] [i_0 + 1] [3])))) >> (((((arr_14 [i_4] [i_4] [i_3] [i_3 + 1] [i_1] [i_0 - 1] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) + 10270))));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_22 [i_5] [i_3] [i_0] [i_0] [i_1 + 2] [i_0] = ((((1 ? 128 : 240))));
                                arr_23 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0 - 2] = (min(var_10, ((min(var_0, (arr_5 [i_0]))))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_6] &= ((-((((var_3 * (arr_16 [i_6] [i_3] [i_0 + 1] [i_2] [i_1 - 2] [i_1] [i_0 + 1])))))));
                                var_17 = (min(var_17, (((((((arr_16 [i_1 + 2] [i_1] [i_0] [i_2] [i_0 - 2] [i_0] [i_0 - 1]) ? (var_1 ^ var_3) : -124))) >= (arr_20 [i_3 + 3] [i_2] [i_2] [i_0]))))));
                            }
                        }
                    }
                }
                arr_27 [6] [i_1] [6] &= (min((arr_10 [i_0 - 2] [i_0 - 2]), -1));
            }
        }
    }
    var_18 = var_8;
    #pragma endscop
}
