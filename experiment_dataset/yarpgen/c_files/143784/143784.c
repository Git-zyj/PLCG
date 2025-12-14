/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 &= (((~-1) ? -1725866377 : (~var_6)));
                    var_14 = (min(var_14, (((33 ? 1725866392 : 189)))));
                }
            }
        }
        arr_9 [i_0] = ((((!(~-97))) ? ((max(var_11, 1725866376))) : 18446744073709551615));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = 483232285;
        var_15 = 120;
        var_16 = var_8;
    }
    var_17 = (min(var_17, var_12));
    #pragma endscop
}
