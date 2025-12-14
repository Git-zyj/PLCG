/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (((((min(1, var_0)))) < (min((min(var_9, 1925708160)), (-13 == 1925708160)))));
                var_12 = 14;
                arr_4 [i_1] [i_1] [i_1] &= (((((var_6 << (((-11 + 37) - 19))))) < ((-(2369259136 ^ 1)))));
                var_13 = (max(var_13, (arr_2 [i_0] [i_0] [i_0])));
                var_14 ^= ((((min((max(var_7, 30876)), 225))) || ((((0 <= -4743) ? (min(1477289487, var_3)) : var_1)))));
            }
        }
    }
    var_15 = (((var_8 + 9223372036854775807) << (((((0 || var_6) + var_1)) - 4213152670))));
    #pragma endscop
}
