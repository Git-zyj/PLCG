/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (arr_4 [i_0]);
                var_22 = (!var_14);
                arr_5 [i_0] [i_1] = ((56189135 ? ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1])))) : (arr_2 [i_1])));
                var_23 += ((var_4 <= ((max(0, 120)))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_24 -= ((+(min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
                    var_25 = (arr_0 [i_0] [i_2]);
                    var_26 = (min(var_26, ((max((arr_2 [i_0 + 3]), -121)))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            {
                                var_27 *= ((var_18 * (((min(var_4, (!120)))))));
                                var_28 = ((!(arr_17 [i_0] [i_0 + 2] [i_3] [i_4] [i_5 + 1] [i_5] [i_5])));
                                arr_18 [i_3] [i_1] = ((((var_15 > (((105 ? (arr_15 [i_0] [i_5] [i_3] [i_4] [i_5] [i_0] [i_4]) : var_9))))) ? ((((arr_10 [i_4] [i_3]) < -var_4))) : (arr_12 [i_3] [i_1] [i_1] [i_1])));
                                var_29 = ((1 || (((var_14 ? (!50331648) : (((arr_10 [i_0] [i_3]) ? var_18 : (arr_10 [i_3] [i_3]))))))));
                            }
                        }
                    }
                    var_30 *= (min((max((arr_8 [i_0] [i_0] [i_0 - 3] [i_0]), (arr_17 [i_1] [i_1] [i_0 - 2] [i_1] [i_3] [i_0] [i_1 - 1]))), (arr_13 [4])));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_31 = (min(var_31, (((((max((arr_4 [i_1]), (arr_10 [i_0] [i_6])))) ? ((((arr_7 [i_0] [i_1] [i_0 - 2]) ? (arr_7 [i_1] [i_1] [i_0 + 2]) : (arr_7 [i_1] [i_1] [i_0 + 2])))) : (((arr_2 [i_0 + 3]) ? (arr_2 [i_0 + 2]) : (arr_14 [i_0 - 2] [i_1] [i_1] [i_6] [i_6]))))))));
                    var_32 = (max((((arr_13 [i_6]) ? var_2 : (((!(arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] [i_6])))))), (arr_14 [i_0] [i_1] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
