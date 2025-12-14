/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_11) ? var_6 : var_4));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (((((-547767537 ^ (arr_0 [i_0])))) ? (min(var_6, var_1)) : (2336364617 % 6233)));
        arr_2 [i_0] [i_0] = ((~((547767550 ? (arr_1 [i_0]) : (arr_1 [i_0])))));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_18 = var_0;
            var_19 = ((var_1 ? ((((((((arr_1 [i_0]) == (arr_5 [i_1] [18]))))) != (((arr_1 [i_0]) ? (arr_5 [5] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))))) : (arr_1 [i_0])));
            arr_7 [i_0] [i_1] [i_0] = -81;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [18] = (((((arr_5 [i_0] [i_3]) < (arr_10 [i_0]))) ? (((((((arr_1 [i_0]) == 2147483647))) == ((var_5 ? 464954670 : (arr_9 [i_1])))))) : (arr_12 [i_3] [13] [i_0] [i_0] [i_0] [i_0])));
                        var_20 = (min(((-((564491133 ? (arr_0 [i_0]) : 464954665)))), (arr_6 [i_1] [i_1])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_21 += (min((-127 - 1), 78));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_25 [i_0] [1] [4] [i_0] = 3;
                        var_22 *= var_6;
                    }
                }
            }
            arr_26 [i_0] [i_4] = (3353137362136628631 ? ((((arr_12 [i_0] [i_4] [i_0] [i_4] [i_4] [i_4]) ? (arr_12 [i_0] [1] [i_0] [1] [4] [i_0]) : (arr_16 [i_0])))) : (min(18446744073709551615, ((min(464954678, 43119))))));
        }
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            arr_30 [8] [8] [i_0] = ((2677784743 ? ((-(arr_3 [i_0]))) : (min(1345503048, (((arr_15 [16] [17]) ? 40 : 1))))));
            var_23 = (arr_21 [0] [0] [i_0] [i_7 + 1]);
            arr_31 [i_0] [i_0] [i_7] = var_7;
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_24 = var_5;
            var_25 += ((var_7 >> (var_13 - 128)));
            arr_35 [i_0] [i_0] = (arr_6 [i_0] [i_8 - 2]);
        }
    }
    #pragma endscop
}
