/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = arr_1 [i_0];

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [2] &= ((var_6 ? ((min((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1])))) : ((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                    var_14 = var_11;
                    arr_11 [i_2] [i_2] = (((arr_4 [i_2 - 1] [i_1]) ? ((~(arr_4 [i_2 + 1] [i_2 + 1]))) : (((arr_4 [i_2 - 1] [i_1]) | (arr_4 [i_2 - 1] [i_1])))));
                    arr_12 [2] &= var_10;
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_15 -= ((var_7 > ((var_5 ? (!52045) : var_11))));
                    var_16 = ((((!(arr_14 [6] [i_3 - 1] [i_3]))) ? ((max((arr_14 [i_0] [i_3 + 1] [i_3]), (arr_14 [i_1] [i_3 + 1] [i_3])))) : (((arr_14 [i_0] [i_3 + 1] [i_3]) ? (arr_14 [i_0] [i_3 + 1] [3]) : (arr_14 [i_0] [i_3 - 1] [i_3])))));
                    var_17 = (((arr_5 [i_3 + 1] [i_1] [i_3 + 1]) ? ((-(arr_5 [i_3 + 1] [i_1] [i_3]))) : var_3));
                    var_18 = (max((((((arr_2 [i_0] [i_1]) ? 55447 : 20531)) & (var_0 | 0))), (((((arr_14 [0] [1] [1]) ? 0 : var_5))))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_19 = 47606;
                    arr_17 [i_0] [i_4] = ((((!(arr_13 [i_0] [i_1] [i_4])))));
                    var_20 = ((!((((~0) ? 55463 : (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_21 = ((max(((var_2 ? 38978 : var_5)), var_0)));
    #pragma endscop
}
