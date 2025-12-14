/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (85 & 255);
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((var_5 ? var_14 : var_6)) * ((var_10 ? 43553 : var_7))));
                arr_8 [i_0] [i_0] [i_0] = ((((min((arr_5 [i_0] [i_0]), (arr_1 [i_0] [i_1])))) ? 147 : ((-613381590 * ((1 * (arr_6 [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
