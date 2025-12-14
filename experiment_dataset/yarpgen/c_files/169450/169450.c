/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [14] [i_0] = var_2;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_4] [i_4 - 2] = ((~((-(arr_6 [i_2 - 1])))));
                                var_19 = (min(var_19, (((!((((arr_2 [i_0 + 1] [i_1]) ? (arr_2 [i_0 - 1] [i_4 - 2]) : (arr_2 [i_0 - 1] [i_3 - 1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_22 [i_7] [i_7] [i_7] = ((var_12 ? ((-((2097151 ? (arr_16 [i_5]) : 4064)))) : ((((((4292870161 ? 42866 : var_11))) ? (max((arr_8 [i_7]), 2097151)) : (arr_7 [i_7 - 1] [i_6] [i_6]))))));
                    var_20 &= 4292870145;
                    arr_23 [i_7] [i_5] [i_7] [i_5] = ((2097162 ? ((((max(var_4, 1))) ? (arr_21 [i_7]) : ((max((arr_14 [i_6] [1]), (arr_2 [i_5] [i_6 - 1])))))) : var_18));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_21 *= (min(((((arr_9 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 1]) ? 0 : (arr_16 [13])))), (((arr_21 [12]) ? (min(18446744073709551615, (arr_0 [i_5 - 3]))) : ((((1 >= (arr_7 [i_8 - 1] [i_8 + 2] [12])))))))));
                                var_22 -= (max(((-1 | (((!(arr_5 [i_5] [i_6 + 1] [i_8 - 1] [i_6 + 1])))))), ((min((!var_11), (!44885))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
