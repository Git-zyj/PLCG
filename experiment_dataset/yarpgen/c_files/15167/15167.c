/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [1] = (((var_0 > ((((arr_4 [i_0 + 2] [i_1] [i_1]) + (arr_0 [11])))))));
                var_14 = (min((min((arr_0 [i_0 + 1]), -22877)), ((min((255 != var_4), -571645958)))));
                var_15 = (max(var_15, (arr_2 [i_1])));
            }
        }
    }
    var_16 = (min((((0 == (var_5 || -1)))), (((var_10 == var_1) ? (255 || var_8) : var_13))));
    var_17 = (((~var_3) | ((((min(var_3, var_7))) ? (!var_13) : (min(260975708, var_11))))));
    #pragma endscop
}
