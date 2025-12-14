/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_9, ((min((var_5 > var_8), (!var_2))))));
    var_17 = (-(max((min(-3625385480329699844, 1)), (((-3625385480329699833 ? 1 : 96))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0] [i_0]);
                arr_4 [i_0 + 2] [i_0] = (arr_1 [i_0]);
                var_19 = ((+((var_13 / (((-4145472580358576746 ? (arr_2 [i_0 - 3] [5] [i_1]) : (arr_2 [i_0] [i_0] [i_0 + 1]))))))));
                var_20 = ((~((0 ? -4145472580358576744 : (-13706 & var_13)))));
            }
        }
    }
    #pragma endscop
}
