/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = (((((max(var_0, 65504)) + ((min((arr_9 [20] [i_1] [i_1] [i_1]), (arr_2 [i_0]))))))) ? ((-268667201 ? (-9223372036854775807 - 1) : 18446744073709551585)) : (min(-23600, (min(var_10, var_5)))));
                    var_12 |= (((((min(18446744073709551597, 1)) <= ((((6655 || (arr_10 [15] [i_1] [i_2]))))))) || (((8176 ? 50461 : -708452071)))));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = 28058;
                }
            }
        }
    }
    var_13 = (max(((((var_11 ? var_8 : var_0)) & (~3067850769))), (min(((var_1 ? var_4 : var_8)), -32009))));
    var_14 = (18446744073709551615 | 52467);
    var_15 = (min(var_15, var_6));
    var_16 = (max((min((!var_10), (var_5 & var_3))), ((var_5 >> (32817 + 32743)))));
    #pragma endscop
}
