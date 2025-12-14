/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (arr_3 [i_0 - 2] [i_0] [i_1]);
                arr_7 [i_0] = 6309797374532900191;
                var_12 *= (min((min((arr_3 [i_1] [i_1 - 3] [i_1 - 3]), (((arr_5 [i_0] [i_0] [i_1]) ? 18446744073709551615 : 3993533050)))), (((!(arr_1 [i_0]))))));
            }
        }
    }
    var_13 = (((((((var_5 ? var_1 : var_8)) + var_1))) ? var_2 : -3511807001));
    #pragma endscop
}
