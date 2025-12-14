/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (2911745488 > 211);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (1383221807 % 10);
                var_14 = ((((((var_1 ? (arr_1 [i_1]) : (arr_0 [i_0]))))) ? (3828434325 > var_10) : ((var_6 ? 144115188075855872 : (-123 ^ 2091517653)))));
            }
        }
    }
    var_15 += 13871;
    #pragma endscop
}
