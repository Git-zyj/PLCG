/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = (max(var_18, (((var_15 / (((((var_8 ? 33573 : var_3))) ? var_14 : ((var_1 ? var_5 : 2396)))))))));
    var_19 = var_8;
    var_20 = (min(var_20, ((((((max(0, 4)) & (var_1 != var_6))) >> (!var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((min(var_3, -395577384)), var_0));
                arr_6 [i_0] [i_0] = (max(var_10, (arr_3 [i_1])));
                var_21 = 8952;
            }
        }
    }
    #pragma endscop
}
