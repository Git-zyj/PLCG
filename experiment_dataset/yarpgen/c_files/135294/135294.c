/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 18446744073709551606;
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 ^= (min((max((var_8 < 918844175631168135), (arr_10 [i_4] [i_4] [i_4] [i_0]))), (((4935124394313444385 < (arr_1 [i_0 + 2]))))));
                                arr_13 [4] [i_1] [4] [i_3] [i_1] &= (((arr_2 [i_0] [i_4]) < ((min((arr_4 [i_0 - 1] [i_0] [i_0] [i_0 + 2]), (max(26706, (arr_3 [i_3]))))))));
                                var_21 -= (arr_0 [i_4]);
                                arr_14 [i_4] [i_0] [9] [7] [i_0] [i_0 + 1] = ((min((arr_7 [i_0 + 2] [i_0] [3]), (arr_7 [i_0 + 2] [i_0] [i_0]))));
                                var_22 = (min(var_22, (arr_12 [i_0] [i_3] [i_2] [i_0] [i_4])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [i_0] = (((min(var_5, (2349263851 < -4935124394313444386))) < (((~(arr_1 [i_0 - 2]))))));
                            arr_22 [i_0] [16] [i_5] [16] &= (!var_15);
                            var_23 = (max(var_23, (((var_0 < (arr_0 [8]))))));
                            arr_23 [i_6] [i_0] [9] [i_6] [i_6] = (arr_17 [i_0] [i_5 + 2] [i_0] [i_0]);
                            var_24 *= (arr_11 [i_0 - 2] [i_0 - 2]);
                        }
                    }
                }
                var_25 *= ((-(arr_16 [16] [8] [i_0] [16])));
                arr_24 [i_0] = (~1029976943);
            }
        }
    }
    #pragma endscop
}
