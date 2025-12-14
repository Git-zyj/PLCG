/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((!(((arr_1 [i_0]) >= 0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [17] [i_0] = (-2147483647 - 1);
                        var_15 ^= var_9;
                        var_16 = (!1);
                        var_17 = (max(var_17, (((((~(arr_3 [i_0] [i_1]))) < (arr_3 [i_2] [i_3]))))));
                    }
                }
            }
        }
        arr_9 [0] &= (arr_5 [18] [i_0] [18]);
        arr_10 [i_0] [i_0] = var_7;
    }
    #pragma endscop
}
