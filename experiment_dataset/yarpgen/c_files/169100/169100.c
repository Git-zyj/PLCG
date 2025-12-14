/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (((~-1) << (15344 - 15319)));
                            var_15 += ((0 ? ((max(30, 116))) : (!-5857611208890173628)));
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = (max(((-((25002 ? 1 : 58643)))), (arr_3 [i_1 - 2] [i_1 - 2])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (min(116, 7846574821297575709));
                                var_17 *= ((((((((arr_7 [i_1]) ? 63 : 57344))) ? (arr_8 [i_1] [i_5 - 1]) : (min(var_1, (arr_2 [i_4]))))) > 1));
                                arr_20 [i_4] [i_1] [i_5] [i_4] = (((~-15344) ? 34117 : (((11690723980894228558 ? var_0 : 549755813887)))));
                            }
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0] = (min(((((arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]) | (arr_6 [i_1 - 1] [i_1 - 2] [i_1])))), var_5));
                arr_22 [i_1] [i_0] = ((!((((arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1 - 1]) ? (arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_7 [i_1 - 2]))))));
            }
        }
    }
    var_18 = (max((min(6892, ((3921497607 ? -8867981713628497583 : 57344)))), (((var_12 ^ 3992346980317188897) | (~1)))));
    var_19 = (min(((255 ? 549755813903 : (110 ^ 8191))), (((((max(var_9, 34117))) ? (((max(33283, -13)))) : ((8579100864690585295 ? 0 : 255)))))));
    #pragma endscop
}
