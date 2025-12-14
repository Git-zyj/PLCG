/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 ^= ((!(var_1 == var_3)));
                    var_16 = (max(var_16, ((((!var_4) ? ((((min(var_10, (arr_0 [i_1])))) % (arr_8 [10] [i_1] [i_2 + 2] [i_2 + 1]))) : ((min((arr_0 [i_0]), (arr_1 [i_1 - 1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [10] [i_0] [i_0] [i_2] = -var_3;
                                var_17 = (!((((((var_7 ? (-32767 - 1) : (arr_11 [0])))) ? ((-(arr_5 [i_0] [i_2]))) : (arr_1 [i_3 + 1])))));
                                var_18 = ((-(!var_2)));
                                arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] = (min(-127, (((!(1078075344 <= var_5))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += (((-(!var_13))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 = (((((((min(17949599358739804719, 436267799))) ? -4294967295 : 1))) && (arr_18 [i_5])));
                                var_21 = ((((((20656 ? 65517 : -11439)) ? (arr_21 [i_5]) : (!var_11)))));
                                var_22 -= (max((((1 ^ ((var_12 ? var_6 : var_3))))), (max((!var_2), (((arr_8 [i_9] [0] [0] [i_9]) ? var_6 : 3216891951))))));
                                var_23 = (min(var_23, -2311937386555328764));
                            }
                        }
                    }
                }
                var_24 = (((var_12 - var_9) >> (((((((min((arr_27 [i_5] [i_5] [i_5] [5] [i_5] [i_5]), (arr_22 [i_5] [i_6] [i_6]))))) + (min(var_5, 1078075340)))) - 39785))));
            }
        }
    }
    var_25 = (((((max(1, var_12)) & var_2))) ? var_8 : (min(var_5, ((var_13 ? 1078075350 : var_5)))));
    var_26 = var_4;
    #pragma endscop
}
