/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((arr_1 [i_0] [i_0 + 1]) ? 610868101 : var_14)) != ((max(-6, 28))))))));
                var_21 = 505192600;
                var_22 = (arr_6 [i_0] [i_1] [2]);
            }
        }
    }
    var_23 = var_4;
    var_24 = var_10;
    var_25 = (min(var_25, 70));
    #pragma endscop
}
