/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] [9] [i_1] = (((arr_7 [i_1] [i_0] [i_0]) > (-127 - 1)));
                arr_9 [i_0] [i_1] = ((!((((((var_4 ? (arr_2 [3]) : 1120181571))) ? var_4 : (arr_2 [i_0]))))));
                arr_10 [i_1] = (((-62 * -23) & ((min((arr_1 [i_0] [i_0]), var_0)))));
            }
        }
    }
    var_13 = (-19287 ? var_0 : var_10);
    var_14 *= ((((425406816 ? -126 : -71)) != ((var_8 ? var_4 : (var_1 != var_10)))));
    var_15 = max(var_3, (min((var_6 + var_8), ((-16907 ? 31 : (-2147483647 - 1))))));
    #pragma endscop
}
