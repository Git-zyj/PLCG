/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = -1;
                    arr_8 [i_0] [i_1 + 1] [i_0] [i_2] |= min(var_16, 1);
                    arr_9 [i_0] [i_0] [i_2] = ((((min(((18446744073709551595 ? (arr_2 [i_0]) : var_13)), ((15943 | (arr_1 [i_0])))))) ? ((((138 && var_8) <= (max(1, 4294967295))))) : 1));
                    var_21 -= (max(((max((((arr_6 [i_1] [i_1]) & var_10)), (1 ^ 1)))), var_0));
                }
            }
        }
    }
    #pragma endscop
}
