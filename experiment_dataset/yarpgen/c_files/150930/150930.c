/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_20 = (((((~(64 << 0)))) ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : ((~(!-5241551289974250259)))));
                    var_21 &= (max((((arr_0 [i_1]) ? (arr_0 [i_0]) : -0)), ((((((arr_6 [i_0]) ? (arr_4 [i_0] [i_0] [i_2 + 1]) : (arr_3 [1] [10] [i_0])))) ? ((max((arr_3 [i_0] [i_1] [3]), (arr_3 [i_2] [7] [i_2])))) : (((!(arr_4 [i_2] [7] [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_22 = ((~(min((arr_4 [i_3] [i_1] [i_0]), ((~(arr_3 [i_0] [i_1] [i_3])))))));
                    var_23 = (min(var_23, ((((0 >= 65535) && (arr_8 [i_0] [i_1] [i_3] [i_0]))))));
                    var_24 = (((((arr_1 [i_0] [i_3]) | (arr_0 [i_3]))) | (arr_5 [i_3] [i_3])));
                    var_25 &= ((-(arr_9 [i_1] [i_1] [i_1] [i_1])));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_26 = ((-var_1 ? (((arr_11 [i_5 + 2] [i_5] [11] [i_5]) ? (arr_11 [i_5 + 3] [i_5] [i_5] [i_5]) : (arr_11 [i_5 + 1] [i_4] [i_4] [i_4]))) : (((arr_11 [i_5 - 1] [i_5] [1] [i_1]) - (arr_11 [i_5 + 1] [i_1] [5] [i_1])))));
                                var_27 = (--23834);
                            }
                        }
                    }
                    var_28 = (min(((((arr_15 [10] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) && (arr_14 [i_0] [i_1] [i_1] [0])))), (((arr_1 [i_0] [9]) ? (arr_9 [i_0] [i_1] [i_0] [i_1]) : (arr_6 [i_0])))));
                }
                var_29 = ((~(((var_1 > (arr_4 [1] [i_0] [i_0]))))));
                var_30 += ((arr_6 [i_1]) / ((((arr_5 [i_0] [1]) ? (arr_12 [i_1] [i_1] [i_1] [10]) : (arr_12 [5] [i_0] [i_1] [i_1])))));
                arr_19 [i_0] [i_1] [1] = ((((-(arr_7 [i_0] [i_0] [i_0]))) > ((((arr_7 [0] [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
