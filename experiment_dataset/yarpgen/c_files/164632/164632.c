/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((4194303 % var_1) ? ((max(var_1, var_6))) : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 &= ((max((arr_4 [i_2]), (arr_4 [i_1]))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [6] [i_0] = (~(!-1));
                        }
                    }
                }
                var_13 &= -1393623116;
            }
        }
    }
    var_14 &= ((max(var_6, var_3)) % (var_9 != var_6));
    var_15 ^= var_5;
    #pragma endscop
}
