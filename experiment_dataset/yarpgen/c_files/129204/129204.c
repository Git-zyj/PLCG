/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = ((((var_8 && (((var_9 ? 15462 : var_4))))) || (((-15468 ? ((15435 ? -15463 : -64)) : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (54 ? (((arr_0 [i_0 - 1]) ? 16628148313943631384 : ((((arr_2 [i_0] [i_0]) * (arr_2 [13] [i_0 - 1])))))) : (((var_12 ? (arr_2 [i_0] [i_0 + 1]) : (arr_2 [17] [i_0 + 1])))));
                var_19 ^= (arr_3 [i_1]);
                var_20 -= (min(((-64 / ((((arr_2 [i_0 - 1] [i_0 - 1]) <= (arr_0 [13])))))), (arr_0 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
