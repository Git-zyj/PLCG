/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 &= 1051599643;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (min(var_20, (arr_6 [i_0] [i_1] [i_2])));
                        var_21 = -1051599644;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_22 = (arr_2 [i_0] [i_4]);
                        var_23 = ((~(arr_7 [i_0] [i_0] [i_0] [i_0])));
                        var_24 = ((-1139165956 ? 1 : -1051599643));
                        var_25 = ((var_5 ? (arr_1 [i_2]) : (arr_4 [i_0] [i_0])));
                    }
                    var_26 = (max((min(var_6, -1051599629)), (arr_3 [i_0])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_27 = (arr_2 [i_0] [i_0]);
            var_28 = (min(var_28, ((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? ((((arr_7 [i_5] [i_5] [i_5] [10]) ? var_18 : (arr_7 [i_5] [3] [i_5] [i_5])))) : 2017612633061982208)))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_29 = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            var_30 = (((arr_3 [i_6]) ? ((~(arr_2 [i_0] [i_6]))) : ((4294967295 ? 1051599643 : (arr_3 [i_0])))));
            var_31 = (((~8105680762844134123) ? ((((arr_16 [i_0] [1]) < (arr_8 [i_0])))) : (arr_7 [i_0] [i_0] [i_0] [11])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        var_32 = (max(var_32, (~var_12)));
        var_33 = (arr_16 [i_7 - 1] [i_7]);
    }
    var_34 = var_11;
    #pragma endscop
}
