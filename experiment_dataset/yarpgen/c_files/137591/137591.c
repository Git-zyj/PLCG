/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max(var_1, (arr_5 [i_0] [i_0])));
                var_11 = min(var_3, var_2);
                arr_7 [i_1] [16] [16] = ((min((arr_6 [i_0] [i_1]), var_4)));
                var_12 = (max(var_12, -2630));
            }
        }
    }
    var_13 = -1491439424839630272;
    var_14 += var_1;
    #pragma endscop
}
