/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 = ((((!((((arr_2 [i_3]) + 1))))) ? -0 : var_5));
                                arr_13 [i_0] [i_0] [5] [i_0] [i_2] [5] [i_0] = (((((var_0 ? var_8 : (arr_9 [11] [i_1] [i_2] [i_3] [i_4])))) >= ((var_0 ? 53 : (arr_9 [4] [i_1] [1] [i_3] [i_4])))));
                                var_12 = arr_11 [i_0] [16] [i_2] [i_2];
                                var_13 ^= var_7;
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = var_7;
                            }
                        }
                    }
                    var_14 = (max(var_14, (-106 == var_3)));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_17 [i_2] [12] [13] [12] = (((((arr_12 [21] [20] [20] [i_5] [i_5]) * (arr_12 [14] [i_1] [i_2] [i_5] [i_5]))) * ((((arr_12 [i_0] [i_1] [14] [i_1] [i_0]) >= (arr_10 [i_0] [i_2] [i_2] [i_2] [i_2]))))));
                        arr_18 [i_2] [4] [i_0] [i_5] [4] [i_5] = var_0;
                    }
                    var_15 = (((-(((arr_12 [i_2] [10] [i_1] [i_1] [i_0]) + var_5)))) == (arr_1 [i_1]));
                }
            }
        }
    }
    var_16 ^= ((-6583234863065450003 == (-32767 - 1)));
    var_17 = var_7;
    #pragma endscop
}
