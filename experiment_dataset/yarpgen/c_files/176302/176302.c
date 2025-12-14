/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((min(var_7, var_14) | ((~(arr_3 [i_0] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] = (min(var_7, (((arr_10 [i_1 + 1] [i_2 - 1] [i_1]) ? var_7 : (~656138426)))));
                            arr_13 [i_1] [i_1] [i_2 - 1] [i_3] = max(((656138426 ? -656138427 : -14)), ((((arr_5 [i_1 + 1] [i_1 + 1] [i_1]) != (arr_5 [i_1 + 1] [i_1 + 1] [i_1])))));
                            var_16 = (max(var_16, (((((arr_5 [6] [20] [6]) / var_11))))));
                            var_17 -= (((((-656138427 ? -900009176 : -19))) ? 15491 : (arr_2 [i_0] [i_2 + 1] [18])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_0] [i_6] [i_1 - 1] [i_5] = (min((262403583 + 5913739733789711908), ((max(var_12, -19)))));
                                arr_22 [i_0] [i_1 - 1] [i_0] [i_1] [i_0] = max((max(var_7, -42)), (((var_0 <= (arr_4 [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                arr_23 [i_0] [i_1 - 1] [i_1] = (((arr_2 [i_0] [i_0] [i_1]) ? ((((min(var_14, (arr_15 [i_1] [i_1] [i_1] [i_0])))) ? ((var_13 ? (arr_19 [i_0] [i_0] [i_1]) : var_11)) : (((262403579 < (arr_14 [i_1 - 1])))))) : (((min(var_15, var_6)) + (((var_7 >= (arr_0 [i_0]))))))));
                arr_24 [i_1] = (min(((((((var_13 <= (arr_7 [i_0] [i_0] [i_1 - 1] [i_0])))) << (var_9 - 88)))), (((((4916554470238032509 ? 12606291489330802346 : -25157))) ? (-127 - 1) : (((((arr_11 [i_1 + 1] [i_1] [i_0] [i_0] [i_0]) || (arr_15 [i_0] [i_0] [i_1] [i_0])))))))));
            }
        }
    }
    var_18 = (((((!1984627359) || 0)) && var_0));
    var_19 = (min(var_19, (((0 ? 38 : 58)))));
    #pragma endscop
}
