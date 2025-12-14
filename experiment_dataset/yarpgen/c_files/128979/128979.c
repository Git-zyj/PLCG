/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(((var_6 | (576460752303423487 != var_4))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((((var_9 ? var_2 : (arr_0 [i_0]))) / ((((min(var_4, 576460752303423484)) > (~var_0)))))))));
                var_13 = (max(var_13, (~var_10)));
                var_14 ^= (((arr_1 [i_1] [i_0]) & (var_4 | var_10)));
            }
        }
    }
    var_15 = var_6;
    var_16 = ((-((-(min(3455774194, -3294138399404045731))))));
    var_17 = var_1;
    #pragma endscop
}
