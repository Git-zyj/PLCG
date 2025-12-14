/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_20 = ((((arr_5 [i_0 - 1] [i_2 + 1]) ? (((11436004104163379810 ? 1 : 109))) : ((133 ? 1 : 4095)))));
                    var_21 = (min(((((((arr_6 [6]) ? 2674958424621253415 : (arr_1 [i_2])))) ? ((0 - (arr_3 [i_0 - 1] [i_0 - 1] [i_2]))) : ((min((arr_2 [i_1]), -36))))), (((1 < ((((arr_3 [i_2] [i_1] [i_0]) >= (arr_6 [i_1])))))))));
                }
            }
        }
    }
    var_22 ^= var_7;
    #pragma endscop
}
