/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0] [i_0 - 2] [i_0] = (((max((max((arr_0 [i_2]), var_4)), ((((arr_1 [i_0]) >= var_12)))))) ^ var_8);
                    var_18 = (max(var_18, (min((min(var_2, var_1)), (var_2 >= var_10)))));
                    arr_8 [i_0] [i_0] [i_0] = var_2;
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((arr_4 [i_0] [i_0 - 1] [i_2 - 1] [i_0]) ? (min((arr_3 [i_0] [i_0]), (arr_2 [i_0 - 2] [i_0 - 2]))) : (~var_7))));
                }
            }
        }
    }
    var_19 = (((((~var_1) ^ (var_2 | var_3))) & (((0 == ((var_16 ? var_15 : var_12)))))));
    var_20 = (!var_7);
    #pragma endscop
}
