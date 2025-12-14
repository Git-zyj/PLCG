/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-74, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (18446744073709551606 <= 1);
                var_15 *= ((((~(var_9 && 56966))) | var_4));
                arr_4 [i_0] [i_0] [i_0] = (((var_9 + var_4) ? var_8 : ((-(arr_2 [i_0])))));
                arr_5 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_1])))) ? ((min((arr_0 [i_1] [i_1]), (arr_0 [i_0] [i_0])))) : ((((arr_0 [i_1] [i_1]) <= var_8)))));
                var_16 = (min(var_16, (((17 ? 2 : -1)))));
            }
        }
    }
    #pragma endscop
}
