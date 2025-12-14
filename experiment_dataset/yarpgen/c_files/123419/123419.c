/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(-var_4, var_12)), -var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = -1;
                var_19 = (min(var_19, (((((9 ? 3670517814371502928 : -12)) <= (((((arr_1 [i_0]) | var_11)) + (-1 <= var_13))))))));
                arr_4 [i_0] = ((((((!(arr_2 [i_0] [11] [i_1]))))) != ((4496689874900166006 * (arr_1 [i_0])))));
                arr_5 [i_0] = (arr_2 [i_1] [i_1] [i_0]);
                var_20 = (max(var_20, ((((((1 ? 10516941647271271935 : ((max(27, 2044)))))) && (((1 ? 14771467605115829825 : -7))))))));
            }
        }
    }
    var_21 = var_16;
    #pragma endscop
}
