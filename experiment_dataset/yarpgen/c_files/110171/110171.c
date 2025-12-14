/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((min(var_18, (max(50232, var_14)))), (8378174864183920783 != 8378174864183920783)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 *= (min((((((var_8 ? -2128037311639460045 : 8378174864183920795))) ? (((arr_9 [i_0] [i_1] [i_2]) ? 1 : (arr_1 [i_0] [i_3]))) : (arr_8 [12] [i_4 - 1]))), (arr_1 [i_4 + 1] [i_1 + 1])));
                                var_21 = (min((((arr_7 [i_1 - 1] [i_1 + 1] [i_2] [i_3]) ? (arr_7 [i_1 - 3] [i_1 - 3] [i_2] [i_3]) : (arr_12 [i_1 - 2]))), (((!(arr_12 [i_1 + 2]))))));
                                var_22 *= (min((((arr_5 [i_1 - 1] [i_1] [i_4 - 1] [i_3]) ? 72057456598974464 : (((max(var_16, var_7)))))), -1407891328055593763));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] = (min(0, -72));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_5] [i_2] [10] [i_6 + 1] |= min(-3652704314825580102, (var_1 | 8378174864183920795));
                                var_23 = (max(var_23, var_15));
                                var_24 = (max(var_24, ((min((((-(arr_17 [4] [i_1 - 3] [i_1 + 1] [i_6 + 1] [i_6 + 1] [i_6])))), ((+((var_17 ? (arr_7 [i_0] [i_0] [i_0] [12]) : var_8)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
