/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_1] = 0;
                var_20 = 0;
                var_21 = (((arr_1 [i_0]) != (!-26926)));
                arr_5 [i_0] [i_0] [i_1] = -15716;
            }
        }
    }
    var_22 += (min(-379660573, -16109));
    #pragma endscop
}
