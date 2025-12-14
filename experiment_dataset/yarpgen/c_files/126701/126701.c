/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((((arr_3 [i_0 - 2]) || (arr_3 [i_0 - 1])))) * ((min(32733, var_0)))));
                var_20 -= ((((((arr_4 [i_0 - 1]) << (54420543 - 54420528)))) / (min((arr_4 [i_0 - 1]), (arr_2 [i_0 - 1])))));
                arr_6 [i_1] = ((((-(arr_4 [i_0 - 1])))) ? ((var_11 ^ ((((var_16 <= (arr_1 [i_0 + 1] [1]))))))) : (arr_4 [i_0 - 2]));
                var_21 = var_11;
            }
        }
    }
    var_22 -= ((var_2 || (((var_0 ? (var_6 - var_1) : (!var_1))))));
    #pragma endscop
}
