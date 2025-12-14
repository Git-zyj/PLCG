/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 32767;
                var_11 -= (min(((max(32767, -32767))), -var_9));
                arr_7 [i_0] [i_0] [i_1] = (max((!var_5), -3563488162304907028));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 += (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1 + 1] [i_0]) ? ((((((arr_4 [11] [i_1] [i_1]) * (arr_1 [i_0]))) == (!206)))) : -var_3));
                                arr_17 [i_3] [i_1] [8] [i_3] [i_4] = var_10;
                            }
                        }
                    }
                    arr_18 [i_0] [i_2] = (max(((max(((max((arr_10 [i_0] [i_0]), var_4))), ((var_2 * (arr_9 [i_2])))))), (((((var_10 ? -1 : (arr_5 [i_0] [0])))) + (18446744073709551615 - var_4)))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((((((var_0 <= -1) - var_2))) ? (((max(-32766, 24042)))) : var_7)))));
    var_14 = (min(var_14, var_9));
    #pragma endscop
}
