/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~var_2) ? (((var_3 ? var_4 : var_0))) : ((~((var_3 ? -6576308564800099266 : -6576308564800099266))))));
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_0));
                var_17 = (~-6576308564800099246);
                var_18 *= 18446744073709551613;
                arr_6 [13] = ((((((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_1])))) ? (((min(101, 1)))) : 1));
                var_19 = 9223372036854775807;
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_20 = (((-2147483644 + var_10) ? (max((arr_0 [i_2 - 2] [i_2]), ((max((arr_8 [i_2]), (arr_2 [i_2] [i_2])))))) : (((min(32767, (arr_3 [i_2 + 3])))))));
        var_21 = (~2085565140);
    }
    var_22 = ((((max(1023, 1491057723))) != var_9));
    #pragma endscop
}
