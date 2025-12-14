/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += 2;
    var_11 &= 82;
    var_12 += (min(var_1, 1768986557));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0 - 2] [i_0] [3] = -300721398077369115;
                arr_6 [i_1] &= (((min(69, ((15 ? 13432503018933689909 : 175)))) != -6952084151163235671));
            }
        }
    }
    var_13 = (((((14176 ? var_8 : -26)) > 1)));
    #pragma endscop
}
