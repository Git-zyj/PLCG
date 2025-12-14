/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = var_6;
                var_14 = (min(var_14, 64430));
            }
        }
    }
    var_15 = ((((var_11 < ((16877 ? 1105 : 0))))));
    var_16 = (min((var_0 - var_7), ((((var_3 ? 1 : -96)) - ((max(1, -20161)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 &= 1;
                var_18 = (arr_4 [i_2] [i_2] [i_2]);
                arr_12 [i_2] [i_2] = 32640;
                var_19 = (min(var_19, ((((((min(32767, (arr_9 [4] [i_3] [i_3])))) != (-78 != 1)))))));
            }
        }
    }
    #pragma endscop
}
