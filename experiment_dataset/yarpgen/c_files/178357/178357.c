/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((arr_0 [i_0 + 2]) + (min(-5587892771616389644, (arr_1 [i_0 + 1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 20;i_4 += 1)
                            {
                                var_11 = ((2387825388 ? ((max(3773, 0))) : (21 > 70351564308480)));
                                var_12 = (max(((max((arr_11 [i_0 - 3] [i_1] [1] [i_4 + 2] [i_3 - 1]), (arr_11 [i_0 - 1] [5] [i_2] [i_4 - 1] [i_3 + 1])))), ((1713053878 ? 4640903112402005497 : 70351564308477))));
                            }
                            for (int i_5 = 3; i_5 < 21;i_5 += 1)
                            {
                                var_13 = (21 << (220 - 202));
                                arr_20 [i_0 - 1] [i_1] = (max((arr_2 [i_1] [i_2] [i_1]), (min(var_5, (arr_19 [i_1] [i_1] [22] [i_1] [i_5])))));
                            }
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                var_14 = (max((((((var_3 ? 70351564308477 : 65535))) ? var_2 : (arr_13 [i_6 - 1] [i_3] [i_0] [i_0] [i_0]))), (max(var_5, (arr_8 [i_6 - 1] [i_6 - 2] [i_6 - 2])))));
                                arr_25 [i_0] [i_1] [i_2] [i_1] [i_6 - 2] = ((-(((arr_19 [i_1] [i_0] [i_0 - 1] [i_6 + 1] [i_6 + 1]) ? (arr_15 [i_1]) : (max(18446744073709551615, var_5))))));
                                var_15 = (min(var_15, var_3));
                            }
                            var_16 = (max(var_16, 21));
                            arr_26 [i_1] = (((((5469703159002770564 ? 14 : 65535))) ? (((((max(16, var_4))) ? ((var_6 ? (arr_8 [i_0] [i_1] [i_2]) : var_5)) : (((max(0, 146))))))) : (((var_1 / 1) ? (((-(arr_4 [i_3])))) : ((-1777453217 ? 18446744073709551615 : 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
