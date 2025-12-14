/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (min(36, ((-((var_15 ? 6316833010873305078 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [8] = ((!((min(var_4, ((18446744073709551615 ? (arr_4 [i_0 + 1]) : var_3)))))));
                var_17 ^= var_10;
                var_18 *= ((((((min(-24001, var_6))) + ((min(0, var_7))))) * 0));
                arr_7 [i_0 + 1] [i_1] = ((arr_0 [i_0 - 1]) | ((1 ? var_11 : 142)));
            }
        }
    }
    var_19 = (max(var_19, ((((262143 > 0) ? var_13 : (13664005969949817140 == 1))))));
    #pragma endscop
}
