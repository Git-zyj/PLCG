/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 ^= (arr_1 [0]);
                arr_6 [i_0] = (((((((arr_2 [i_0] [i_1]) & (arr_0 [i_0] [i_1]))) == (470004394787406017 && var_14))) ? (((min((((!(arr_4 [i_0])))), 92)))) : (min((var_14 - var_4), (((0 & (arr_0 [i_0] [i_1]))))))));
            }
        }
    }
    var_19 &= (~3925107304);
    #pragma endscop
}
