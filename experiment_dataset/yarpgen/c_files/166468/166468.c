/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 ^= var_4;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = ((~-8841) ? var_3 : ((((arr_2 [i_0] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : var_8))));
            arr_4 [i_0] [i_0] = (((arr_2 [i_0] [i_1]) ? (arr_2 [i_1] [i_1]) : var_7));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_13 = (max(var_13, (arr_1 [i_0])));
            arr_9 [4] [i_2] |= (arr_6 [1] [i_2]);
            var_14 = (min(var_14, ((((arr_3 [i_0] [1] [i_0]) ? ((min((arr_6 [6] [i_2]), (arr_6 [10] [i_2])))) : (arr_3 [i_0] [i_0] [i_0]))))));
            arr_10 [i_0] [i_2] [i_2] = min((max(var_10, (arr_7 [i_2]))), var_1);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_15 = arr_16 [1];
                var_16 = ((+(((arr_2 [i_3] [i_3]) ? 19 : ((~(arr_8 [i_3])))))));
                var_17 = (max(var_17, var_2));
                var_18 += (~var_2);
                var_19 = ((!(arr_8 [i_0])));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_20 = ((-(arr_3 [i_5] [i_5] [i_5])));
                var_21 ^= (arr_20 [i_3] [i_3] [i_5] [i_3]);
                arr_21 [8] [i_3] [i_0] [8] |= (arr_12 [i_0] [i_0]);
            }
            var_22 = (max(((((arr_7 [12]) ? (arr_12 [i_0] [i_3]) : var_5))), var_0));
            arr_22 [i_0] = ((((min(((min((arr_20 [i_0] [i_0] [1] [i_3]), var_6))), 576179277326712832))) ? var_9 : (arr_0 [4])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_23 += (+((((((arr_15 [i_0] [i_3] [i_6] [0]) ? (arr_16 [i_0]) : var_10))) ? (arr_27 [i_0] [10] [8] [8] [i_8]) : var_8)));
                            var_24 = (max(var_24, ((((((-385922345 ? -21110 : 2147483647))) ? var_3 : 11899853103374362780)))));
                            arr_29 [5] [i_0] [i_3] [1] [1] [i_3] = (((((-(max(var_10, var_8))))) ? (arr_16 [1]) : ((var_5 ? (arr_5 [1] [i_7]) : var_7))));
                            var_25 = (arr_19 [i_0] [i_8] [i_6] [i_0]);
                        }
                    }
                }
            }
            arr_30 [i_0] [2] |= ((((max(var_9, (arr_15 [i_0] [i_0] [2] [i_3])))) ? var_1 : (min(var_8, var_5))));
        }
        var_26 |= (arr_19 [i_0] [i_0] [i_0] [8]);
        arr_31 [i_0] [i_0] = ((((min((arr_14 [i_0] [i_0] [6]), (arr_14 [i_0] [i_0] [i_0])))) ? (((+(((arr_18 [i_0] [i_0] [i_0] [i_0]) ? (arr_20 [i_0] [12] [i_0] [12]) : (arr_1 [i_0])))))) : (min(var_7, 1))));
        var_27 &= (~var_3);
    }
    var_28 = ((!(((var_10 ? 1 : var_7)))));
    var_29 = (min(((~((min(var_2, var_10))))), (((max(var_3, var_10))))));
    var_30 = ((((min((max(var_6, var_0)), ((var_3 ? var_0 : var_8))))) ? var_7 : var_7));
    var_31 = var_10;
    #pragma endscop
}
