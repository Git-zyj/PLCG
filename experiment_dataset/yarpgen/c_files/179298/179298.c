/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((-(((var_8 != var_8) ? ((max(var_6, var_1))) : ((var_1 ? var_8 : var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = min((((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))), (((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 ^= max(((max(((((arr_9 [i_0] [i_0] [5] [i_3 + 2] [i_3 + 2] [i_3 + 4]) && var_1))), (min((-32767 - 1), -77))))), (arr_0 [18] [i_0]));
                            var_16 *= ((439905669 ? ((-(((1 != (arr_4 [i_0])))))) : (max(var_5, var_7))));
                            var_17 = var_6;
                            var_18 ^= (min((((var_10 ? (arr_6 [i_1 + 1] [i_1 - 2] [4] [23]) : var_10))), (min(var_4, (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                            var_19 = (max(((((min(14554100460519978693, -106))) ? 2147483622 : (arr_6 [i_0] [i_1 + 1] [i_1 + 1] [5]))), 19215));
                        }
                    }
                }
                arr_12 [i_0] [i_1 - 1] = (((min(1, var_3)) | ((((!(221 != 1)))))));
            }
        }
    }
    var_20 = (min(((19 ? 1 : 1)), -1677589998));
    var_21 = var_2;
    #pragma endscop
}
