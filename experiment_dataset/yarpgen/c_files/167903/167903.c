/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 = (max(var_19, ((((((arr_1 [i_0] [i_0]) ? -683 : (arr_1 [i_0] [i_0])))) >= (((arr_0 [i_0] [i_0]) ^ (var_0 | 1586550597)))))));
        var_20 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = ((((max(3678132573, (arr_4 [i_1])))) ? (((var_11 ? 14427379591168857093 : (arr_4 [9])))) : (arr_4 [i_1])));
        var_22 = (max((((arr_3 [i_1]) ? (-9223372036854775807 - 1) : (var_3 | 3678132573))), ((((3438 / 4294967291) ? (((arr_3 [i_1]) ^ (arr_4 [i_1]))) : (((((arr_4 [i_1]) <= 1)))))))));
        var_23 = ((((min((arr_2 [7] [i_1]), (arr_2 [16] [i_1])))) ? (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : 5575890642844602059)) : (arr_2 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [17] [i_3] = ((((((((arr_4 [5]) + 48514))) - ((112 ? 1957774140 : (arr_8 [i_2] [i_2] [i_3] [i_3]))))) - ((((((arr_6 [i_1] [i_1]) | (arr_2 [i_3] [i_2])))) ? var_2 : 2247465631))));
                    var_24 |= ((6951322432860957888 % ((((616834723 ? (arr_4 [i_1]) : 16380))))));
                }
            }
        }
        var_25 = ((min((arr_8 [i_1] [i_1] [i_1] [i_1]), (arr_8 [i_1] [i_1] [i_1] [i_1]))) <= var_12);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_26 = (((((3678132586 | (arr_7 [i_4 - 1])))) ? (((((arr_3 [i_4]) <= var_10)) ? -7344632463137385799 : ((min((arr_7 [i_4 - 1]), 1))))) : ((((arr_9 [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]) ? (arr_13 [i_4 - 1] [i_4 - 1]) : 4)))));
        var_27 = ((arr_8 [1] [i_4] [i_4] [i_4]) + 1);
    }
    var_28 *= (((((((min(1, var_13)))) <= ((var_10 ? 127 : var_12)))) ? (((min(var_4, var_2)) ^ var_6)) : 1));
    #pragma endscop
}
