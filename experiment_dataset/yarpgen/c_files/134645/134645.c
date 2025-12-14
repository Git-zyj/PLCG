/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 ^= ((((min((((((arr_0 [i_0]) + 9223372036854775807)) >> (var_12 - 3462680296))), ((((arr_1 [2]) < 480)))))) ? ((((-(arr_0 [10]))))) : var_6));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_18 = ((~(((((min(475, (arr_1 [i_0])))) || var_5)))));
                        arr_8 [i_0] = var_3;
                    }
                }
            }
        }
        arr_9 [i_0] = -457;
        var_19 *= (((((var_11 ^ (min(var_1, var_12))))) ? var_15 : ((var_4 << (((arr_3 [i_0] [i_0] [i_0]) - 4376103477706423471))))));
    }
    var_20 = var_2;
    #pragma endscop
}
