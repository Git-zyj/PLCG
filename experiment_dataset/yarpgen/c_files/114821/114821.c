/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, ((min((var_16 % 53827), (((arr_0 [i_0] [i_0]) ? (min(var_9, (arr_0 [5] [i_0]))) : ((var_9 ? var_2 : 1)))))))));
        var_20 = (min(var_20, (~var_4)));
        var_21 *= (+((var_5 ? ((((arr_0 [i_0] [i_0]) ? 1 : 1708998544))) : ((1 ? (arr_0 [i_0] [i_0]) : var_15)))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = ((((((((arr_1 [i_1]) + 7)) & (((var_0 ? 20350 : var_8)))))) ? ((max(((-(arr_5 [i_1]))), (arr_4 [i_1])))) : (max((arr_2 [i_1]), (arr_0 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((~(arr_4 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_23 *= ((1 >= ((-(arr_0 [i_3] [i_3])))));
                var_24 = (min((((var_13 >> (arr_10 [i_3] [7] [8])))), ((max((arr_2 [i_3]), (arr_4 [i_2]))))));

                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    var_25 = (max((~6789685469736188321), ((max((arr_1 [i_4 + 1]), ((1 != (arr_12 [i_2] [i_2]))))))));
                    var_26 = var_13;
                }
            }
        }
    }
    #pragma endscop
}
