/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_13 *= ((((var_4 ? 1641879640 : (arr_1 [i_1 - 1] [i_1 + 1]))) / (arr_1 [i_0] [i_1 - 1])));
                arr_4 [19] [11] [i_0] = (239 + ((1641879640 ? 1641879642 : 128)));
            }
        }
    }
    var_14 = ((((max(var_8, var_12)))));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_15 = ((2041803507325540208 ? ((((arr_2 [i_2]) && ((min(-26915, var_6)))))) : ((((12 ? var_6 : var_11)) | var_7))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, ((min((min(((min(var_2, (arr_0 [i_5] [i_4])))), (min((arr_8 [13] [13]), (arr_7 [1]))))), ((4611686018427387903 / (arr_15 [14] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
                        arr_16 [i_4] [i_3] [6] [i_3] [i_3] = (((arr_9 [17]) ? (arr_6 [i_2]) : (arr_9 [i_4])));
                    }
                }
            }
        }
        var_17 &= ((((((((var_6 ? var_5 : 18446744073709551615))) ? (arr_1 [i_2] [i_2]) : (((var_7 ^ (arr_14 [i_2] [5] [i_2] [i_2] [i_2] [5]))))))) ? ((8027050201446293229 >> (2082673463 - 2082673445))) : var_11));
    }
    #pragma endscop
}
