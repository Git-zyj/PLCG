/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((!var_0) == var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_2] = (((min((max((arr_9 [i_2 - 3] [i_0] [i_0]), (arr_6 [i_2]))), (arr_5 [i_1 + 1] [i_1 + 1]))) ^ (max((((-(arr_3 [i_2])))), (arr_9 [0] [0] [i_2])))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_15 [i_0 + 2] = (arr_1 [i_3]);
                        arr_16 [i_3] [14] [i_3] [i_3] = (((max((arr_10 [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_2 - 2]), (arr_14 [i_0]))) == (((((arr_2 [i_1]) & (arr_13 [i_0] [i_1 - 1] [i_2] [i_3])))))));
                        var_14 = (min(var_14, (min(((max((arr_5 [i_1] [i_3]), (max((arr_1 [i_0]), (arr_1 [i_0])))))), (min((arr_2 [11]), (arr_10 [i_0] [i_1 - 2] [i_2] [i_3])))))));
                        arr_17 [i_3] [i_2] [i_1] [i_0 - 3] = (max((((-(arr_4 [i_3] [i_1 - 1] [i_0 - 1])))), (arr_6 [i_0])));
                    }
                    arr_18 [i_1 - 2] = (min((((arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2]) + (arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1]))), (((!(arr_2 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
