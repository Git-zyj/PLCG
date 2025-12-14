/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = ((-(((arr_4 [i_1 + 1] [11]) ? (((arr_5 [i_0]) ? (arr_3 [i_0]) : (arr_5 [i_0]))) : -120))));
                arr_6 [i_0] [i_0] [i_0 + 3] = (((!(arr_5 [i_0]))));
                var_15 = ((-(((arr_0 [i_0 + 3] [i_0 - 1]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (arr_0 [i_0 + 3] [i_0 + 1])))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_16 ^= ((-((0 ? 1 : 1))));
        var_17 = ((-((((((arr_7 [i_2] [8]) >> 1))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [11]))) : (arr_8 [i_2] [i_2 + 1])))));
        arr_9 [i_2] = (max(((-(arr_7 [1] [18]))), ((-18446744073709551615 ? ((((arr_8 [i_2] [i_2]) >= 15153213587120457731))) : ((~(arr_7 [i_2] [i_2])))))));
    }
    var_18 = ((!((((!-769170158) ? ((var_7 ? var_9 : var_2)) : (var_5 || var_10))))));
    var_19 |= ((-((1 ? ((4626313792285608223 << (88 - 63))) : 2229344752))));
    #pragma endscop
}
