/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((!1) ? (min((arr_1 [13]), 274877906943)) : (max(251596447, 274877906943))))) ? (((arr_1 [i_0]) ? (var_5 ^ 33423360) : (!1))) : (arr_0 [i_1])));
                arr_5 [i_0] [i_1 - 3] [i_1] = ((-((max(1, (arr_3 [i_1 - 3] [i_1 - 2] [i_1]))))));
                var_12 = ((((((0 >= (min((arr_3 [i_0] [i_0] [i_0]), (arr_2 [i_0] [1] [i_0]))))))) >= (arr_2 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_13 = (max(var_11, -0));
    var_14 = (((((var_3 >= (((-16 ? var_0 : var_4)))))) << ((((((max(var_8, var_7))) ? ((min(var_4, var_7))) : (max(17433941848495459303, var_5)))) - 17433941848495459292))));
    var_15 = (max(2, ((~((-29 ? -62 : var_2))))));
    #pragma endscop
}
