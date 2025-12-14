/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(1 || var_5)))) > -1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = 15879;
                    var_19 = ((!((((arr_1 [i_0 + 1] [i_2 + 4]) ? (~0) : 0)))));
                    var_20 ^= (!(((-(~var_2)))));
                }
            }
        }
    }
    var_21 = 1563633856;
    #pragma endscop
}
