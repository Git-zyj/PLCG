/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((~(((((-8403995334496880645 ? -8403995334496880639 : 907495192))) ? (~var_2) : (~var_4)))));
                    arr_9 [i_0] [i_1] [i_2] [0] = (((((((!(arr_2 [i_2] [i_1] [i_0]))) ? ((var_0 ? (arr_7 [i_1] [i_0] [6]) : (arr_7 [i_1] [i_1] [i_1]))) : var_2))) ? var_1 : (((168 ? -112 : 55088)))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = ((((((((907495175 ? 45 : 8403995334496880656))) ? (((arr_6 [i_0] [i_1] [i_2] [i_2]) ? (arr_2 [i_0] [i_1] [i_0]) : var_12)) : (arr_1 [i_0])))) ? (var_7 | var_8) : (((((((arr_0 [i_0]) ? (arr_5 [0]) : (arr_6 [i_0] [i_1] [i_2] [i_1])))) ? ((var_10 ? var_11 : var_10)) : ((~(arr_0 [i_0]))))))));
                    var_15 ^= ((67 ? -907495176 : 121));
                }
            }
        }
    }
    #pragma endscop
}
