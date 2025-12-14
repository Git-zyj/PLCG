/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_0 ? ((76 ? 1 : -1026156110)) : -1))) ? var_0 : ((0 ? var_12 : var_7))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 4360942244939009210;
        var_18 |= (((~(arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (((((-(arr_7 [i_0] [i_0] [i_0])))) ? (arr_7 [i_0] [i_1] [i_2]) : var_10));
                    arr_10 [i_0] [i_1] = var_6;
                    arr_11 [i_2] [i_1] [12] = -1322593452;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    arr_18 [i_0] |= ((1158024122 ? (max(((-(arr_9 [i_0] [i_4]))), (((arr_7 [i_0] [i_3] [i_4]) ? var_9 : var_14)))) : (((((18446744073709551615 ? (arr_9 [i_0] [i_4 + 2]) : var_5))) ? (arr_8 [i_4 + 2] [i_4 + 1] [i_4 + 1]) : -var_9))));
                    arr_19 [i_0] = max((((arr_5 [i_0] [i_4 + 2] [i_4 + 2]) ? 18446744073709551608 : var_12)), (((!(arr_5 [i_0] [i_4 + 2] [i_3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_20 = (((arr_23 [i_5] [i_6] [i_6]) ? (arr_23 [i_5] [i_6] [i_5]) : 12209160130333624904));
                var_21 = var_14;
            }
        }
    }
    var_22 = (((((var_0 ? (~var_8) : ((22782 ? 18446744073709551615 : var_7))))) ? var_14 : -18446744073709551615));
    #pragma endscop
}
