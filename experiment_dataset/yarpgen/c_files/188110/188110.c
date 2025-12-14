/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_8);
    var_17 = var_5;
    var_18 += (min(var_13, (!18)));
    var_19 = ((max(var_4, (min(1, 4696952129402308682)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((!(arr_5 [i_0] [i_1]))));
                var_21 = (((min((arr_4 [i_0] [2]), (!var_2))) - ((((-1 + 2147483647) >> (((~var_5) + 165)))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_22 = 9;
                    var_23 = var_15;
                }
            }
        }
    }
    #pragma endscop
}
