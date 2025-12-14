/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 32767;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 &= var_7;
        var_17 = ((!(arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = 0;
                        arr_9 [i_0] [i_1] = (~var_10);
                        var_19 = (min(var_19, var_8));
                    }
                }
            }
        }
    }
    #pragma endscop
}
