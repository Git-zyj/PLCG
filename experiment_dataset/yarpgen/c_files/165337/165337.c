/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((!((((106 <= 0) * (var_14 / var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((-(arr_0 [8] [i_1])))) ? (arr_0 [2] [i_1]) : var_5)))));
                var_18 = ((-(var_15 >= var_7)));
                arr_6 [i_0] = ((((9747147656527229448 ? 65535 : 4294967295)) * ((((var_12 < (max(-1, (arr_5 [i_0 + 1] [i_0] [i_1])))))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_19 = ((!((!(arr_2 [i_0])))));
                    var_20 = (arr_4 [i_0] [i_1] [i_2]);
                    var_21 = (max(var_21, (((-21 ? -21 : 709961627)))));
                    var_22 = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_15 : (arr_1 [i_0])));
                    var_23 = ((-(max(var_4, (arr_2 [i_0])))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_24 += min((min(((-(arr_5 [i_0] [1] [i_3]))), ((-(arr_7 [1] [i_1] [i_0] [i_0]))))), ((6580763609974320977 ^ ((5023037683642793692 ? var_14 : (arr_4 [i_0] [i_1] [i_3]))))));
                    var_25 = (arr_9 [i_3]);
                }
            }
        }
    }
    var_26 = 22;
    var_27 = max((((!((min(var_7, var_3)))))), (max(var_5, (min(var_11, var_1)))));
    var_28 = (max(var_28, ((((var_5 & var_6) & ((min(var_6, (max(var_0, var_2))))))))));
    #pragma endscop
}
