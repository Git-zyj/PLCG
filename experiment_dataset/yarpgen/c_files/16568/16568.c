/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((min(33768, 126))) ? 33768 : var_9));
        var_16 = ((((((max(var_4, var_2))) ? (((33771 >> (((arr_1 [11] [11]) + 81))))) : (min((arr_0 [i_0 - 1] [i_0]), (arr_0 [8] [i_0]))))) % ((((((var_1 ? var_4 : (arr_2 [i_0 - 1] [i_0])))) ? (arr_3 [i_0]) : -65)))));
        var_17 = (min(var_17, (!var_10)));
        var_18 = (min(var_18, -65));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = ((31768 ? 33771 : 13928));
        var_20 = -var_9;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_21 = 1505395587062856827;
                                var_22 = (min(var_22, (((var_1 > ((min(31764, (!31764)))))))));
                                var_23 = var_14;
                                arr_20 [i_2] [i_3] [i_1] [i_5] = ((((!(((var_0 ? var_6 : (arr_2 [i_4] [i_4])))))) || (arr_14 [9] [i_2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((((((33768 ? 1976508887 : var_10)) << (33771 - 221)))) ? (((max(((((arr_0 [i_1] [i_3]) && (arr_10 [1] [i_2])))), (arr_6 [i_2 + 3]))))) : (max(((var_14 ? (arr_16 [i_2] [i_6]) : (arr_12 [i_1] [i_1] [i_3] [i_6]))), (arr_21 [i_1] [i_2] [i_3] [2]))))))));
                                arr_26 [i_2] [i_2] [i_1] = (min(-64, 1505395587062856827));
                                var_25 ^= ((var_7 | (((arr_18 [i_3] [i_3] [i_3] [i_6] [i_3] [i_3]) ? 6169772335934473890 : -1505395587062856813))));
                            }
                        }
                    }
                    var_26 = (min(var_26, ((((((!(arr_0 [i_1] [i_3])))) < ((~(((arr_21 [i_1] [i_1] [i_3] [i_3]) % var_0)))))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_27 = ((((max((arr_28 [i_8]), (arr_27 [i_8])))) ? (arr_27 [i_8]) : ((((arr_27 [i_8]) < (arr_28 [i_8]))))));
        var_28 = (min(var_28, 83));
    }
    var_29 = (min(var_29, (1976508887 == 129)));
    var_30 = (max(var_30, ((min(112, var_2)))));
    #pragma endscop
}
