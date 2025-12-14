/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? ((max((max(var_17, var_8)), var_15))) : (4 ^ var_6)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_0] = var_16;
                    var_18 = 2282138269839190176;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_19 = (min((((!(38 >= var_14)))), 4));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_6] = var_8;
                        arr_20 [i_3] [i_4] [i_6] = ((38 ? (arr_10 [i_4] [i_5]) : (arr_6 [i_4] [i_6] [i_6 - 2])));
                        arr_21 [i_6] = (min(var_6, (((1 * ((min(var_14, var_8))))))));
                        var_20 = ((((((arr_11 [i_6 + 2] [i_5]) | (arr_11 [i_4 + 1] [i_4 + 1])))) || (((~(max(3287500558192075805, -3287500558192075805)))))));
                        var_21 = (min(((((!(arr_9 [i_3]))) ? ((((arr_18 [i_6]) ? 57 : var_14))) : (13 ^ var_6))), (max(-2693326660348924984, -39))));
                    }
                }
            }
        }
        arr_22 [i_3] = var_6;
    }
    var_22 |= (~var_15);
    #pragma endscop
}
