/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = (min((-9223372036854775807 - 1), ((min((arr_5 [i_1]), 15393)))));
                var_10 += (((min(18446744073709551610, var_3)) ^ (arr_5 [i_0])));
                var_11 = (max(var_11, (((((((arr_6 [i_0] [i_0] [9]) / (arr_0 [i_0]))) == (((var_8 ? var_6 : var_9))))) ? var_2 : (max((var_2 & var_1), (max(10951355576502741103, (arr_5 [i_0])))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                {
                    var_12 *= 21;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_13 = ((((max((-11091 != 1), (max(768414303, -768414304))))) ? ((((min(var_1, (arr_14 [i_2] [i_2]))) - ((var_9 ? var_9 : var_1))))) : (((arr_16 [i_2] [i_2] [i_5 - 2] [i_4] [6] [i_2]) ? -var_4 : var_6))));
                                arr_19 [i_6] [i_3] [i_6] &= ((((((arr_16 [i_5] [i_5 - 1] [i_5 - 3] [i_6] [8] [i_6]) ? (min(2604927934, var_2)) : var_1))) ? (((((var_8 || var_1) || (arr_13 [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_6]))))) : ((((!(arr_1 [i_2] [i_2]))) ? 4075156914257094916 : -768414303))));
                            }
                        }
                    }
                    arr_20 [i_2] [20] [i_3] [i_3] &= (((max((!var_2), (17590038560768 && 18446726483670990831))) || (((arr_3 [i_2] [i_2]) || (17590038560785 || var_2)))));
                    var_14 = ((((((arr_6 [i_2] [i_4 - 3] [i_4 - 3]) ^ var_3))) ? (((((var_9 ? var_1 : 237))) & ((6370011112297457737 ? 7833886575867370881 : 1)))) : ((((var_3 ? var_3 : 1))))));
                }
            }
        }
    }
    var_15 = ((((min(((var_1 ? var_8 : var_1)), ((max(var_8, var_2)))))) & (max(((var_0 ? var_2 : var_5)), (min(var_9, (-9223372036854775807 - 1)))))));
    #pragma endscop
}
