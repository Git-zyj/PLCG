/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(-1, -8)))));
    var_21 = (min((var_3 ^ var_17), (((+(((-68 + 2147483647) << (var_6 - 4609210883835855903))))))));
    var_22 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((-(((!((!(arr_5 [2]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_23 = min(((max(((min(65518, 9895))), ((-312408018 ? var_15 : var_18))))), ((1 ? 288230376017494016 : 255)));
                                var_24 = var_19;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (arr_14 [i_1] [i_1]);
                var_25 = (min(var_25, ((((var_5 / 127) ? (~-19739) : (arr_8 [i_0 - 1] [i_0] [i_1] [i_1]))))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        var_26 = (arr_9 [i_5] [i_5 + 3] [i_5 + 3]);

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_27 |= -3366314651;
            var_28 *= var_11;
            var_29 = (arr_1 [i_5 + 2] [i_5 + 2]);
        }
        var_30 = 14920;
    }
    #pragma endscop
}
