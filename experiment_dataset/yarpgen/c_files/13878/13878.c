/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((((((((0 ? 0 : -1))) > (min(18446744073709551613, 225623961552598974))))) >> (((max((min(var_11, -1943691600)), var_11)) - 175))));
                    arr_10 [i_2] = 53;
                }
            }
        }
    }
    var_18 -= ((-8145633123385744730 ? ((((min(var_4, var_4))) ? var_6 : (((max(53, 0)))))) : ((min(((max(34220, 0))), (min(67108352, 203)))))));
    var_19 = ((((min(-8, ((0 ? 11 : var_11))))) ? (((((20543 ? -37 : 0))) ? 203 : (min(var_8, var_16)))) : (60 * 34220)));
    #pragma endscop
}
