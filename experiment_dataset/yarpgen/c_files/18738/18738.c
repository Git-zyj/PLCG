/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_20 = 12637335385736008154;
                            arr_12 [i_3] [i_3] = var_0;
                            var_21 = ((arr_9 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_3]) ? ((((((arr_8 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3]) + (arr_10 [i_3] [i_3])))) ? (arr_11 [i_0] [12] [i_1] [i_3] [i_3] [i_4 - 1]) : var_4)) : (max((max(var_7, (arr_9 [i_0] [i_1] [i_2] [5] [i_2] [i_3]))), ((min((arr_7 [i_3] [i_1] [i_2] [i_3]), 8191))))));
                            var_22 = min(var_18, ((((25436 < (arr_10 [i_1] [i_3]))))));
                        }
                    }
                }
            }
            var_23 &= (!var_6);
            var_24 = (((arr_7 [i_1] [i_1] [i_0] [i_1]) ? (((((!(arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) ? ((((arr_0 [i_0]) ? var_3 : var_8))) : ((var_9 ? (arr_7 [i_0] [i_1] [2] [2]) : (arr_9 [i_0] [i_0] [12] [2] [i_1] [i_0])))))) : (min((((arr_1 [i_1]) * -53)), (((arr_6 [i_0] [i_1] [i_1] [i_1]) ? var_14 : (arr_6 [i_0] [i_1] [i_1] [10])))))));
        }
        var_25 -= min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), 8714484301341064199)), ((((arr_1 [i_0]) ? (9224271568395993227 >= var_14) : (arr_4 [i_0])))));
        arr_13 [i_0] = (arr_5 [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_26 = (min(var_26, ((((((((max(var_3, -27653))) / ((min((arr_0 [i_5]), var_3)))))) ? (((arr_5 [i_5] [i_5] [i_5]) ? (!var_0) : ((25428 ? var_10 : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (arr_0 [i_5]))))));
        arr_16 [i_5] [i_5] = var_7;
        arr_17 [i_5] |= min((((((var_18 ? 9246654008717831954 : 88))) ? 549755813887 : ((var_8 ? var_17 : 2563650985031163417)))), (((!(arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [2])))));
    }
    var_27 |= var_19;
    var_28 *= ((102 ? (((((max(16164992291774314266, 13110024825967680008))) || var_4))) : (((var_4 >= ((max(var_17, -47))))))));
    #pragma endscop
}
