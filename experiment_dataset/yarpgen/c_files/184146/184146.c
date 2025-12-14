/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((min((arr_5 [i_2]), (arr_3 [i_0]))));
                                arr_13 [i_2] = (min(((((((min(var_4, var_13)))) == (((arr_7 [i_2]) ? -9156059167006386611 : 32767))))), 131));
                                var_15 = ((150 ? 131 : 133));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_16 -= ((~(max((arr_5 [i_1]), (arr_7 [i_0])))));
                            arr_18 [10] [i_5] [i_6] [i_6] [i_6] &= (max((!-17365), ((57344 ? ((((arr_16 [14] [i_1] [i_5] [i_6]) <= (arr_8 [1] [i_1] [17] [i_6])))) : (!57344)))));
                            arr_19 [i_0] [i_1] [i_5 - 1] [i_6] = (~(min(((-17365 ? var_10 : 107)), (((!(arr_10 [i_0] [12] [i_5] [i_1] [4])))))));
                            arr_20 [5] [i_1] [i_5 + 1] [i_6] = (arr_6 [i_0] [i_0] [3] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_1 / var_9);
    var_18 = (min(var_18, var_3));
    var_19 = (((((var_4 ? var_6 : var_10))) == (((-var_2 ? ((127 ? var_5 : -23813)) : var_1)))));
    #pragma endscop
}
