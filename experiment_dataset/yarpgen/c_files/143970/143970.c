/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_11));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_2 [16])))) ? ((+(((arr_5 [i_1] [i_0]) ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [12] [i_1]))))) : (arr_2 [i_0 + 1])));
                    arr_6 [i_0 + 2] = (max((arr_3 [11]), ((((arr_5 [i_0 + 2] [i_0 + 1]) ? (arr_5 [i_2] [i_1]) : (arr_2 [i_2]))))));
                    arr_7 [i_0] [5] [i_1] [6] = ((((max((arr_3 [i_1]), (((arr_0 [i_2] [i_1]) ? (arr_4 [i_0] [i_2]) : (arr_3 [i_0])))))) ? ((((!(arr_4 [i_0 + 2] [i_0 + 1]))))) : ((2325415297533526056 ? (((arr_1 [i_0] [i_0]) ? (arr_5 [i_2] [i_2]) : (arr_2 [i_0]))) : ((((arr_1 [i_0] [i_0]) ? (arr_2 [i_2]) : (arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((min((((arr_1 [i_4] [i_3]) ? (arr_1 [i_0 + 1] [i_1]) : ((min((arr_1 [5] [i_2]), (arr_3 [i_4])))))), (arr_8 [i_0 + 2] [i_2] [i_3]))))));
                                arr_12 [i_0] [i_1] [i_2] [16] [i_0] = (arr_8 [i_2] [i_3] [0]);
                                arr_13 [i_2] [i_3] [i_4] = ((((max((((arr_0 [7] [i_1]) ? (arr_0 [3] [3]) : (arr_8 [i_0] [i_1] [i_0]))), (((arr_11 [i_0] [i_1] [i_2] [i_4] [i_2] [i_4]) ? (arr_8 [i_0 + 4] [i_1] [i_2]) : (arr_1 [i_1] [i_4])))))) ? (arr_0 [i_4] [i_1]) : (arr_10 [0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
