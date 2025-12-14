/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((+((min((arr_1 [i_0] [i_2 - 2]), (arr_1 [i_0] [i_2 - 1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_23 ^= (((((arr_8 [i_2 - 1] [i_3 + 2] [i_3 + 2]) > (arr_8 [i_2 - 2] [i_3] [i_3 + 1]))) ? ((var_18 ? (arr_8 [i_0] [i_0] [14]) : 9215624418751833203)) : (arr_8 [i_0] [i_0] [i_0])));
                                arr_11 [i_0] [i_1] [i_2] |= -1560516708;
                            }
                        }
                    }
                }
            }
        }
        var_24 |= (arr_0 [i_0]);
        var_25 = (max(var_25, 254));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_26 = 13;
                        var_27 = (max(var_27, (((((min((((1 ? 2 : 13))), (arr_12 [i_7])))) ? (((135 || var_14) ? var_16 : 960)) : -32757)))));
                        var_28 += (arr_1 [16] [i_7]);
                        arr_23 [i_0] [i_0] [i_0] [i_0] &= (max(40, var_15));
                    }
                }
            }
        }
        var_29 = (min(var_29, (((-1 ? (((12727790043864385937 == 10) ? 28 : 3)) : -621485524)))));
    }
    #pragma endscop
}
