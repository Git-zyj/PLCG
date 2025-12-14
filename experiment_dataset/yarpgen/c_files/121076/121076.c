/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0 - 2];
        var_12 = min(((-18741 == (~var_2))), ((!(~127))));
        arr_4 [i_0] [19] = 2146435072;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 = (!var_2);
                        arr_14 [i_0] [i_0] [i_2] [i_3] = var_10;
                        var_14 = (((-(arr_8 [i_1 - 1] [13]))));
                    }
                }
            }
        }
    }
    var_15 = var_8;
    var_16 |= -1;
    #pragma endscop
}
