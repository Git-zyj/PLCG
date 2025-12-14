/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_1] [i_0] [i_0]);
                arr_5 [3] [i_1] = (1 ^ 833456867);
                var_20 *= (arr_3 [i_1] [i_1] [i_1]);
                var_21 = (((arr_0 [i_0 - 2]) < (min(457317391, var_3))));
                arr_6 [i_0 + 3] [i_1] = ((+(min(((2041543794307994413 ? (arr_0 [i_0]) : 457317391)), (arr_0 [i_0])))));
            }
        }
    }
    var_22 = ((var_18 ? (max(var_18, ((min(1031638782, -457317391))))) : (((-(var_5 | var_17))))));
    #pragma endscop
}
