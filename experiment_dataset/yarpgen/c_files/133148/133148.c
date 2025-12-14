/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_14;

                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_16 = ((!(!0)));
                    var_17 = (((((arr_10 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1]) : 44605)) > (44602 & 40790)));
                    arr_12 [i_0] [i_0] [10] [i_0] = (min((arr_11 [i_1] [i_2 - 1] [i_2 + 1]), (arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_18 = ((((max(var_7, 1073741823))) ? (arr_14 [i_3] [i_0] [i_3 - 1]) : (arr_8 [i_0] [i_3 - 1] [i_3] [i_1])));
                    var_19 += (((((-var_8 ? (arr_15 [i_1] [i_1] [i_1]) : (arr_15 [i_1] [i_3 - 1] [i_1])))) ? (max(243, (max(var_2, (arr_5 [i_0] [i_0]))))) : (arr_3 [i_3 + 1])));
                    var_20 = (max((max((arr_8 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), var_10)), ((max(var_8, ((((arr_0 [2]) != (arr_4 [i_0] [i_1])))))))));
                }
            }
        }
    }
    var_21 = (min((((var_1 && (((var_8 ? var_13 : -1073741827)))))), ((var_8 ? ((max(12, var_4))) : var_2))));
    #pragma endscop
}
