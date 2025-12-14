/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [14] = ((max(19206, 19206)));
                arr_6 [5] [5] [i_1] = (max((2973 <= -255594496), (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [11])))));
                arr_7 [i_0] [8] = (((-19195 & -4713120807014216510) >= (max(var_6, ((((arr_1 [i_0]) - var_0)))))));
            }
        }
    }
    var_14 = var_6;
    var_15 *= (var_2 / var_0);
    #pragma endscop
}
