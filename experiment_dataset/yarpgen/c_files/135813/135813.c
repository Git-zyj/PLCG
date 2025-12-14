/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (((((((arr_5 [i_0] [i_2]) % (arr_0 [i_0] [12]))) * 0))) ? (min((!var_2), (((arr_6 [i_0] [5] [2]) ? (arr_2 [i_0]) : var_6)))) : -2147479552);
                    var_14 = (((((!((((arr_0 [i_0] [i_2 + 1]) ^ 65535)))))) >> (((arr_2 [i_1]) - 1501880483))));
                    var_15 = (((arr_2 [i_0]) * (!59203)));
                }
            }
        }
    }
    var_16 ^= var_0;
    var_17 = var_3;
    #pragma endscop
}
