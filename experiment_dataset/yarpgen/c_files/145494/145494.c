/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (((-2147483647 - 1) & (((5396423916450151804 ? (arr_0 [i_0 + 2] [i_0 + 2]) : 47)))));
                var_13 &= 8191;
                var_14 = var_9;
                var_15 = ((((((arr_2 [i_0 - 1]) % (arr_2 [i_0])))) ? ((((arr_4 [i_1 + 1] [i_0]) ? (arr_2 [i_0 + 2]) : 49))) : var_4));
                var_16 = max((var_6 % var_3), ((((((var_6 ? var_9 : var_7))) && ((min((arr_6 [i_0] [i_1]), var_9)))))));
            }
        }
    }
    var_17 = ((var_7 + (min((min(var_8, var_1)), (var_9 || var_3)))));
    var_18 &= (((((var_8 ? var_2 : var_4))) >> (((((var_8 ? var_10 : var_0))) - 1182794802))));
    #pragma endscop
}
