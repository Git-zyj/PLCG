/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (~4060206298);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 = ((((((var_10 ? (arr_7 [20] [i_2] [i_2]) : var_13))) ? (arr_1 [i_0]) : ((((var_4 < (arr_3 [22] [i_2] [i_3]))))))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] = (max(((((((((arr_4 [i_0]) != var_12)))) ^ (min(var_10, var_12))))), ((-(arr_2 [9])))));
                            var_18 = (arr_4 [i_2]);
                            var_19 = (min(((min((((!(arr_0 [22])))), (arr_5 [i_0])))), (((-(arr_2 [i_3]))))));
                            var_20 = ((((max((max(1775937203, 246)), (arr_0 [i_2 + 1])))) ? (arr_3 [i_0] [i_0] [i_0]) : (((min(960, var_4))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_18 [i_0] [i_1] [i_4] [i_5] [1])));
                                var_22 *= ((~(((!((((arr_19 [i_0] [1] [i_0] [i_0]) ? (arr_19 [i_0] [i_0] [i_0] [4]) : 245))))))));
                                var_23 = (max(-98, 36));
                                var_24 = (min(var_24, ((min((arr_4 [i_0]), (((arr_21 [i_0] [i_1] [i_4] [i_5] [i_6 - 2] [i_1] [i_6 - 2]) ? var_12 : (arr_21 [i_0] [i_1] [i_4 + 2] [i_5 - 1] [i_5 - 1] [i_6 - 1] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(((-((var_9 ? var_13 : var_3)))), (~var_4)));
    #pragma endscop
}
