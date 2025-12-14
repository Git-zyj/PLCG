/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 ? ((((var_6 != ((min(var_2, -15836))))))) : (min(var_1, var_8))));
    var_13 = ((var_11 ? 10020 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = 77;
                var_15 = (((arr_2 [i_0]) ? ((((arr_1 [i_1 - 1] [i_1 + 1]) ? -15849 : (max(-175551816, 15814))))) : 6114560407084269216));
                var_16 = ((((min((max(-53, 235431161)), ((var_0 ? (arr_2 [i_0]) : (arr_3 [i_1])))))) ? 6043 : (arr_5 [i_0] [i_1 + 1])));
                var_17 = (min(var_17, ((((arr_3 [i_0]) ? 0 : -24)))));
            }
        }
    }
    #pragma endscop
}
