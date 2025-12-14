/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (60 == 200);
    var_17 = (max(((((((55 ? 106399711 : 2047))) || ((max(var_11, var_14)))))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 ^= (max(((var_14 ? -4294965243 : (arr_4 [i_0] [i_0] [i_1]))), (((!((min((arr_0 [i_0]), -106399686))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 *= (max(var_6, (!var_6)));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_20 = var_11;
                                var_21 += (((4294965241 + 16087) ? (((arr_13 [i_0] [i_1] [i_2 - 1] [i_3]) ? (arr_13 [i_1] [i_2 - 1] [i_3] [i_4]) : (arr_13 [i_0] [2] [i_2] [1]))) : (((-((40657 - (arr_16 [10] [11] [i_2] [2] [i_2] [2]))))))));
                            }
                            var_22 *= ((-(max((arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [8] [i_1]), (arr_15 [i_0] [i_0] [i_2 - 1] [i_1] [12])))));
                        }
                    }
                }
                var_23 *= (!14069);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_24 *= ((((-(arr_3 [i_0]))) <= (!4294967295)));
                            var_25 = (min(var_25, ((((((min((arr_3 [i_0]), var_3))) & (var_12 & var_0)))))));
                            var_26 = (((((((max(24879, 4294967295))) ? (max((arr_9 [i_0] [i_1] [i_1]), (arr_5 [i_0]))) : (max(var_2, (arr_5 [9])))))) ? (max((var_3 + var_0), (((arr_23 [i_6] [i_1] [i_5] [i_1] [i_0]) ? 15011 : var_7)))) : (max(10315606870890574786, (arr_15 [i_0] [2] [i_0] [i_0] [i_0])))));
                            var_27 = (max(var_27, (((((!var_2) || (((200 ? 26 : 4294965248)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
