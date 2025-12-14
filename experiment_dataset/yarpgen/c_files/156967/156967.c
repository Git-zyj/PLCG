/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 203;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                var_16 = (arr_12 [18] [i_2] [5] [i_2]);
                                var_17 = 2;
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_18 = (arr_8 [i_5] [i_2] [i_1] [15]);
                                var_19 -= (((((arr_13 [i_0] [0] [i_1] [i_3] [i_5]) ? (arr_2 [i_5] [i_2]) : var_6)) % ((-(var_5 > -2147483643)))));
                                var_20 &= (arr_12 [i_0] [i_0] [i_2] [i_5]);
                                var_21 = (((((arr_3 [i_0] [i_1] [i_2]) || (arr_3 [10] [i_1] [i_0]))) ? (((arr_3 [i_3] [i_1] [i_2]) ? (arr_3 [12] [2] [7]) : (arr_3 [i_5] [i_3] [i_1]))) : (arr_3 [i_1] [i_2] [i_5])));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                            {
                                var_22 += (65535 >> 1);
                                var_23 = (min(var_23, ((((((max(32, (arr_11 [i_0] [i_0] [12] [i_0] [4] [i_1] [i_6]))))) ? ((((((20 ? (arr_6 [i_1] [i_3] [i_6]) : (arr_6 [i_1] [i_1] [i_0])))) ? (((arr_13 [i_0] [14] [i_1] [i_3] [i_6]) & (arr_10 [i_6] [i_3]))) : (arr_6 [i_0] [i_0] [i_0])))) : (min(-14489, (arr_12 [i_0] [18] [i_3] [i_0]))))))));
                            }
                            arr_20 [i_3] [i_3] [i_2] [i_2] = (max(((((arr_9 [i_2] [i_3] [i_2] [i_3]) > ((min(var_13, (arr_8 [i_0] [i_1] [i_2] [i_3]))))))), (((arr_4 [i_0]) ? (arr_8 [i_0] [i_1] [4] [4]) : var_10))));
                            arr_21 [i_0] [16] [i_1] [i_2] [i_2] [i_3] = ((~(max((arr_18 [i_0] [i_0] [i_0] [8] [i_3] [i_0]), (arr_13 [i_0] [i_1] [i_3] [i_2] [i_0])))));
                            arr_22 [i_3] [i_2] [i_2] [i_3] = (arr_5 [i_0] [i_1]);
                        }
                    }
                }
                var_24 = (~((~(arr_7 [i_0] [i_1] [i_1] [5]))));
            }
        }
    }
    var_25 = 0;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_26 = (((arr_1 [1]) ? (!var_3) : (((arr_13 [0] [i_8] [i_9] [12] [8]) * var_11))));
                    var_27 = ((~(arr_1 [i_7])));
                }
            }
        }
    }
    #pragma endscop
}
