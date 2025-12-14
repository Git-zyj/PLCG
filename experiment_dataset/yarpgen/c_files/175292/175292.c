/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((var_8 ? -var_2 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_12 = (((arr_6 [i_1]) ? (((+((var_2 ? (arr_0 [i_2]) : var_2))))) : (max(var_6, (((var_2 < (arr_1 [10] [10]))))))));
                        arr_9 [i_1] [i_1] [i_2] [i_3] = (((min((arr_4 [i_3] [i_3 - 2] [i_3] [i_3]), (arr_4 [i_3] [i_3 - 1] [i_3] [i_3]))) - (min((arr_1 [i_1 - 1] [i_0 + 3]), (arr_2 [i_0 + 1] [i_1 - 1] [i_3 - 3])))));
                        var_13 = ((+(((((min((arr_3 [i_0 - 2]), var_4))) != ((~(arr_0 [i_1]))))))));
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_4 + 3] = (((((arr_6 [i_0 - 3]) ? -var_7 : (arr_3 [i_4]))) - var_5));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_14 -= (((4194303 ? -1 : -13)));
                            arr_15 [i_1] [i_1] = var_1;
                        }
                        arr_16 [i_1] [i_1] [i_2] [i_4] [i_0] = (arr_0 [i_0]);
                    }
                    arr_17 [i_0 + 2] [i_1] [i_2] = (((arr_1 [i_0] [i_0]) << (((((((var_6 / (arr_0 [i_0 + 4])))) ? (((arr_13 [i_0] [i_1] [i_0] [i_1] [4] [1] [i_1]) + (arr_0 [i_1]))) : ((min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), var_7))))) - 357898979))));
                    arr_18 [i_0] [i_1] [i_2] [6] &= ((((((((2146435072 ? 119 : -13))) ? ((max((arr_6 [1]), (arr_0 [1])))) : (((!(arr_0 [i_2]))))))) ? (max((arr_4 [i_0] [i_1 - 1] [i_0] [i_0]), (arr_2 [i_1 + 1] [i_0 + 4] [i_0 - 3]))) : var_3));
                    arr_19 [i_1] [i_1] = ((((max(((var_2 ? (arr_1 [4] [i_1 - 1]) : var_4)), (arr_2 [i_0] [i_0] [i_2])))) == var_0));
                    arr_20 [i_0] [i_1] [i_1 + 1] [i_1] = (!-var_0);
                }
            }
        }
    }
    #pragma endscop
}
