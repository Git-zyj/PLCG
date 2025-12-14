/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = var_13;
                    arr_6 [i_0] = var_11;
                    var_20 += (max(((max((7213062327620637540 <= 47961), (min(var_12, var_1))))), (38 / var_4)));
                    var_21 += (max((max(-1, var_11)), ((~(var_11 && -1)))));
                    arr_7 [i_0] [i_0] = (min(var_4, var_1));
                }
            }
        }
    }
    var_22 = (!(((((2963865401927852997 >> (var_11 - 158))) << (var_11 - 191)))));
    var_23 = (min((((-(var_9 + var_7)))), (((max(18446744073709551592, var_18)) >> (((~48979) + 48982))))));
    var_24 = ((~((((var_17 <= -1) == ((max(1, var_0))))))));
    #pragma endscop
}
