/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_3 ? (!8044) : (arr_0 [i_0]))) | (((min(var_15, var_9)) ? var_10 : var_12))));
        var_16 = 3163857964340729258;
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = 51;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_18 &= (min(((((arr_4 [i_3] [i_4 + 3]) ? var_9 : (var_13 + 45)))), ((-var_14 ? (arr_14 [i_2] [i_2] [i_2] [i_2] [i_2]) : (!var_14)))));
                        arr_16 [i_1] [i_1] [1] [i_3] [i_4 + 2] = (max(((((((arr_12 [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]) ? var_11 : var_14)) / var_5))), (((!var_4) ? (arr_4 [i_1] [i_4 + 1]) : (arr_9 [i_1] [i_2] [i_3])))));
                        var_19 = var_14;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((((arr_9 [i_5] [i_5] [i_5]) ? (arr_9 [i_5] [i_5] [i_5]) : (arr_9 [i_5] [i_5] [12])))) ? (arr_9 [15] [i_5] [i_5]) : ((((arr_9 [9] [i_5] [12]) && -8032))))))));
        var_21 = 8044;
    }
    var_22 = var_0;
    #pragma endscop
}
