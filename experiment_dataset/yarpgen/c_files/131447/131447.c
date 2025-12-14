/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_7 ? 0 : var_7))) & var_7))) | (((284361789721655322 || var_2) ? var_3 : (((-284361789721655293 ? -30030 : 2716895482)))))));
    var_11 = ((((((var_0 ? var_9 : var_1))) ? ((var_3 ? var_2 : -284361789721655311)) : 284361789721655315)));
    var_12 = ((((((0 || 18446744073709551583) ? ((87472107486622345 ? -1 : -85)) : (((-87472107486622360 ? 251 : 70)))))) ? ((((!-48) ^ (129 | 1)))) : -6334695092309773787));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((((((-3272 ? -1 : var_5))) ? ((var_8 ? 36874 : (arr_0 [i_0]))) : (187 && var_1)))) ? ((((((var_6 ? (arr_5 [i_1]) : var_0))) ? ((60 >> (((arr_3 [i_1]) + 102)))) : (arr_1 [i_0])))) : ((((var_2 ? var_5 : var_3)) & (41708 < -284361789721655315)))));
                var_14 = (max(var_14, (((~(!214))))));
            }
        }
    }
    #pragma endscop
}
