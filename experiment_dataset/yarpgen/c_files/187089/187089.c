/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_3 ? var_4 : 17962665855243486364))) && var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_0 [2]);
                var_14 = (arr_0 [i_0]);
                arr_6 [5] [3] = (2049664962 ? 0 : 6369320611244583794);
            }
        }
    }
    #pragma endscop
}
