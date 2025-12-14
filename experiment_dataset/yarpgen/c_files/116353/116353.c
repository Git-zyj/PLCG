/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(((((12288 >> var_12) || 0))), (max(var_4, var_2)))))));
    var_16 = (var_8 ? ((12243 ? ((var_12 ? 767124746 : 0)) : ((var_10 << (-7078529159056045628 + 7078529159056045646))))) : var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = 0;
                    var_17 = 15;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        var_18 = 1;
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_19 = (!(((1 ? var_4 : 238))));
                    var_20 = ((!(arr_15 [21] [21])));
                }
            }
        }
        var_21 &= ((~(max((~var_2), 41790))));
    }
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        var_22 = 0;
        arr_21 [i_6] = ((max((arr_17 [i_6 + 2]), 1486342810)) * ((((!(arr_11 [i_6 + 1]))))));
        var_23 = ((((((-15 + 2147483647) >> 0))) ? (((arr_19 [i_6 - 3]) ? (arr_19 [i_6 + 1]) : (arr_19 [i_6 + 3]))) : (!1)));
        var_24 = var_5;
    }
    var_25 = (max(var_25, (((!(var_5 + var_0))))));
    #pragma endscop
}
