/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((-(((arr_1 [7]) ? (((arr_3 [7] [3]) << (((arr_2 [i_0]) - 388244746)))) : -16198))));
                var_19 = (max(var_19, ((((((arr_4 [i_0] [3]) > ((-13413 ? 23707 : 4439200273785083720)))) ? (arr_5 [i_1]) : (((((1895792716 && 20028) == ((var_12 ? var_5 : var_6)))))))))));
            }
        }
    }
    var_20 &= var_12;
    #pragma endscop
}
