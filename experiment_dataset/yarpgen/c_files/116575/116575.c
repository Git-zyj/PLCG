/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = (((arr_7 [i_0] [1] [i_0] [i_0] [i_0] [1]) < (arr_1 [i_0 + 1] [i_0])));
                        var_17 = ((-(var_3 + var_1)));
                        arr_10 [i_1 + 1] [4] [5] [8] [i_0] = (min((var_1 / var_11), (((~(arr_1 [i_0 - 3] [i_0]))))));
                    }
                }
            }
        }
        var_18 = ((max(var_1, (arr_7 [i_0 - 3] [i_0 - 1] [i_0 - 3] [i_0] [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_19 = (min(var_19, (((((-(arr_6 [i_4 - 1] [6] [14] [i_6 + 2] [i_6]))) >= (max((arr_6 [i_4 - 1] [4] [i_4] [i_6 + 1] [i_6]), (arr_1 [i_4 - 1] [6]))))))));
                        var_20 = (((var_2 == (arr_3 [i_4 - 1] [i_0 + 1]))));
                        var_21 = (arr_6 [i_0] [i_0] [1] [i_5] [i_0]);
                        arr_19 [i_0] [i_0] = (((((((max((arr_14 [i_0] [i_4 + 1] [i_6]), (arr_1 [i_0] [i_0])))) ? (arr_18 [0] [i_5 + 3] [i_6 - 1]) : (arr_2 [i_0 - 3] [i_6 + 3])))) ? (max((max((arr_11 [i_0] [i_4]), (arr_15 [i_0] [i_4] [i_5] [4]))), (arr_2 [i_5 - 1] [i_6]))) : (arr_11 [i_4 + 1] [i_4 + 1])));
                    }
                }
            }
        }
    }
    var_22 ^= var_10;
    var_23 = (max(((~(var_5 > var_14))), var_6));
    #pragma endscop
}
