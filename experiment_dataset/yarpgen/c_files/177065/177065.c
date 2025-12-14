/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, (~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = (((max((arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_2]), var_9))) ? (((arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) ? (arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((246 >= (arr_9 [i_4 - 4] [i_4 + 2] [i_0] [i_4])))));
                                var_14 = (~3993);
                            }
                        }
                    }
                }
                arr_17 [i_0] = ((((((((arr_9 [i_1] [i_0] [i_0] [14]) ? 14986 : (arr_15 [3] [i_0] [i_1] [i_1] [i_1])))) ? (max((arr_8 [12] [i_1] [1] [i_1]), 4873)) : (((4010 ? (arr_3 [i_0] [8]) : (arr_1 [i_1])))))) * (((348769535 / (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]))))));
                arr_18 [3] [i_0] [i_1] = (~(arr_8 [i_1] [1] [1] [i_0]));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_15 = (var_5 | var_9);
                                var_16 = (max(var_16, ((((((arr_24 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [15]) ? (arr_14 [i_0] [i_0] [3] [i_0] [i_0] [11]) : (arr_24 [i_0] [i_1] [i_5] [13] [i_7 - 1]))) == (min((((arr_1 [15]) & (arr_7 [i_6] [i_1] [i_6] [i_6]))), 51)))))));
                                arr_27 [i_0] [i_0] = ((+(((arr_6 [i_0] [i_0]) | (max(4133178539, 10238))))));
                                var_17 = ((((!(arr_24 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7]))) || (((149800816 ? (arr_9 [12] [12] [i_0] [12]) : 117)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
