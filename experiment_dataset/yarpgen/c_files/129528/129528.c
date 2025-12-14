/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [6] [6] &= ((((min(3194833276, 24))) != (max((arr_4 [4]), var_8))));
                var_15 = 16084467912313434133;
                var_16 += ((3515491238 ? -674912341644755845 : 16084467912313434133));
                arr_6 [18] [18] [4] &= 11400365451791783797;
                var_17 &= var_8;
            }
        }
    }
    var_18 = -8;
    var_19 = ((var_10 ? var_13 : ((-((var_1 ? 5614714568423404785 : var_8))))));
    var_20 = var_14;
    #pragma endscop
}
