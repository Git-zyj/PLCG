/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 / var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((((min(var_7, ((2 ? 3373536518 : 7390302390976826166)))) - 921430781)))));
                    var_12 = (((max(var_8, 3373536518))));
                    arr_9 [i_2] = ((((((17977446227246895671 | 14444) ? (21314 + 237) : (-43 && 18446744073709551615)))) ? ((7533947422641745897 ? 254 : 119)) : 0));
                    var_13 = ((((min(137, (((arr_4 [i_0]) ? var_3 : (arr_5 [i_0] [i_1] [i_2])))))) ? ((9223372036854775807 ? (arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (min(5740576490404489660, 0)))) : ((((22101 && (921430769 * 18446744073709551594)))))));
                }
            }
        }
        var_14 = 118;
    }
    var_15 = ((((!(((var_7 ? var_9 : 1))))) ? ((var_0 ? ((var_7 ? var_6 : var_6)) : var_6)) : (254 <= 9223372036854775807)));
    var_16 = 119;
    var_17 = 758492210;
    #pragma endscop
}
