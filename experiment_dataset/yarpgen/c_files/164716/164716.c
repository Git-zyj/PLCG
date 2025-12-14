/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((((50147 / 15404) >= ((((arr_5 [i_1]) < 15388)))))) != ((((var_4 ? -6735514125075244886 : (arr_4 [i_0] [i_1] [4]))))))))));
                var_13 = (max(var_13, (~3322261269)));
            }
        }
    }
    var_14 = var_1;
    #pragma endscop
}
