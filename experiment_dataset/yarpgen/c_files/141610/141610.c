/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-var_5 | ((var_2 ? var_8 : 15327))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = (max(-var_7, ((1 ? 1 : 32752))));
                var_14 = ((((max((max(-28351, 30222)), (arr_2 [i_1])))) ? (((((arr_1 [i_0] [13]) < 28348)) ? (((arr_3 [9]) ? (arr_0 [i_1]) : 54505)) : (arr_4 [i_0]))) : ((max(-14, 1)))));
                var_15 = (min((max(((max(-68, (arr_5 [i_0] [i_1])))), ((28349 ? var_1 : (arr_0 [i_0]))))), 9939));
                var_16 = ((1 ^ ((min(-30, 256)))));
            }
        }
    }
    var_17 = (max(((((-6 && 0) || var_9))), -2));
    #pragma endscop
}
