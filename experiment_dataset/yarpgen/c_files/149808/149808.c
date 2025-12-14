/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((!-2675359335060431438) || (((((var_2 ? var_2 : var_12))) && (((var_6 ? var_2 : (arr_0 [i_1]))))))));
                var_15 = (((((max((arr_4 [i_0] [12]), (arr_3 [10]))) | ((~(arr_3 [i_1 - 2]))))) & ((min(1, (max(1, 1)))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (min(0, 0));
                        var_17 = (max(var_17, ((((~(arr_7 [i_0 + 3] [i_0 + 4] [i_0 + 2] [i_1 - 3])))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_18 = (!((((arr_7 [i_0] [i_1] [i_2] [i_1]) ? ((var_13 ? 0 : var_5)) : (188 | 0)))));
                            var_19 = ((((((~(arr_11 [i_4] [3] [i_2] [i_1 - 2] [i_0 + 1]))) ^ var_2))) || (arr_6 [1] [i_1 + 1] [i_1 + 1] [i_3]));
                        }
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_20 = (((((-789941840 ? var_9 : 1))) ? (arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0]) : (((!(((-(arr_4 [i_0] [i_0])))))))));
                            var_21 = (max(var_21, 4094));
                            var_22 = 148;
                        }
                    }
                    var_23 ^= -3566531200;
                    var_24 |= -1996973602;
                    var_25 = 1802118370704073594;
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_26 = 1996973587;
        var_27 = (max(var_27, (((-(((arr_9 [i_6] [i_6] [0] [i_6] [i_6] [i_6]) ? (arr_1 [i_6 + 3]) : ((var_3 ? (arr_16 [i_6]) : 0)))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 = ((var_5 || ((max((arr_17 [i_7] [i_7]), (arr_18 [i_7] [i_7]))))));
        var_29 = ((!((min((arr_18 [i_7] [i_7]), (arr_18 [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                {
                    var_30 = ((!(arr_17 [i_8 - 1] [i_9 - 1])));
                    var_31 = ((!(((~(~2198833128))))));
                }
            }
        }
    }
    #pragma endscop
}
