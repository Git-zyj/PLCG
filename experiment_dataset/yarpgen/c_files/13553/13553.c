/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((var_5 <= 27) % var_17)));
    var_19 ^= var_14;
    var_20 = (min(var_20, var_4));
    var_21 ^= (((((-var_6 ^ ((max(31, 31)))))) ? (max((~5590166248799686881), (-10 || var_3))) : (min(var_9, (max(12553253529665667784, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [8] [8] &= (max(var_6, (max((18446744073709551598 / 9), var_16))));
                arr_6 [8] [i_0] [i_1 - 2] |= ((((((max((arr_0 [18]), (arr_2 [i_0])))) ? (((max((arr_4 [6]), var_6)))) : (var_9 & 1))) ^ (~-18470)));
                var_22 -= (min((max((arr_2 [i_1 - 1]), var_16)), (((var_2 / (arr_0 [i_1 - 1]))))));
                var_23 += ((!(((((arr_0 [8]) ? var_16 : 63))))));
            }
        }
    }
    #pragma endscop
}
