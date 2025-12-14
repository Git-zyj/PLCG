/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_11 [10] [10] [0] [i_1 - 1] &= ((((((arr_0 [i_1 - 2] [i_1 - 2]) ? (arr_0 [i_1 - 3] [i_1 - 1]) : 7980963749767927330))) ? var_4 : ((-82 / ((var_6 ? (arr_5 [i_0] [i_0]) : var_14))))));
                    var_15 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (min(((((arr_16 [i_0] [i_0] [i_1 - 1] [i_1] [i_3 + 3]) != (arr_16 [i_1] [i_1] [i_1 + 1] [i_1] [i_3 + 4])))), (~255)));
                                var_17 = (((~var_0) ? (max((((arr_10 [i_1]) ? (arr_10 [i_1]) : var_5)), var_7)) : (((var_2 ? 18106 : (~var_10))))));
                                var_18 = ((-32767 - 1) ? -5827815483738684467 : var_3);
                                var_19 = -32765;
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_20 = ((!(((-((var_7 ? 47433 : var_5)))))));
                    var_21 = var_0;
                    arr_21 [i_1] = ((((min((arr_8 [i_1 - 1]), ((var_1 / (arr_14 [i_1])))))) ? (min(var_7, (arr_13 [i_0] [i_1] [i_5] [i_5] [20] [i_0]))) : ((((min((arr_17 [i_0] [i_0] [i_1]), var_1)))))));
                    var_22 = ((((min(var_10, ((-1522 ? (arr_6 [i_1] [i_1]) : -5324564895877518233))))) ? (max((arr_6 [i_1] [i_1 - 2]), (arr_6 [i_1] [i_1 - 2]))) : var_3));
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_23 = (((~(var_7 != var_7))));
                    arr_24 [i_1] [i_1] [i_1] = -5827815483738684471;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_24 &= (min((min((arr_2 [i_7 + 1]), (arr_2 [i_7 + 1]))), (((arr_18 [i_1 - 1]) ? (arr_2 [i_7 + 1]) : (arr_2 [i_7 - 1])))));
                                var_25 = (min(var_25, ((min((((((~(arr_13 [i_6] [i_7] [i_7 + 1] [i_6] [i_1] [18])))) ? ((var_6 ? (arr_5 [i_6 - 2] [i_8]) : 32742)) : (!var_5))), ((((arr_22 [i_8 - 2] [i_8 - 2]) ? (arr_18 [i_1 - 2]) : var_1))))))));
                            }
                        }
                    }
                    var_26 += ((((-(arr_14 [i_0]))) * ((((~(arr_29 [i_6 - 1] [i_6] [i_1] [i_0])))))));
                    arr_30 [i_1] [i_1] [i_1] = (((((var_11 ? var_14 : (arr_0 [i_1] [i_1 - 1])))) ? (arr_0 [i_1] [i_1 - 3]) : (!var_12)));
                }
                var_27 = var_13;
                var_28 = (((!var_4) * (((47428 == ((65535 ? 5827815483738684461 : var_12)))))));
            }
        }
    }
    var_29 = max(var_12, ((((((var_6 ? var_0 : var_13))) > ((26 ? -5324564895877518225 : var_9))))));
    #pragma endscop
}
