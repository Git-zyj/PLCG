/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, var_3));
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [i_0]);
                arr_6 [4] = (max(((min(((min((arr_2 [i_1]), (arr_2 [i_0])))), (min((arr_4 [i_0]), (arr_3 [i_0] [i_0])))))), (max((arr_4 [i_0]), (((arr_3 [i_1] [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_1])))))));
                var_15 = ((((max((((arr_3 [i_0] [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_0] [i_0]))), ((max((arr_0 [i_0]), (arr_4 [i_0]))))))) ? (min((arr_4 [i_1]), (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_3 [5] [5]))))) : (min((arr_0 [i_0]), (((arr_4 [i_1]) ? (arr_4 [i_0]) : (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_3] = max((min((((arr_1 [i_1]) ? (arr_4 [10]) : (arr_7 [i_0]))), ((min((arr_11 [i_0] [i_1] [10]), (arr_2 [i_0])))))), ((min((arr_12 [i_0] [i_1]), (arr_9 [i_2] [i_0] [i_2 - 1])))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (max(((((max((arr_11 [i_0] [i_0] [i_0]), (arr_0 [i_0])))) ? (min(134213632, 124)) : ((min((arr_8 [i_2] [i_2] [i_2] [i_2]), (arr_10 [i_0] [i_3] [i_2 - 2] [i_3] [i_2 - 2] [i_3])))))), (arr_3 [i_1] [i_3])));
                            arr_15 [i_0] [i_0] [i_0] [4] [i_0] = min((max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_1] [i_2]))), (arr_3 [i_1] [4]))), ((min((max((arr_9 [i_1] [i_2] [i_1]), (arr_2 [i_0]))), (arr_9 [i_0] [i_1] [i_0])))));
                            var_16 = ((((max((arr_2 [i_0]), (max((arr_7 [i_0]), (arr_12 [4] [i_1])))))) ? (min((arr_11 [i_2] [i_1] [i_1]), (((arr_7 [i_0]) ? (arr_12 [i_1] [i_1]) : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1]))))) : (min(((max((arr_3 [i_0] [10]), (arr_9 [i_0] [i_0] [i_0])))), (((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
