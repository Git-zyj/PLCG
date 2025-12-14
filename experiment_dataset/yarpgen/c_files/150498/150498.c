/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [20] = max((!2093696539), ((((var_6 >> (234 - 225))) + var_4)));
                var_16 ^= ((((((max(32756, 3473504261))) % (arr_0 [14] [i_1 - 1]))) | ((((((-32767 - 1) ? -32757 : 2221637106)))))));
                arr_6 [i_1] = (max(((min((arr_2 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (min((arr_4 [9]), 3324991103))))), var_3));
                var_17 &= 15;
            }
        }
    }
    var_18 *= var_15;
    #pragma endscop
}
