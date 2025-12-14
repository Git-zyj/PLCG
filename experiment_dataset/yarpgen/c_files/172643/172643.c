/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [15] [i_2] [i_0] [i_0] = -5263561422024280810;
                                arr_16 [i_2] [i_1] = ((((var_3 ? 64 : (arr_8 [i_3] [i_3] [i_3] [i_3])))) ? -1037760968904407813 : (arr_8 [i_0 + 1] [16] [i_0 + 1] [i_0 + 2]));
                                var_14 = 0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = (arr_6 [i_5] [i_2] [i_0]);
                                var_16 = ((~(((((1 ? 255 : -2147483645))) ? (18364934335714666869 <= 18) : (((arr_10 [i_1] [i_1] [i_1] [i_1]) ? var_3 : (arr_5 [i_6])))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((min(var_0, (-32767 - 1))));
                                var_17 = arr_3 [i_0] [i_0];
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_7;
    var_19 = (-32767 - 1);
    var_20 = -var_9;
    var_21 = (min(var_21, (((((min((!var_11), ((120 ? -1386846124475297898 : 2624184956))))) ? 110 : ((-((var_13 ? 32 : var_3)))))))));
    #pragma endscop
}
