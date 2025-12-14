/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_6;
    var_12 = (max(var_6, ((var_1 ? var_1 : (-312932549 > 6900)))));
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [6] = ((min(84, 1073741568)));
                var_14 += ((-1073741569 ? 2130551129 : 576460752303423487));
            }
        }
    }
    #pragma endscop
}
