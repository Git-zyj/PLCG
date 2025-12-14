/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, -68));
    var_16 *= (!1134907106097364992);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((~(arr_2 [i_0])));
                var_17 += (min(((~(~-80))), var_13));
            }
        }
    }
    var_18 = (((((var_7 ? -5065357343540532668 : -68))) ? var_9 : (max(25823, 17469405365402478013))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_8 [i_2] &= ((var_11 ? -719044774 : (arr_6 [i_2])));
        arr_9 [i_2] = ((244 ? (arr_0 [i_2]) : (arr_0 [i_2])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 *= (min((40280 <= -113), (arr_3 [i_3] [i_3] [i_3])));
        arr_14 [i_3] [i_3] = 4294967288;
        var_20 = (min(var_20, ((var_5 ? (max((arr_0 [i_3]), (arr_0 [i_3]))) : ((((~var_8) ? var_0 : (min((arr_1 [8]), 7998258521423817867)))))))));
        arr_15 [i_3] = ((3705221980 ? (arr_11 [5]) : (-2147483647 - 1)));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = 75;
        var_21 = (((((((min((arr_2 [i_4]), 66))) & ((max(var_11, var_11)))))) ? ((((min(var_1, var_13))) ? (~39716) : (arr_17 [18] [22]))) : 8392097723441054280));
        arr_19 [i_4] [5] = ((((((!(arr_3 [i_4] [2] [i_4]))))) - (min((max(18446744073709551607, 5429757222683935000)), ((((arr_2 [i_4]) / 39712)))))));
    }
    #pragma endscop
}
