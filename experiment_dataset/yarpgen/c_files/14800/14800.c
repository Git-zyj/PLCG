/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((((-1700331468 != -5363304751401661344) ? (~var_1) : ((var_5 ? (arr_2 [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((~((((arr_0 [1] [i_1]) < (arr_5 [i_0] [i_1] [19]))))))) : ((-111 ? 111 : ((-1496760383 ? var_5 : (arr_5 [i_0] [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_1] [i_1] = (((1501 ? 419864530 : -124)));
            }
        }
    }
    var_18 = (var_14 | -114);
    #pragma endscop
}
