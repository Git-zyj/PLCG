/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (max((max(2034988305, ((-780920239 ^ (arr_3 [8] [i_1]))))), (((((((arr_2 [i_0]) ? (arr_4 [i_1]) : -9))) >= (arr_1 [i_1]))))));
                var_14 -= (arr_4 [i_1]);
            }
        }
    }
    var_15 = (((((((min(31, var_6)))) <= (min(-1954941294, var_4)))) ? var_2 : ((((min(var_9, 1))) ? (6153066536902321353 >= -1) : ((max(var_10, -31232)))))));
    var_16 = var_7;
    #pragma endscop
}
