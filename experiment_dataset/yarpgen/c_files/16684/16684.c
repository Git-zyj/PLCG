/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((15642684977203840680 + 2804059096505710948) & var_0);
    var_11 = 338975975;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_8 [i_0] &= 2804059096505710948;
                arr_9 [i_1] [i_1] = ((751049538 * (15052 + 15642684977203840680)));
                arr_10 [i_0] &= (4095 / 15360730285650306444);
            }
        }
    }
    #pragma endscop
}
