/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 28930;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = ((((max((arr_0 [i_0 + 4]), (arr_0 [i_0 - 1])))) << (((((arr_1 [i_0 + 3]) ? (arr_0 [i_0 + 3]) : (arr_1 [i_0 + 1]))) - 28466))));
        var_21 = (arr_0 [i_0 + 1]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_22 = (((arr_4 [i_0 - 1] [i_0 + 2]) ? -854293212455045787 : (arr_4 [i_0] [i_0 - 1])));
                arr_8 [1] [i_1] [i_0] = (((var_6 * 17447281061832611635) ? ((((!(arr_3 [11]))))) : (arr_7 [i_0 + 2])));
            }
            var_23 |= (((arr_6 [i_0 + 4] [i_1] [i_0 + 2] [i_0 - 1]) + (arr_6 [i_0 - 1] [6] [i_0] [i_0 - 1])));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_24 = (min(var_24, ((min(((((17634388124463294028 - (arr_12 [i_3] [5] [i_3]))))), (((((max(-64, (arr_3 [i_0 - 1]))))) - (((arr_11 [2] [i_0] [2]) + (arr_1 [6]))))))))));
            arr_13 [i_3 + 1] [i_3] [i_0 + 1] = (arr_5 [6] [i_3]);
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_6] [i_5 + 1] [i_3] [i_4] [i_3] [i_0] = (min(26, (((arr_2 [i_0 + 1]) << (((arr_16 [i_0 + 1] [i_3] [i_4] [i_5 + 1]) ? var_12 : (arr_6 [11] [i_3] [i_4] [i_5 - 2])))))));
                            var_25 = (min(var_25, (max(((1823265207 ? (arr_9 [i_5]) : (arr_16 [i_0] [i_5] [i_3 - 1] [i_4 + 3]))), (max((arr_9 [i_5]), (arr_6 [8] [i_3 - 1] [i_4] [10])))))));
                            arr_22 [i_0] [i_3] [2] [i_3] [i_6] = (((((max(-64, (arr_19 [i_6] [i_5 - 1] [7] [i_5] [i_4 + 1] [i_3 - 1] [i_0]))) <= (arr_10 [i_3] [i_4 - 1] [i_4 + 1]))) ? (((min((arr_19 [i_0 + 3] [i_3 + 1] [1] [i_4 - 1] [i_5] [i_6] [i_6]), 17634388124463294028)) >> (((((arr_4 [2] [i_3]) & (arr_16 [i_0 - 1] [i_3] [5] [i_5 - 2]))) - 10260)))) : ((((((((arr_4 [11] [i_5 - 1]) ^ (arr_1 [1])))) && ((!(arr_12 [i_4 + 4] [i_3 + 1] [i_6])))))))));
                        }
                    }
                }
            }
            var_26 = (max((((arr_20 [i_0] [8] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]) | ((7948327068869098185 + (arr_4 [i_0] [i_3 + 1]))))), (min(((min(26, (arr_0 [i_0])))), (16777215 % 7948327068869098185)))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_27 = max((max((arr_11 [i_7] [i_0 - 1] [i_7]), (arr_11 [0] [i_0 - 1] [i_7]))), ((max((arr_18 [i_7] [i_0 - 1] [i_7]), (arr_18 [i_7] [i_0 - 1] [4])))));
            var_28 = ((((max((arr_14 [4] [i_0 + 4] [i_7] [i_7]), (arr_14 [9] [i_0 + 3] [4] [i_7])))) ? (((arr_24 [i_7]) ? (arr_24 [0]) : (arr_24 [i_0 + 1]))) : (arr_14 [10] [i_0 + 3] [i_7] [i_0 + 3])));
        }
        var_29 = 1483757757585604078;
    }
    #pragma endscop
}
