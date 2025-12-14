/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((!var_10) ? (((var_2 >> (((arr_5 [i_1] [i_1]) + 21727))))) : (((arr_1 [i_0]) ? 4012257476 : (arr_0 [i_0] [i_0])))));
                var_16 -= (~((~(arr_2 [i_1]))));
                arr_6 [i_1] = ((-(max((arr_4 [16]), 4012257476))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 ^= (((arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]) / (((arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]) ? (arr_9 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3 + 2]) : var_8))));
                            arr_11 [i_0] [i_1] [i_1] [i_1] = (((((!((max(17347642964930273253, 19)))))) << ((((var_5 ? (arr_8 [i_0]) : (arr_0 [i_3 - 2] [i_3 - 1]))) - 3040139128))));
                            var_18 = (min(var_18, (((~(((arr_5 [i_0] [i_1]) / (arr_3 [i_2] [i_2] [i_2]))))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_20 &= 17347642964930273268;
                    arr_19 [i_4] [0] [2] = max((~var_1), ((var_7 + ((max((arr_18 [i_4] [i_5 - 3] [i_5 - 3] [i_5 - 3]), (arr_14 [11])))))));
                    arr_20 [i_4] [i_5] [22] [i_5] = (((((237 ? 118 : (arr_16 [i_5 - 2] [2])))) ? (arr_13 [i_5 + 1] [i_5 - 1]) : ((~(arr_16 [i_5 - 1] [2])))));
                    var_21 = (min(var_21, ((((((var_1 ? (((((arr_14 [i_6]) >= (arr_15 [i_6]))))) : ((1 ? (arr_12 [i_6]) : var_11))))) ? ((((!((min(var_9, var_0))))))) : ((~((~(arr_16 [i_4] [i_4]))))))))));
                    var_22 = (((!var_8) ? (max(9712, ((-(arr_15 [1]))))) : (((var_8 | 35611) ? (arr_14 [i_5 + 1]) : ((((arr_12 [i_6]) > -57)))))));
                }
            }
        }
    }
    #pragma endscop
}
