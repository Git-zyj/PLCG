/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_15));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((max((min(var_14, (max(var_7, 1247274338)))), ((((max(var_10, var_6)) >= 228))))))));
                                var_18 = 1247274338;
                                arr_13 [i_1] [i_1] [i_1] [i_1 - 4] [i_1 - 4] [i_1] = (((((max(var_0, 11)))) == ((65519 * ((min((arr_5 [i_0] [i_1]), 37718)))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] [1] [i_1] = ((65523 <= ((var_12 ? (arr_8 [i_1]) : 31))));
            }
        }
    }
    var_19 = var_3;
    var_20 = var_11;
    var_21 = (((((30 ? ((var_10 ? 26455 : var_9)) : -1505657494))) ? ((((4294967290 << (var_4 - 1510584526))) >> (((~var_12) - 1756012906)))) : var_14));
    var_22 = (min(var_22, 47));
    #pragma endscop
}
