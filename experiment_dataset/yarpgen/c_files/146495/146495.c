/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((7204650415382026038 / (10568276411448049352 / var_4)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max((~1023), 10568276411448049346)))));
                arr_6 [15] [i_0] = (((arr_0 [i_0] [i_1 + 2]) ? ((min(((var_9 ? 32560 : 51989)), ((65521 ? 1902 : 13546))))) : 29360128));
                arr_7 [i_0] = (min((((arr_0 [i_1 - 1] [i_1]) * 122)), (arr_4 [i_0] [i_0])));
                var_17 = ((73 * (arr_3 [i_0] [i_0] [16])));
            }
        }
    }
    #pragma endscop
}
