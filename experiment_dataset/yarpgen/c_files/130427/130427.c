/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min((min((((var_5 ? 35124 : var_5))), (~198594110837378039))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((!((min(((min(41027, 40997))), -9223372036854775802)))));
                    arr_12 [i_2] [i_1] [i_2] = ((((-(arr_0 [i_0] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
