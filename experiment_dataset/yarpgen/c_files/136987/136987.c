/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((~((var_3 ? (arr_4 [i_0] [i_1]) : (arr_0 [2])))))) ? 1 : (arr_4 [i_0] [17]))))));
                arr_5 [i_0] = var_4;
                var_14 += (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
