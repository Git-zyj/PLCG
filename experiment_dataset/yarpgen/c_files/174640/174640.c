/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_10 -= (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = (max(((!(((-8674355013481885082 ? var_3 : (arr_8 [i_0] [i_1 - 3] [i_1] [i_3])))))), ((!(arr_0 [i_0])))));
                            var_12 = (arr_4 [i_0] [1] [i_2]);
                            var_13 = (arr_5 [i_0] [i_1] [i_2] [i_2]);
                            var_14 -= ((-(min(((-2138508678 - (arr_5 [i_0] [2] [i_2] [6]))), ((((arr_4 [i_0] [i_1] [i_3 + 1]) - (arr_2 [i_0] [i_1 - 4] [i_2]))))))));
                        }
                    }
                }
                var_15 = min(((((arr_6 [i_0] [i_0]) / var_0))), (((max(30540, 13753)))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] [i_4] = ((!(((1391049507 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_6 [i_5] [i_4 + 3]))))));
                                var_16 = ((((((arr_0 [10]) ? 2771614275490837894 : var_5))) ? ((-(arr_6 [i_0] [i_5]))) : (((103 ? var_8 : var_5)))));
                                var_17 += (-((var_2 ? (arr_14 [i_0] [i_0] [i_4] [i_5] [i_6] [i_0] [i_6]) : 0)));
                            }
                        }
                    }
                    var_18 = (~(((arr_4 [i_4] [i_1] [i_1]) - (arr_11 [i_4] [3] [i_0] [i_0]))));
                    var_19 |= (arr_6 [i_4 - 1] [i_0]);
                }
                for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_1] = (min(((min(((var_3 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))), (((3 >> (((arr_14 [i_0] [i_0] [i_1] [i_1 - 1] [i_1] [i_7] [i_7]) - 135)))))))), (min(((var_0 ? 255 : (arr_6 [4] [i_7 + 2]))), (arr_18 [i_7] [i_7] [i_7 + 3] [i_7 + 3])))));
                    var_20 = (arr_20 [i_1] [i_1 - 3]);
                }
                for (int i_8 = 1; i_8 < 8;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_28 [i_0] [5] [4] [i_8 + 1] [i_9] [i_10] = ((((max((1 > 1814536501), (arr_23 [6] [i_8 - 1] [6])))) ? (~-252) : (min(var_1, (arr_5 [i_0] [i_1] [i_8] [i_10])))));
                                var_21 = (max(var_21, ((min(83, (min(((((arr_4 [i_0] [i_0] [i_0]) && (arr_12 [i_0] [i_0] [i_0] [i_10])))), (arr_5 [i_1] [i_8 + 1] [1] [3]))))))));
                            }
                        }
                    }
                    var_22 += ((((min(-1, (arr_2 [i_1 - 4] [i_8 + 1] [i_8])))) && ((min(((max(var_5, (arr_17 [i_0] [i_1] [i_8] [i_8])))), (max((arr_5 [3] [3] [i_8 + 2] [i_8]), var_3)))))));
                    var_23 = (max(var_23, (((!((!(((var_1 ? (arr_4 [i_0] [i_1] [i_8]) : (arr_24 [i_0] [1] [1] [i_1] [7])))))))))));
                }
                arr_29 [i_0] = (((4 ? (arr_9 [1] [2] [i_0]) : ((min(-21982, (arr_1 [i_0])))))) - ((-(((arr_10 [i_0] [i_0]) ? var_0 : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_24 |= (((((~var_8) + -91))) ^ (max(var_7, var_9)));
    var_25 += max(((max(var_2, var_5))), (((var_0 || var_9) ? (min(-103, var_9)) : 1)));
    #pragma endscop
}
