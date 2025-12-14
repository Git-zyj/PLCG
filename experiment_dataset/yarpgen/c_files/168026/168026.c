/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((!56700) & var_10)) > var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (max(140096153, 8836));
                var_13 ^= (max((arr_1 [1]), ((((8836 + 143) ? ((4611686018418999296 ? (arr_2 [6] [i_1 + 1]) : 230)) : 8836)))));
            }
        }
    }
    #pragma endscop
}
