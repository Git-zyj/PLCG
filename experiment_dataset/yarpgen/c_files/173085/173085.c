/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = -20408;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                            {
                                var_16 += 7280578831076130250;
                                arr_15 [i_2] [i_1] = ((28019 ? 1828239849 : -28013));
                                var_17 = (min(var_17, (((var_13 != (17 != 4294967295))))));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_0] = ((((~var_4) ? 4499201580859392 : (((arr_2 [i_0] [i_2] [i_2]) ? (arr_14 [i_1]) : (arr_4 [i_0] [i_1] [i_1]))))) >> (-var_4 - 306));
                                arr_19 [i_0] [i_0] [i_0] [i_1] = ((-(((((((arr_4 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_0] [i_2]) : var_11))) || (((-6640129029764273111 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_5]) : (arr_4 [i_0] [i_0] [i_1])))))))));
                                arr_20 [i_2] [i_3 + 1] [i_1] [i_3] [i_5] [i_1] [i_1] = min(((max((arr_8 [i_1] [i_1] [i_1]), var_5))), (((!(~var_0)))));
                                var_18 = (min(var_18, var_14));
                            }
                            var_19 = (max(var_19, 20407));
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((var_14 >= (var_15 * var_5))) ? (min((max(var_0, var_14)), var_2)) : 0));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_25 [i_6] = 17179869183;
        arr_26 [i_6] = (min((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]), -20407));
        arr_27 [i_6] = ((~((+(((arr_14 [i_6]) ? (arr_4 [i_6] [i_6] [i_6]) : var_2))))));
    }
    #pragma endscop
}
