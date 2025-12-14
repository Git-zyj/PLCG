/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_0 ^ ((var_7 ? (((1 ? -3438 : 1))) : (var_3 % var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max((((!((!(arr_1 [i_0 - 2])))))), ((1 << (-19 + 25)))));
                var_22 = (((((arr_3 [i_0] [i_0 - 3]) ? (arr_3 [i_0] [i_0 - 2]) : (arr_3 [i_0 - 1] [i_0 + 1]))) + (arr_4 [i_0] [i_1] [i_1])));
            }
        }
    }
    var_23 &= (((((((1538284721785433506 / var_7) && var_16)))) & ((var_11 ? (~0) : ((0 ? var_13 : 1))))));
    var_24 = 18446744073709551615;
    var_25 *= ((((((((3438 ? 14218177064295958775 : var_1))) ? ((3437 >> (var_3 - 6120319911746551522))) : (1 ^ 1)))) >= (max((((var_14 ? 0 : -3437))), ((0 >> (-3438 + 3438)))))));
    #pragma endscop
}
