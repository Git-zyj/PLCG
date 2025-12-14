/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_11 &= -18446744073709551615;
                var_12 = ((-(min(18446744073709551615, (arr_1 [i_1 - 1])))));
                var_13 = ((((((var_10 % 1) ? ((-(arr_5 [i_0 - 1]))) : 18446744073709551594))) ? (((((arr_3 [i_0 - 1] [i_1] [i_1]) && ((!(arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1]))))))) : (((((-(arr_3 [i_0] [i_0 - 1] [i_1])))) ? ((512 / (arr_4 [i_0] [i_0] [i_0]))) : var_0))));
                var_14 ^= (((-(arr_2 [i_0 + 1]))));
                var_15 = ((18446744073709551594 >> (18446744073709551611 - 18446744073709551575)));
            }
        }
    }
    var_16 = (~var_3);
    #pragma endscop
}
