/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (((-(arr_2 [i_2 - 2]))))));
                    var_20 = (min(var_20, (((((var_3 >= (arr_7 [i_1]))) || ((((((arr_8 [15] [i_1] [i_0]) ? 16454 : (arr_4 [i_1]))) >> (((arr_0 [i_1]) - 113))))))))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_21 = (i_0 % 2 == 0) ? ((((arr_6 [i_0] [i_1]) ? (((arr_2 [i_1]) >> (((arr_0 [i_0]) - 111)))) : (arr_7 [i_0])))) : ((((arr_6 [i_0] [i_1]) ? (((arr_2 [i_1]) >> (((((arr_0 [i_0]) - 111)) + 102)))) : (arr_7 [i_0]))));
                    var_22 -= (min((((((arr_3 [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_5 [i_3 - 1]))))), (max(var_9, var_4))));
                    var_23 = ((!((max(8329850262876970620, (arr_5 [i_3 - 1]))))));
                    var_24 = var_6;
                    var_25 = (min(((min(2553527648, (arr_11 [i_3 + 1] [i_3] [i_3 - 2])))), ((var_16 / (arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((((max((min(var_16, (arr_8 [i_0] [i_0] [i_0]))), var_8))) || (((var_17 ? (!var_8) : var_6))))))));
                                var_27 = (arr_11 [i_0] [i_5] [i_6]);
                                var_28 = (arr_10 [i_0] [i_0] [i_4] [i_5]);
                                var_29 = (min(var_29, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
