/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = -2882438012845683285;
        arr_4 [10] &= (((1 ? (((min(1, 1))) : (min(-3919826756899172015, var_7))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_18 = ((((((arr_11 [i_1] [i_3 + 1] [i_3 - 1]) ? (arr_11 [i_1] [i_3 + 2] [i_3 + 1]) : (arr_11 [i_1] [i_3 - 2] [i_3 + 3])))) ? (((arr_11 [i_1] [i_3 + 1] [i_3 + 3]) ? (arr_11 [i_1] [i_3 + 3] [i_3 + 2]) : (arr_11 [i_1] [i_3 + 3] [i_3 - 2]))) : (arr_11 [i_1] [i_3 + 2] [i_3 - 1])));
                    arr_14 [4] [4] [i_3] [i_3] &= (max(1, (arr_12 [i_1] [i_1])));
                    arr_15 [i_2] [i_1] = (((((min((arr_10 [i_1] [i_3] [i_1]), (arr_12 [i_2] [1]))))) / (((arr_6 [1]) ? 3451393820 : ((((arr_6 [i_1]) ? var_7 : (arr_6 [i_1]))))))));
                    arr_16 [i_1] = -16777215;
                }
            }
        }
    }
    #pragma endscop
}
