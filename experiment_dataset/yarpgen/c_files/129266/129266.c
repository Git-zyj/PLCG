/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_2 ? (((~var_10) & var_8)) : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [1] [i_1] &= ((((12582513817136450840 ? ((((!(arr_2 [i_0] [i_0]))))) : (((arr_4 [i_1]) ? 8196932464217738619 : (arr_3 [i_0] [11]))))) * (((((max(9247, (arr_0 [i_0] [i_1])))) >> (((max((arr_2 [i_0] [4]), 512)) - 1427812326591803706)))))));
                var_19 ^= (max(1023, 0));
            }
        }
    }
    #pragma endscop
}
