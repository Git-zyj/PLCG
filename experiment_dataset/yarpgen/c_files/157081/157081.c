/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((((((arr_3 [i_2] [i_1 - 1]) <= (min(0, 197))))) != (((arr_4 [i_1 - 1] [i_2] [i_1 + 1] [i_1 - 1]) >> ((((arr_4 [i_0] [i_1] [i_1] [i_2]) == (arr_1 [i_0]))))))));
                    var_18 = (max(((((((arr_0 [i_2]) & (arr_0 [i_1 + 1])))) ? (((arr_5 [i_0] [i_1 + 2] [i_2] [i_2]) ? 252 : (arr_3 [i_0] [i_1 + 2]))) : (((arr_4 [i_0] [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1 + 2] [i_2] [i_2]) : 2648231247)))), (arr_2 [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
