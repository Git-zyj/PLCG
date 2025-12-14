/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? var_8 : ((var_7 ? var_12 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((((((((var_0 ? (arr_8 [i_0] [i_1] [i_2] [i_1]) : var_8))) - ((var_12 ? var_12 : 15278593498329188135))))) ? ((5234038455860284884 - ((var_6 ? var_9 : (arr_1 [i_1] [i_1]))))) : ((((-5234038455860284883 + 5234038455860284884) + (arr_4 [i_0] [i_0] [i_0]))))));
                            var_15 = ((!(((((var_2 ? -1522501326 : (arr_0 [i_1] [i_2]))) * (((arr_3 [i_2]) ? 753727164 : 840037893732831721)))))));
                        }
                    }
                }
                var_16 = var_10;
                var_17 = (((var_6 != var_10) ^ var_6));
            }
        }
    }

    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        arr_14 [i_4] = ((~((((((arr_13 [i_4 - 1]) ? (arr_13 [i_4]) : var_12)) > 1)))));
        arr_15 [i_4] = ((((((((arr_13 [i_4]) ^ 17606706179976719921))) ? (((arr_11 [i_4]) ? (arr_12 [i_4]) : -5234038455860284883)) : (!var_3))) ^ (arr_11 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_18 += (arr_19 [i_4]);
                    var_19 = (max(var_19, (((((max((17606706179976719936 % var_11), var_5))) ? ((((((arr_13 [i_4 + 1]) ? var_8 : (arr_17 [i_6])))) ? (((var_10 ? (arr_17 [i_4]) : var_12))) : 840037893732831728)) : (!1880620484428453131))))));
                    arr_23 [i_4 + 1] [i_5] [i_6] [i_5] = min(90, 136);
                    arr_24 [i_5] = (min((((((arr_19 [i_4 + 1]) / var_1)) / -var_4)), (arr_18 [i_4 + 1])));
                    var_20 += (arr_12 [i_4 - 1]);
                }
            }
        }
        arr_25 [i_4 + 1] = var_12;
        var_21 = (max(var_21, ((-(min((arr_13 [i_4 - 1]), (arr_17 [i_4 + 1])))))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_22 = (!840037893732831728);

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_23 = (min(var_23, (~-45)));
            var_24 = var_11;
        }
    }
    #pragma endscop
}
