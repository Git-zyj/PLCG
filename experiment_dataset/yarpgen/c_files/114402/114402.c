/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (~65535);
        arr_3 [i_0] [i_0] = ((~(max(6800624521081961316, -5466655777602383826))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {
            {
                arr_9 [i_1 - 2] = (min((min((min((arr_7 [i_2] [1]), var_8)), (3889978646001197179 & -2865083977021284676))), ((~(~14556765427708354416)))));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, -7673073914698576202));
                                var_16 = (min(var_16, 3889978646001197199));
                                var_17 = var_0;
                            }
                        }
                    }
                }
                var_18 = ((((min(8978461168310520306, 126123087))) ? ((~(arr_13 [i_1 + 2] [i_1] [i_1 - 1] [i_1] [i_1]))) : 7673073914698576202));
                arr_17 [i_2] [i_2] [i_1] = var_5;
            }
        }
    }
    var_19 *= ((~(((6322704737380667635 ^ var_12) | (min(var_5, 18446744073709551599))))));
    #pragma endscop
}
