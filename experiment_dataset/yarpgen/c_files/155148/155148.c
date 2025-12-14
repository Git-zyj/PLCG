/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (((2039632612130165384 && var_5) ? (min(((var_4 >> (var_9 + 26862))), (var_0 + 1))) : 64843));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((((((arr_2 [i_0] [i_0]) - var_2))) ? ((~(arr_2 [i_0] [i_0]))) : -var_9));
                arr_5 [i_0] [i_0] [i_0] = ((-((~(((arr_4 [i_0] [i_0]) ? 24142 : 16407111461579386232))))));
                arr_6 [i_0] [i_1] [i_0] = (min((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : ((var_6 ? (arr_0 [i_0] [i_1]) : var_6)))), ((((arr_1 [i_0 + 1]) <= (arr_3 [i_0] [i_0]))))));
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
