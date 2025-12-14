/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_2] [i_3 - 3] [i_4] = (((((982637091 / 255) >= (((var_4 ? var_0 : var_1))))) ? var_3 : (((arr_2 [i_0]) & (arr_10 [i_4 - 1] [i_0 - 1] [i_4 - 1])))));
                                arr_13 [i_4] [i_1] [i_0] [i_3] [i_4] [i_1] = (((((arr_8 [i_2] [i_3] [17] [i_3 - 3]) ? (arr_8 [22] [i_3] [i_3] [i_3 - 3]) : (arr_8 [i_0] [i_0] [i_3] [i_3 - 3]))) - (56951 * 0)));
                                var_12 = (arr_11 [i_4] [i_1] [i_0] [i_0] [i_4]);
                                var_13 = 1;
                            }
                        }
                    }
                    arr_14 [i_0 - 1] [i_0 - 1] [i_1] [i_2] = ((-((((max(var_4, (arr_2 [15])))) ? (28345 >= var_11) : (arr_11 [i_2] [i_1] [1] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] = (((((((((arr_17 [i_1] [i_1] [i_1] [i_1] [21]) ? var_2 : (arr_2 [i_5]))) > (arr_10 [i_6] [i_2] [i_1]))))) ^ (arr_8 [1] [i_1] [i_5] [14])));
                                var_14 = (arr_15 [4]);
                                var_15 &= arr_1 [18];
                                arr_21 [i_0] [i_1] [i_6] [i_0] [i_5] = (((max((((arr_6 [i_1] [i_1] [i_2]) + var_7)), (min(var_7, var_8)))) + ((min((21 + var_5), (arr_8 [22] [i_1] [i_5] [i_6]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 *= ((((max(var_1, (((arr_11 [i_2] [16] [i_2] [i_2] [i_2]) * var_11))))) && (arr_8 [i_0] [i_7] [i_7] [1])));
                                var_17 = ((!((((arr_18 [i_1] [i_0 - 1] [12] [i_8] [12]) ? 59614 : (arr_18 [i_0] [i_0 - 1] [i_8] [i_7] [i_8]))))));
                                var_18 = (max((((var_5 ? (max(9, (arr_2 [i_1]))) : ((max(var_1, var_6)))))), ((~((var_7 ? var_7 : -122910393))))));
                            }
                        }
                    }
                    arr_27 [i_2] [i_0] [i_0] = (!((((arr_11 [i_2] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (min((arr_9 [i_1]), var_1))))));
                }
            }
        }
    }
    var_19 = var_8;
    #pragma endscop
}
