/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(0, (-127 - 1))), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_18 ^= (((arr_0 [i_1]) & var_10));
                        var_19 = ((max(var_4, (!var_6))));
                        arr_11 [i_0] [i_0] = (var_14 | var_10);
                        var_20 = (min((-127 - 1), 9));
                    }
                    arr_12 [i_0] = (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_21 = 213;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_26 [i_6] [i_5] [i_5] [i_5] [i_5] = (103 / 98);
                                var_22 += (!-99);
                                var_23 *= (max(((max(-43, ((min(var_16, 93)))))), (min((max(var_6, 0)), (-127 - 1)))));
                            }
                        }
                    }
                    arr_27 [i_6] [i_5] [i_4] [i_6] = ((~(arr_14 [i_4])));
                }
            }
        }
    }
    var_24 = 0;
    #pragma endscop
}
