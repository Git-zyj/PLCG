/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((1008 ? -1009 : -1785701429));
                    arr_8 [i_0] [i_0] [i_0] [i_2] = 1785701419;
                    arr_9 [i_2] [i_2] [i_2] [i_0] = var_13;
                }
            }
        }
    }
    var_16 = (~(18279054553189633503 != var_4));
    var_17 = var_10;
    var_18 ^= 2586442470734157342;
    #pragma endscop
}
