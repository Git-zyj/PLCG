/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((arr_4 [i_2] [i_2]) || (arr_4 [i_2] [i_2]))) ? (arr_4 [i_2] [i_1]) : (arr_4 [i_2] [i_2]))))));
                    var_15 &= ((~(((arr_5 [i_0] [i_0 - 2]) ? (arr_7 [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1])))));
                    var_16 -= -407452132;
                }
            }
        }
    }
    var_17 = (min(var_17, 1));
    var_18 -= ((7985405271013947606 != (((min(var_13, var_10))))));
    #pragma endscop
}
