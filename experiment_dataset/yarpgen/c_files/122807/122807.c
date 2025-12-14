/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] = 16599;
                var_17 = ((-((((7 ? (arr_4 [18]) : (arr_2 [5]))) - (arr_4 [13])))));
                var_18 = (max(var_18, (((-((-((~(arr_0 [i_1]))))))))));
            }
        }
    }
    #pragma endscop
}
