/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 30908;
    var_17 = (min(2, 64044));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [11] [i_0] = ((!(19271 == 0)));
                arr_7 [i_0] [i_1] = -30909;
                arr_8 [i_1] [3] [i_0] = ((((!(((119 >> (59480 - 59449)))))) || (((-(min(9223372036854775807, 6056)))))));
            }
        }
    }
    var_18 = ((-(((255 > 3441542370) + (!var_6)))));
    #pragma endscop
}
