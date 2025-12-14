/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(2, var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = max(((min(28, (arr_4 [i_1] [i_1] [i_0])))), (min((arr_3 [i_1] [i_1] [i_0]), 4673244945244894895)));
                arr_6 [i_0] = (arr_0 [i_0] [i_0]);
                var_21 = ((((((arr_2 [i_0]) ^ (((arr_4 [i_0] [i_0] [i_1]) >> (var_4 - 48918)))))) ^ (((((3039462618 ^ (arr_2 [i_1])))) ? -100 : (((max(0, (arr_1 [i_0])))))))));
            }
        }
    }
    var_22 = ((((((1019886734 * var_16) << (!1)))) ? ((((min(var_5, var_2)) >= (((min(7, 1))))))) : ((min((65535 && var_14), (-15 >= var_2))))));
    var_23 = 4;
    var_24 = var_3;
    #pragma endscop
}
