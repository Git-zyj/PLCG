/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 &= ((((-1 < (var_6 != 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1] [i_0] &= (arr_2 [1]);
                        arr_13 [i_3 - 1] [i_0] &= (((arr_8 [1] [i_3 - 1]) ? 1 : ((min(var_8, ((((arr_8 [5] [i_3 - 1]) >= var_3))))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_17 = (max(var_17, var_10));
                            arr_17 [i_0] [15] [i_2] [i_3] [i_0] [9] [i_0] = (arr_2 [i_2 - 1]);
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_18 = (((((~(arr_5 [i_0] [10] [i_2 - 1] [i_3])))) ? (arr_3 [i_0]) : -1));
                            var_19 = (min(var_19, (((var_0 ? ((max((arr_1 [i_2 + 2]), (arr_1 [i_2 + 2])))) : (arr_1 [i_2 + 1]))))));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_22 [2] [i_6] [i_2] [i_3] [i_0] = ((arr_8 [i_6 + 1] [i_2 + 1]) - (max((arr_15 [i_2 - 1] [i_2] [i_2 + 1] [i_3 + 3] [i_6 + 1]), (arr_21 [i_6] [i_6 + 1] [i_3 + 2] [i_3 + 2] [i_2 + 1] [i_2 - 1]))));
                            arr_23 [i_0] [1] [10] [i_3] [i_6] = (((((((var_4 ? 26862 : (arr_6 [i_0] [i_1] [i_2] [i_3])))) != ((var_14 ? 1 : var_5)))) ? ((max((arr_4 [i_0] [i_1]), ((var_4 ? (arr_0 [i_3] [11]) : var_6))))) : ((~((var_9 ? var_7 : var_8))))));
                            var_20 = (max(var_20, ((min(var_1, ((((max((arr_19 [i_0] [i_6]), (arr_8 [i_3] [i_0])))) ? (arr_10 [i_6 + 2] [i_6 - 1]) : (max(var_7, var_2)))))))));
                        }
                    }
                    var_21 = (min(var_21, ((max((arr_8 [i_2 - 1] [i_2 + 2]), (min((arr_8 [i_2 + 1] [i_2 - 2]), (arr_2 [i_2 + 2]))))))));
                    var_22 = ((((min(20, ((((arr_15 [i_0] [i_0] [i_0] [i_2] [i_2]) & 3880407478948463524)))))) ? (min((((arr_1 [i_0]) ? (arr_18 [i_1]) : (arr_2 [7]))), (arr_2 [i_2]))) : ((((var_4 ? 3880407478948463524 : (arr_0 [i_2] [16])))))));
                }
            }
        }
    }
    #pragma endscop
}
