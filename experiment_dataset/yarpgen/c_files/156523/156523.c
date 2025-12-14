/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_12 = (((8289478158619003748 ^ var_9) ? (arr_0 [i_1] [i_0]) : (((min(var_1, (arr_1 [i_1 + 2] [i_0 - 3])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_13 = (((arr_10 [i_2] [4] [i_2] [i_4] [i_2]) >= var_7));
                            arr_16 [i_2] [20] [i_2] [i_3] [i_2] = ((-(((arr_2 [i_3 + 2]) ^ -3544114529323491126))));
                            arr_17 [i_2] = (max((~8289478158619003776), var_0));
                            arr_18 [i_0] [i_2] [i_0] = 8738609001623274762;
                        }
                    }
                }
            }
            var_14 *= (((((-(arr_4 [i_0 - 3] [i_1] [i_1 - 3])))) ? ((((arr_10 [8] [i_1] [i_1 + 3] [i_0] [i_1]) << (8289478158619003748 - 8289478158619003725)))) : -3544114529323491110));
        }
        var_15 *= (min(((-(arr_13 [6] [i_0 - 2] [i_0 - 2] [i_0 + 2] [6]))), (!var_2)));
        var_16 = (min(var_16, var_6));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_25 [i_5] [i_6] [i_6] = (arr_24 [i_5] [i_5] [i_6]);
            var_17 = arr_23 [i_6] [i_6] [12];
            var_18 = (i_5 % 2 == 0) ? (((var_4 << (((arr_20 [i_5]) - 50031))))) : (((var_4 << (((((arr_20 [i_5]) - 50031)) + 42989)))));
        }
        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            arr_30 [i_5] = (((arr_27 [i_7 - 3]) == (var_6 + var_8)));
            arr_31 [i_5] = min(((~(arr_26 [i_7 - 3] [i_7 + 2] [i_7 - 3]))), (arr_26 [i_7] [i_5] [i_5]));
            var_19 = var_1;
        }
        arr_32 [i_5] = ((-(arr_20 [i_5])));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_36 [i_8] = ((~((-1202306611166112819 ^ (arr_23 [i_8] [i_8] [i_8])))));
        var_20 ^= (min(((min((arr_28 [i_8]), (!var_9)))), 127));
    }
    var_21 = (((((~(-3869808904074347261 | -818664204)))) ? (~63277) : -8289478158619003756));
    #pragma endscop
}
