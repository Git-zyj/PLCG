/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 78;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = ((~(arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((!(((var_0 ? 3787557300061104741 : var_5)))));
        var_12 -= (9288618980775052131 << 0);
        arr_3 [i_0] [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((max(((1 ? 3786218114448230053 : 3787557300061104754)), 47984)) ^ ((3786218114448230066 ? -3786218114448230035 : ((min(2147483626, 32145904)))))));
        var_13 = min(var_0, var_1);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] [i_3] = (arr_4 [i_1]);
                    arr_13 [i_1] = (((arr_7 [i_1] [i_2]) ? ((-(min(var_9, var_2)))) : (arr_0 [i_3])));
                    arr_14 [i_2] = (((((-(arr_0 [i_3])))) ? (((~4900598822331851517) ? (arr_10 [i_1]) : ((((arr_8 [i_1] [i_2] [i_1]) ? 65523 : -1630653772))))) : (((min(-22644, 1510607171))))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_20 [i_5] = 3209906057;
                                arr_21 [i_5] [i_3] [i_2] [i_5] = var_7;
                                var_14 = (max((min((arr_16 [i_5] [i_5] [i_5 - 1] [i_4 + 3]), (arr_19 [i_5] [i_5] [i_5] [i_5 + 1] [i_4 + 2]))), ((min(-2581625134228149640, -19695)))));
                            }
                        }
                    }
                }
            }
        }
        var_15 = -3787557300061104734;
    }
    #pragma endscop
}
