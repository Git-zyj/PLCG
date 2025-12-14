/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_6 ? (((max(var_0, var_4)))) : -var_2))) ? var_6 : ((min(11554, 50)))));
    var_11 = 47651;
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (--227);
                var_13 = ((((((arr_0 [i_0] [i_0]) % -1877317537))) + ((5 ? (arr_4 [i_1] [i_0]) : 3836466942))));
                var_14 = var_7;
                var_15 = (5 ? (~var_1) : (max(((max(var_7, 1491634596))), -6002207312328318035)));
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
