/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= -var_6;
    var_12 = (((((-((1 ? var_8 : -12917))))) ? var_0 : (!var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((~((~(arr_0 [i_1 - 3]))))))));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_12 [i_0] [6] [i_1] [i_2 + 1] [i_1] [1] [i_4] &= ((~(((!(arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
                                var_14 = (min(var_14, ((-((var_7 ? ((-12917 ? (arr_5 [i_0] [i_0] [i_0]) : var_8)) : (arr_7 [i_2] [i_3] [i_3])))))));
                            }
                            var_15 = (max(-12914, -12917));
                            arr_13 [i_2] [i_1] [16] [i_1] [i_1] [16] = min(((var_6 ? (arr_6 [i_0 + 1] [i_1] [i_1] [i_3]) : (arr_6 [i_2 - 1] [i_2 - 1] [i_1] [i_3]))), (min(var_4, (arr_6 [i_2 + 1] [i_2 + 1] [i_1] [i_3]))));
                            arr_14 [i_1] [i_3] = ((806555993558653149 ? (max((max(var_1, (arr_11 [i_1] [3] [i_2] [10] [i_3]))), ((min(var_6, var_0))))) : var_0));
                        }
                    }
                }
                var_16 = (arr_8 [16] [i_0 + 1] [i_1] [i_0 + 1]);
            }
        }
    }
    var_17 -= ((max(var_5, var_7)));
    #pragma endscop
}
