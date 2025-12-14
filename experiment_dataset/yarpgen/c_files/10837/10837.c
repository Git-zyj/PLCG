/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((max(2323132210, ((3351198065 ? 4161063108 : 0)))), var_13);
    var_17 = var_6;
    var_18 = (var_9 ? (((max(4294967282, var_9)) | (11 * 4294967295))) : ((((12 || ((max(var_8, 11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1 + 3] = max(22, 18);
                arr_7 [i_0] [i_0] = ((((((min((arr_5 [i_0] [i_1 + 1] [i_1]), var_2))) ? ((4294967273 ? 22 : var_9)) : (2 && var_7))) != (((((var_15 ? var_2 : 11))) ? var_2 : 4294967269))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_4] [i_4] = arr_4 [i_2] [i_2] [i_4];
                                var_19 = (((min(var_9, (arr_14 [13] [i_0] [i_1] [i_4] [i_3 - 2] [i_4])))) ? ((~(min(28, 7)))) : (var_9 ^ var_11));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [15] = ((4294967273 / var_15) ? var_3 : var_8);
                            arr_23 [i_0] [i_1] [i_5] [i_5] [i_5] = 0;

                            for (int i_7 = 4; i_7 < 16;i_7 += 1)
                            {
                                arr_26 [i_0] [i_1 + 1] [i_5] [2] [i_7] = arr_3 [i_1 + 2] [9] [i_1 + 2];
                                arr_27 [i_1 + 2] [i_5] = (4294967295 * 0);
                            }
                            var_20 = (max(var_20, 4294967267));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
