/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (~var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [23] = -var_2;
                var_11 += (1 != 1);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0] [i_3] = ((~(max(1, var_3))));
                            arr_12 [i_0] [i_0] = (min((arr_0 [i_0]), (max(42568, 0))));
                            var_12 = (32767 | var_0);
                        }
                    }
                }
                arr_13 [i_0] = (((!-1) ? var_3 : ((-1 ? ((105 ? var_5 : 8326616662083331009)) : (((min((arr_2 [i_0]), 1))))))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = (((((max(var_7, var_9)) | ((max(1, 1)))))));
                                arr_23 [i_0 + 1] [i_0] [i_4] [i_4] [i_0] = min((max(((((arr_8 [i_1] [i_6]) << var_9))), (arr_1 [i_0] [i_1]))), (arr_2 [i_4]));
                                arr_24 [i_0] [i_0] = (((-3247191403999831413 || ((min(-17465, 18446744073709551607))))));
                                var_14 = (max(var_14, (arr_1 [i_4] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
