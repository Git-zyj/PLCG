/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_2 - 3] [i_1] [i_1] [11] = (((((1 ? 1 : var_17))) ? (arr_2 [i_1 + 1]) : (arr_3 [i_0 + 1] [i_0 - 1] [i_1])));
                    var_20 = var_19;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [6] [i_1] [i_1] [i_3] [15] = ((~(arr_5 [i_2] [i_2] [12] [i_1])));
                                arr_13 [i_1] [i_3] [i_2] [i_1 - 3] [i_1] = 2147483647;
                                var_21 = -118554637;
                                var_22 += ((!(arr_2 [i_2 - 3])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = ((!(arr_11 [i_1] [i_6] [i_7])));
                                arr_21 [i_0] [i_1] [i_0] [i_1] [i_7] [1] = (((var_8 ? var_11 : var_18)) % (((arr_6 [11] [1] [i_6]) | var_1)));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_5] [i_1] = (((((-2147483647 - 1) > 1)) ? 1 : 1));
                    arr_23 [i_0] [1] [i_1] [i_1] = ((var_1 ? (arr_15 [i_5 - 1] [i_5] [i_5] [i_5]) : (-2147483647 - 1)));
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_24 = (max(((10904922995048195583 ? 1 : 32767)), ((((arr_19 [i_1] [i_8 - 2] [i_1]) <= 1)))));
                    var_25 |= ((~(arr_3 [i_1 - 1] [i_8 + 1] [i_8])));
                    var_26 = ((((min(83894815, (arr_15 [i_1] [i_0] [i_1] [i_1])))) && 7));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    arr_29 [i_1] [i_1] [8] = (!((((arr_10 [i_0 + 1] [i_1] [15] [i_0 - 1] [i_1]) ? var_13 : 1))));
                    var_27 -= var_7;
                }
                arr_30 [i_1] [i_1] = (min(248, (min(var_8, var_7))));
                var_28 = (((max(var_15, var_19)) + (((var_1 ? (((arr_15 [5] [i_1] [i_0] [i_1]) ? var_16 : (arr_4 [i_0]))) : 1)))));
            }
        }
    }
    var_29 = ((var_2 ? var_4 : (-2147483647 - 1)));
    var_30 = var_13;
    var_31 = -83894816;
    var_32 -= (((((var_12 ? 1048575 : var_19))) ? 1 : var_2));
    #pragma endscop
}
