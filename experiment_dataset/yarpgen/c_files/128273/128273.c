/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) + ((-(arr_3 [i_0] [i_1])))));
                var_12 = var_9;
                var_13 = (((max(-var_2, (((arr_5 [i_0] [i_0] [i_0]) / 1522677356)))) / 9824));
                arr_6 [i_0 + 3] [i_0] = (max((max(9837, 5801940468391338730)), ((max((!var_6), ((8489824607698773403 ? var_1 : 60)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = (129 != 46029);
                                var_15 += (4294967295 - var_1);
                                var_16 = arr_4 [i_2] [i_3];
                                arr_23 [i_2] [i_2 - 1] [i_2] [i_3] [i_2] [i_6 + 1] = ((!(127 == var_0)));
                            }
                        }
                    }
                    arr_24 [i_3] [i_4 - 2] = (12644803605318212885 % var_3);
                }
            }
        }
        var_17 ^= 4294967295;
        arr_25 [i_2] = (var_1 & 6054528324818234132);
        arr_26 [i_2 - 1] = var_7;

        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            var_18 = (((arr_28 [i_7]) % (arr_14 [i_2 - 1] [i_2 - 1] [i_7] [i_7 + 1])));
            var_19 = 1745051669;
            arr_29 [i_7] = 1481813453;
            var_20 = ((var_5 + (arr_27 [i_7])));
        }
    }
    #pragma endscop
}
