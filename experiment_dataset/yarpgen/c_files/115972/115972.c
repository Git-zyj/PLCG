/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= (min((48522 & -30675), (var_2 <= -82)));
                arr_6 [i_0] [i_0] = 0;
                var_12 *= (((10260277657146292360 | -4890532223883085884) ? var_1 : -30675));
            }
        }
    }
    var_13 -= ((((max(4013959709, 18446744073709551609))) ? -30676 : (min(((max(15872, var_7))), ((37 ? var_10 : var_4))))));
    var_14 = var_7;
    #pragma endscop
}
