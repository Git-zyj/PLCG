/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 = ((-var_7 >= ((3668482892 ? 0 : (arr_6 [i_0 - 2])))));

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_21 = (arr_9 [i_1 + 1] [i_1 - 1]);
                        arr_10 [i_0 + 1] [20] [i_2] [i_3] &= var_1;

                        for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0 + 1] [21] [i_2] [i_2] = (min(1, ((4194303 ? -1 : (arr_4 [i_3] [i_2])))));
                            arr_16 [i_0] [i_0 + 2] [21] [i_0] [i_0] = (arr_6 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_22 = 0;
                            var_23 ^= (((!var_12) || (((var_18 ? 3102137174 : (arr_0 [i_0]))))));
                            arr_20 [i_1] [i_1] [20] [i_1] [i_1] = var_16;
                            var_24 += (((~(arr_5 [i_0] [22] [i_0]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_25 -= (arr_9 [i_0] [i_0 + 2]);
                        arr_23 [i_0 + 1] [4] [i_1 - 4] [i_2] [7] = -226;
                        var_26 = (arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0 - 1]);
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_27 = 67108863;

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_28 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] = var_3;
                            var_28 &= ((0 ? (((min(var_15, (arr_17 [i_0 - 2] [i_1 - 4] [i_2] [i_0]))))) : -1));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 *= var_17;
                            var_30 -= 1;
                            arr_32 [17] [17] [i_0] [1] [1] [i_0] = ((~((~(arr_11 [i_1 - 2] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_3;
    var_32 = ((var_19 ? 3516890260 : 29));
    #pragma endscop
}
