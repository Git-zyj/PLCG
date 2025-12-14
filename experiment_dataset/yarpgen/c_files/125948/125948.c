/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, 2974355684855922751));
        var_12 &= (arr_0 [i_0] [0]);
        var_13 *= (((min((min(-7175, -6574623277390074183)), 0))) && var_6);
        arr_2 [i_0] = 829246999;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_14 = (((((((1 ? 0 : 0)) | 25))) ? (((((arr_0 [i_1] [i_1]) ? -7175 : (-32767 - 1))) + 48)) : -486662265));
        arr_5 [i_1] = ((((max(((-105 ? -5061479585217449658 : 7905783055437454081)), var_1))) ? ((((arr_1 [i_1]) > (((arr_1 [i_1]) + -105))))) : (-9223372036854775807 - 1)));
        var_15 |= (((var_5 & 1) ? (((!(((-(arr_4 [i_1]))))))) : var_9));
        var_16 = (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_17 = (((-32767 - 1) | (arr_1 [i_2])));
        var_18 ^= (max((9223372036854775807 - 1), ((((((arr_1 [i_2]) ? -6108782340263756389 : (arr_7 [i_2])))) ? (((min(-7175, 1)))) : (arr_6 [i_2])))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_19 = (min(var_19, (max((((255 ? var_0 : (((arr_13 [i_3] [10] [i_4]) ? (arr_10 [13]) : (arr_11 [i_3])))))), ((var_7 ? -9223372036854775807 : 143974450587500544))))));
                var_20 = ((((!(arr_1 [i_3]))) ? ((max((arr_10 [i_4]), 34050))) : (~228)));
            }
        }
    }
    var_21 = (min(var_6, 18511));
    #pragma endscop
}
