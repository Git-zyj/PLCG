/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((!(var_8 == 723671240))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (((min(-31484, 3566060467)) | ((((min((arr_3 [i_1] [1] [i_1]), var_6))) ? (4294967292 ^ 65526) : var_5))));
                arr_7 [i_1] = (min((min((!var_8), var_5)), (arr_0 [1] [i_0])));
                arr_8 [16] [i_1] [i_1] = (arr_3 [i_1] [5] [i_1 + 2]);
            }
        }
    }
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_13 *= ((((min(24, var_1))) ? ((max((~var_5), var_8))) : ((min((arr_13 [i_2 + 1]), var_4)))));
                    arr_16 [i_4] [i_2] = (min(((((min(var_3, -16525))) / (min(-16525, 4294967267)))), (arr_0 [4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = 16514;
                                arr_23 [i_6] [i_3 - 1] [i_4] [i_5] [i_6] = ((!((!(!var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((var_5 ? var_5 : ((var_9 ? var_5 : (!var_5)))));
    #pragma endscop
}
