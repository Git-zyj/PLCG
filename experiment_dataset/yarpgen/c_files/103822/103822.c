/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = -7;
    var_20 |= var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    var_21 += (((((var_11 & (arr_1 [i_0 + 2])))) ? ((((20001 == (arr_2 [i_0 - 1] [i_2 - 2] [i_2 - 1]))))) : (min((arr_1 [i_0 + 2]), var_8))));
                    arr_8 [i_2] = (min(10626314526105002035, var_10));
                }
                var_22 = var_17;
            }
        }
    }
    #pragma endscop
}
