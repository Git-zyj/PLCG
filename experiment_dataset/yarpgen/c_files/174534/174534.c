/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (((arr_5 [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1]) ? (((arr_2 [4]) ? 1 : 1)) : var_3));
                    var_15 = (((!62) ? (arr_0 [1]) : (51705 <= 13830)));
                }
            }
        }
        arr_7 [i_0] = 194;
        var_16 ^= ((13839 != (arr_1 [i_0 - 2] [i_0 - 2])));
        var_17 = (max(var_17, ((((((var_13 ? -2237096904834035975 : 18014398509481856))) ? (15367291547430909402 <= 18014398509481856) : (arr_0 [i_0 - 2]))))));
    }
    var_18 = var_0;
    #pragma endscop
}
