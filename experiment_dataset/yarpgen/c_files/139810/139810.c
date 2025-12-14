/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(1795881805987910784, (16650862267721640831 * var_11)));
    var_14 = (var_11 < var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((((arr_2 [i_0]) || ((max((arr_1 [i_1]), 0))))) ? (arr_1 [19]) : 63));
                var_15 *= (max(((((arr_2 [10]) + (arr_2 [i_0])))), 4493119831708600527));
                var_16 = (max((max((arr_0 [i_0] [i_0]), 17451503584242782598)), 255));
                var_17 = ((!((((arr_4 [i_0] [9]) | 0)))));
            }
        }
    }
    #pragma endscop
}
