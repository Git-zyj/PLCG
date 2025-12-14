/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_4, (max((~var_1), (min(var_5, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_0 [i_0] [i_1])));
                var_15 = (min(var_11, (((((max(var_6, var_5))) >= ((max(var_2, var_8))))))));
            }
        }
    }
    var_16 = (min(var_3, ((((var_5 ? var_2 : var_1)) + var_11))));
    #pragma endscop
}
