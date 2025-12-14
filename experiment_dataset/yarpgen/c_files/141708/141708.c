/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((128 ? ((var_8 ? ((max(164, 213))) : var_5)) : var_2));
    var_17 ^= 1694298420;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [21] [i_0] = ((-127 - 1) ? 2311293071 : 31);
                        arr_11 [i_3] [i_0] [8] [22] [0] [i_0] |= ((-((var_6 ? 753973990 : -753973988))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (arr_6 [i_0] [i_0] [i_0]);
                        var_18 = -753973997;
                        arr_13 [i_0] [i_0] [i_0] |= var_6;
                    }
                }
            }
        }
        arr_14 [18] = 8960840112842020906;
    }
    #pragma endscop
}
