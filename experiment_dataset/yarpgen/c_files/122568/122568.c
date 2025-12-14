/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((-28 || (~var_6)))) <= (arr_1 [i_0 - 1] [i_0 + 2])));
        arr_4 [i_0] = (min((min((arr_2 [i_0]), (arr_2 [i_0]))), ((min(-var_5, ((-991 ? (arr_1 [i_0 + 1] [i_0]) : (-32767 - 1))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            {
                var_20 = (arr_6 [i_1 - 1] [i_2 + 2]);
                var_21 = var_11;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_22 = -32745;
                            arr_16 [i_1] [i_1] [i_1] [i_4] = ((!((min(var_15, ((min(-991, -20800))))))));
                            var_23 ^= var_19;
                            arr_17 [i_3] [i_3] [i_2 + 3] [i_1] [i_1] = ((~(arr_2 [i_3])));
                            arr_18 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1 - 2] = ((!(arr_0 [i_3] [i_3])));
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_24 = ((((((arr_12 [i_5 + 2] [i_1] [i_1]) <= (min((arr_6 [i_1 - 2] [i_1 - 2]), (arr_0 [i_5] [i_5 - 1])))))) != (((arr_15 [i_1] [i_2]) ? (((!(arr_14 [i_5 - 1] [i_5 - 1] [i_5] [i_1])))) : 18661))));
                    var_25 = min(((((var_7 || (arr_1 [i_2] [i_2]))))), (min((arr_2 [i_5]), 23)));
                }
                arr_22 [i_1] [i_2] = min(375850135, ((((((arr_1 [i_2] [i_1]) ^ var_9))) ? 6140744023686449101 : ((((arr_8 [i_1] [i_1 - 4] [i_2 - 1]) ? var_9 : var_19))))));
            }
        }
    }
    var_26 = (min(((-4296965268370006350 ? (((max(-9321, var_6)))) : 124)), ((max(-1, var_7)))));
    var_27 = 1125899902648320;
    #pragma endscop
}
