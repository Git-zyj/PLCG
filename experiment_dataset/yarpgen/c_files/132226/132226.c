/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_3, var_7))) ? 3 : var_12));
    var_19 = var_7;
    var_20 = var_15;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_21 = var_8;

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                var_22 = ((var_11 ? 1656 : (arr_4 [i_0 - 1] [i_1])));
                var_23 = var_17;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_24 = (arr_6 [i_0 + 3] [i_1] [i_1]);
                var_25 = (((arr_2 [i_0 + 3]) ? (arr_2 [i_0 + 3]) : 29525));
                var_26 = ((!(10375035125875152297 & 3)));
            }
            var_27 = var_5;
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_28 = 32764;
                            var_29 &= 108;
                            var_30 = var_17;
                            var_31 = (arr_14 [i_0] [i_5] [i_6] [3]);
                        }
                    }
                }
            }
            var_32 = (((~(max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_15 [i_0] [i_0] [i_0]))))));
            var_33 *= min(((65523 & (max(var_16, var_4)))), ((((arr_9 [i_0 - 3] [i_4 - 1] [i_4]) - ((65528 ? (arr_19 [i_0] [i_0] [3] [i_4 - 1] [i_4]) : (arr_17 [i_0] [i_0] [i_4] [8] [i_0])))))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_34 = ((-51 ? 1 : 0));
                        var_35 = (min(((~(var_7 - var_4))), ((((arr_18 [i_0 - 2] [i_0 - 3]) ? ((125829120 ? var_5 : var_11)) : (((113 || (arr_15 [i_0 - 1] [i_0] [i_10])))))))));
                    }
                }
            }
            var_36 &= (var_12 ? ((-(!8071708947834399344))) : (arr_19 [i_0] [6] [i_0] [i_0] [i_0 + 2]));
            var_37 *= (arr_0 [2] [i_0 - 3]);
            var_38 = (arr_24 [i_0] [1] [i_8]);
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            arr_34 [1] [i_0] = (((arr_29 [i_0 + 2] [i_11] [i_0] [i_11]) < ((max((-342295815 != 0), -var_6)))));
            var_39 &= (arr_29 [7] [7] [i_0 - 1] [i_11]);
        }
        var_40 = var_3;
        arr_35 [i_0] = (max((((80 ? 1606937427 : 215))), (max((arr_25 [i_0]), (arr_2 [i_0 - 3])))));
        arr_36 [i_0] = 59106;
    }
    #pragma endscop
}
