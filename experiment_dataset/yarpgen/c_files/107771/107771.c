/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(var_1 && var_5)));
    var_18 = ((((min((max(var_7, var_7)), ((max(var_1, var_8)))))) ? ((max((min(var_15, var_14)), (max(var_11, 65523))))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (i_0 % 2 == zero) ? ((min(((((((arr_4 [i_1] [i_1]) + 9223372036854775807)) >> ((((var_14 ? (arr_2 [i_0]) : (arr_1 [i_1]))) - 11193085610616166218))))), ((-(min(var_9, (arr_2 [i_0])))))))) : ((min(((((((arr_4 [i_1] [i_1]) + 9223372036854775807)) >> ((((((var_14 ? (arr_2 [i_0]) : (arr_1 [i_1]))) - 11193085610616166218)) - 10678773925141893654))))), ((-(min(var_9, (arr_2 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((max(((min((((!(arr_4 [i_2] [i_0])))), (max(-745902211087096008, (arr_0 [2] [i_2])))))), (max(((var_1 ? 1 : var_7)), (((arr_8 [i_0] [i_1] [2]) - var_4)))))))));
                            var_21 = ((((((((arr_7 [i_2] [i_0] [i_0]) && var_5)) ? (((-29922 || (arr_9 [i_0] [i_0])))) : (min(29940, (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1])))))) ? (((var_9 ? 237 : ((max(var_10, var_14)))))) : ((((((arr_9 [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_10 [i_3] [i_1] [i_2] [i_1] [i_2] [i_2])))) ? (((var_5 ? var_5 : (arr_0 [i_0] [i_2])))) : (max(var_13, var_10))))));
                            arr_11 [i_0] [i_0] = ((-(max(((((arr_9 [i_2] [i_3]) ? 7052 : var_9))), ((var_6 ? (arr_5 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_0])))))));
                            arr_12 [i_0] [i_1] [i_2] [i_0] = (((arr_4 [i_1 - 2] [i_1 - 1]) & -var_5));
                            var_22 = (max(var_22, (((((max((arr_10 [i_0] [i_2] [i_1 - 2] [i_3] [i_3] [i_3]), (arr_10 [i_2] [i_1] [i_1 - 1] [i_3] [i_3] [i_2])))) ? ((~(min(var_2, 7052)))) : ((((((arr_8 [i_1] [i_2] [2]) * (arr_1 [i_2]))) >> (59685 + 5860)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_23 = (((~(max(11056082207468808265, var_15)))));
                            arr_19 [i_1] [i_1] [i_0] [i_5] = (((((((237 ? (arr_18 [i_0] [i_1] [i_4] [i_5] [i_0]) : 151))) / (arr_4 [i_0] [i_4]))) & (max(((((arr_15 [i_5]) % var_12))), ((var_3 ? -17 : (arr_5 [i_0] [i_4] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
