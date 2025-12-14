/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((((var_4 ? (arr_0 [i_0]) : (((arr_2 [i_0]) ? var_3 : var_12))))) ? ((max(var_12, var_12))) : ((min(var_7, ((-35 ? var_0 : var_9)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 ^= ((min((max(var_6, (arr_8 [0]))), 1)) == ((((((var_8 ? var_6 : 255))) || (2 || var_11)))));
                                var_15 = var_6;
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] = ((!(((((((arr_4 [i_3] [13] [i_1 - 1]) ? 24576 : var_1))) ? (((-127 - 1) + (arr_1 [i_0]))) : (((var_4 ? 3121740279579531165 : 7236014331979710399))))))));
                            }
                        }
                    }
                    arr_13 [9] [9] [i_2 + 1] [i_2 + 1] = ((((((((var_12 ? (arr_3 [i_0] [15]) : var_5))) ? 1 : ((min(var_12, 142)))))) || ((((var_4 || 13) ? (arr_4 [i_2] [i_1] [i_0]) : (((var_7 ? var_0 : -4642))))))));
                    arr_14 [i_0] [i_0] [i_2] = (max(((((max(var_11, var_7))) ? ((var_7 ? var_1 : 0)) : (~291223144))), (!var_8)));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] = (((((var_11 ? (((var_12 ? var_2 : var_0))) : ((var_1 ? var_7 : var_8))))) ? ((max((((arr_5 [5] [i_1] [5] [i_1]) ? var_2 : var_7)), ((max(var_12, (arr_10 [2] [2] [i_2 - 1] [i_2 - 1]))))))) : ((var_8 ? (((var_9 ? (arr_11 [i_0] [i_1] [i_2] [10]) : var_7))) : (((-3656821002530683172 + 9223372036854775807) >> (22022 - 22011)))))));
                        var_16 ^= var_2;
                    }
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = (((((min(var_4, var_10)))) ? (max((var_7 | var_10), ((max(var_5, -2147483633))))) : var_7));
    var_19 = var_8;
    #pragma endscop
}
