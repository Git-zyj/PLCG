/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = ((((!((min(1984690438934436819, 0))))) ? (min(((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_2])))), ((var_11 / (arr_0 [i_0 + 1]))))) : -1));
                    arr_8 [i_0] [i_0] [i_1] = 37191;
                }
            }
        }
    }
    var_13 |= ((var_2 ? ((((max(var_12, var_8))) ? var_11 : var_1)) : ((((var_3 ? var_8 : var_3))))));
    var_14 = ((((((var_7 ? var_0 : var_12)) != ((min(var_5, 67))))) ? (((-var_12 && ((min(var_5, -13)))))) : var_4));
    #pragma endscop
}
