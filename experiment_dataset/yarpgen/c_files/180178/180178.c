/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [11] [i_0] = ((((((((var_9 ? var_10 : 3924530304))) ? (var_2 >> 1) : (1 != 29144)))) + 2383423516));
                                var_14 = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_20 [10] [i_1] [8] [i_0] [9] [i_5] [i_6] = ((var_5 > (~1)));
                                arr_21 [10] [i_1] [0] [i_2] [i_0] [4] = var_13;
                                var_15 = (min((((((99 ? var_8 : 0))) + (min(1, var_0)))), (((!(((45900 ? var_2 : var_5))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((((((((7021546864644788053 ? var_7 : 90)) >= 122)))) == (((((78 ? 1 : 205593151))) ? -103 : ((var_1 ? var_9 : var_6)))))))));
                                var_17 = (max(var_17, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 *= (((((-(1 % 770737972)))) && (((~(3990702241 > 20828))))));
    #pragma endscop
}
