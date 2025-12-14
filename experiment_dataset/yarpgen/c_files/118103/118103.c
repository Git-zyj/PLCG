/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] = 7332;
                    arr_11 [9] [4] = ((~((~((var_7 ? var_7 : var_13))))));
                    arr_12 [i_1] [i_1] [i_2] = ((!(((1035597917 ? 58203 : var_4)))));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_3] [i_0 + 4] = (((!-1035597917) ? (min(3952837036, (~var_11))) : ((max(var_3, (arr_0 [i_0 - 1]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] [i_3] = (((arr_5 [i_0 + 4] [i_0 - 2]) ? (!var_6) : ((2679803975901610605 ? var_8 : var_5))));
                        var_20 += (((((var_14 ? -23128 : (arr_3 [i_0])))) ? (arr_7 [i_3 - 1] [i_0 + 2]) : ((-1035597917 ? -1251806942 : 4257267430))));
                    }
                }
                var_21 ^= (((arr_0 [i_1]) / ((8244 ? 7332 : -31621))));
                var_22 = (((((~(arr_5 [i_0] [i_0])))) | (((arr_14 [i_0] [i_0]) ? (arr_4 [i_0 - 4] [i_0 + 2] [i_0 - 2]) : var_3))));
                arr_19 [13] [13] [i_0] = ((127 ? 1035597917 : 31));
                var_23 = (~var_15);
            }
        }
    }
    var_24 = var_3;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_25 = ((((min(((16 ? (arr_20 [i_5] [i_5]) : (arr_8 [i_5] [13] [12]))), (((var_7 + 2147483647) >> var_19))))) ? ((max(72, (~var_12)))) : (((arr_3 [i_5]) + var_1))));
        var_26 ^= max((arr_21 [i_5] [i_5]), (~224));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_27 = ((((min((!var_2), (arr_25 [i_5] [i_6] [i_5] [i_9])))) ? (((arr_24 [i_6] [i_6] [i_8] [i_9]) ? 17630884390615359382 : var_0)) : (((((37699865 ? var_14 : var_12))) & (arr_1 [i_6])))));
                                var_28 = ((((max(var_3, var_12)) != 29845)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_29 = (+(((arr_24 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 1]) ? (arr_31 [i_10 + 2] [i_10] [i_10 + 2] [i_10] [i_10]) : var_9)));
                                var_30 = ((var_16 ? (~var_13) : (((var_17 ? var_9 : var_1)))));
                                arr_37 [i_10] [i_10] = var_17;
                            }
                        }
                    }
                    var_31 ^= (((max(((var_19 ? 4257267430 : (arr_1 [i_5]))), (((var_16 ? 11042 : 0))))) == 1));
                    arr_38 [i_7] [i_5] [i_6] [i_5] = ((((min(var_4, (arr_26 [i_5] [i_5] [i_5])))) | ((min((arr_26 [i_5] [i_6] [i_5]), (arr_26 [i_5] [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
