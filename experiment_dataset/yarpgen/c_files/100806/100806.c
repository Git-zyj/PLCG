/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (((((!(arr_1 [i_0] [i_1])))) <= var_1));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                    {
                        var_16 = min(var_13, 0);
                        arr_12 [0] [i_1] [i_1] [i_3] [i_3] = ((-(((2147483647 - 1) ? (min(13015348036477906536, var_6)) : var_12))));
                        var_17 |= ((((-(max(1395423819789673219, 1)))) * (var_4 / var_12)));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_18 = (min(var_18, ((max((((~0) ? (var_11 <= 0) : 96)), (((!(arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0])))))))));
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] [i_4] = (max((((var_10 ? -var_2 : var_6))), (((17051320253919878397 == 1) / var_5))));
                            arr_16 [i_2] [i_2] [i_2] [i_3 + 1] [i_4] = 2147460394;
                        }
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] [i_1] [10] [10] &= (arr_2 [i_0]);
                        var_19 -= ((-(((var_8 <= (arr_17 [i_5 + 1] [17] [i_2] [2] [2]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_20 = var_2;
                                var_21 |= var_4;
                                var_22 = min((max(var_12, (arr_14 [i_0] [i_7] [i_6] [i_2] [i_0] [i_1] [i_0]))), var_7);
                                var_23 = (max(var_23, var_0));
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [i_2] &= ((var_2 ? (max((((23 - (arr_7 [i_0] [i_1])))), (arr_10 [i_0] [i_1] [i_0] [i_2]))) : var_11));
                    var_24 = ((-32765 + (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    var_25 = ((((var_4 ? (((var_7 << (var_13 - 48284135)))) : var_5))) ? (max(9595778930681897323, 1073741822)) : (((((min(16593970461646132738, 1))) ? var_11 : (var_0 < var_14)))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                {
                    var_26 = (max(var_26, ((((((((var_14 << (var_10 - 1695226612)))) == ((2145386496 ? 1873717604 : 17787743516340829515)))) ? (((!((((arr_34 [i_10] [i_9] [i_8]) ? 16593970461646132737 : (arr_30 [i_10]))))))) : (arr_33 [i_8]))))));
                    var_27 &= var_7;
                    var_28 = ((((((!(arr_33 [i_9]))))) ? ((max((((~(arr_30 [i_10 + 1])))), (max((arr_34 [21] [i_10] [i_10]), var_6))))) : (((arr_32 [i_9] [i_9]) ? var_13 : ((var_8 + (arr_35 [1] [1] [1] [5])))))));
                }
            }
        }
    }
    #pragma endscop
}
