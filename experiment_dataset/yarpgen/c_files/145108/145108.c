/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = 57953;
                var_18 ^= -30016;
                arr_6 [i_0] [i_0] [i_1 - 1] = (((max((arr_2 [i_1 - 2] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 - 1])))) >> (((min((arr_2 [i_1 - 2] [i_1 - 1]), -689648494)) + 689648507)));
                var_19 ^= (arr_4 [i_0]);
            }
        }
    }
    var_20 = (max(var_20, (((-((var_5 >> (var_5 - 2061060887))))))));
    var_21 = (max(var_21, var_3));
    #pragma endscop
}
