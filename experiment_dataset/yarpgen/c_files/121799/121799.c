/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_17 |= max(((((arr_5 [4] [i_1 - 2] [i_1 - 2]) <= (arr_5 [i_1] [i_1] [i_1 - 1])))), (((arr_5 [i_1 - 2] [i_1] [i_1 + 2]) ? -1201322928 : (arr_5 [1] [i_1 - 1] [i_1 + 2]))));
                    arr_6 [7] [i_1] [i_1] [i_2] = ((~(((arr_0 [i_1 - 1]) ^ (arr_0 [i_1 - 1])))));
                    var_18 = (min(var_18, (min((((arr_5 [i_1 - 2] [i_1 - 1] [i_1 + 1]) ? ((max(9858, 0))) : (-16756 * var_14))), ((((arr_2 [i_0]) ? (arr_1 [i_1]) : 1201322917)))))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_19 += (arr_9 [i_1 + 1]);
                        var_20 = ((!(arr_2 [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_21 = ((-((((((arr_15 [8] [i_1] [i_1] [i_1] [i_1]) ? 1201322928 : var_7))) ? (arr_15 [i_1] [i_1 + 1] [i_3 - 1] [1] [i_3 - 1]) : (arr_10 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2])))));
                                var_22 ^= (arr_8 [9] [9] [8] [9]);
                            }
                        }
                    }
                    var_23 = (((arr_5 [i_0] [i_1 - 2] [i_0]) ? (((-(max((arr_13 [7] [7] [i_3]), var_7))))) : (min((((-(arr_15 [4] [i_1] [i_1] [i_0] [i_0])))), ((2147483647 ? -1201322948 : 4292146911))))));
                    var_24 = (((((var_14 ? (max(-1201322938, (arr_16 [0] [i_3]))) : (((arr_12 [i_0] [i_0] [1] [1] [i_3 - 1]) ? -33 : (arr_10 [6] [6] [6] [i_3] [i_3 - 1] [i_3])))))) ? (arr_10 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((arr_11 [i_1] [i_1] [i_1 - 2] [i_3 - 1] [i_3 - 1] [i_1]) ? (arr_9 [i_1 - 1]) : (arr_3 [i_3 - 1])))));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 7;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 6;i_9 += 1)
                        {
                            {
                                var_25 = ((var_4 && ((max(var_0, (arr_11 [i_0] [i_0] [i_0] [i_9] [9] [i_0]))))));
                                var_26 = (((max(((var_1 ? 13988 : var_6)), (~-17324))) + (arr_15 [i_0] [i_0] [i_7] [i_7] [i_9])));
                                var_27 = (min(var_27, (arr_15 [i_0] [i_8 - 4] [i_7] [i_0] [i_0])));
                                var_28 = (max(var_28, ((((((-var_10 && (arr_11 [i_9 + 2] [i_9 + 2] [4] [i_9 + 2] [i_9 + 2] [i_9 - 1])))) > var_5)))));
                                var_29 = (min(var_29, (((((((27316 && 1201322914) % 6))) ? 0 : ((((max((arr_4 [i_8]), var_9))) ? (arr_19 [i_0] [i_1] [i_0] [i_8] [8] [i_0]) : (arr_14 [i_0] [i_1] [i_8] [i_8]))))))));
                            }
                        }
                    }
                }
                arr_23 [i_0] = (min(2147483617, -1201322928));
            }
        }
    }
    var_30 -= (((~1) ? (~var_0) : (((((max(-1201322932, var_16))) ? ((231 ? -10758 : 1201322917)) : var_2)))));
    #pragma endscop
}
