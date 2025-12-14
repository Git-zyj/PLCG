/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [8] [i_1] |= ((var_0 ? (((min(0, var_1)))) : ((-32 ? 69 : 737643141))));
                    arr_8 [i_2] [i_2] [13] = (max((((((~(arr_0 [i_0] [i_1])))) ? var_10 : (arr_6 [i_2 + 2] [i_2]))), (arr_2 [i_0] [i_1] [i_0])));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (((((!((min((arr_4 [i_0]), 6707353526136801220)))))) == (arr_5 [i_0] [i_2] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
