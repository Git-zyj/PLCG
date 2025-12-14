/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (!var_7);
    var_11 = var_0;
    var_12 = (min(var_1, (((var_9 ? var_8 : var_8)))));
    var_13 = (((-127 - 1) >= var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min((arr_5 [i_1] [2]), var_2));

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_15 ^= (min(((min(((var_3 ? var_3 : var_3)), (min(var_5, -31834023))))), (((var_4 + 9223372036854775807) >> (((arr_10 [i_3]) - 45))))));
                        var_16 = (max(var_16, (((((!(((37 ? 7494 : var_6))))) ? ((-(-127 - 1))) : (min(((0 ? var_9 : (arr_10 [i_2 + 1]))), 65)))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            arr_15 [4] [9] [9] [i_4] [i_4] [i_4] = var_6;
                            var_17 = var_4;
                        }
                        var_18 &= ((~(((((var_6 ? (arr_9 [i_2] [i_1] [i_2]) : 3636904893))) ? (arr_6 [8] [i_1] [i_2 + 1]) : var_9))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (var_1 + 134217727);
                        var_20 &= var_8;
                    }
                    var_21 = ((5534641411739360395 ? ((var_5 ? 3329767784 : ((-86 ? var_5 : var_0)))) : (((arr_17 [1] [i_2 + 1] [1] [3]) + -1))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] = -442110612315684007;
                                var_22 -= var_0;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [i_1] [i_8] [0] [i_9] [i_10] &= (((((var_3 ? 65 : 169))) ? ((var_1 | (arr_2 [i_0]))) : ((((16397 + -4) / 791988488)))));
                                arr_35 [i_9] [i_1] [i_8] [i_9] [i_10] [i_9] &= ((~(min(73349186, -11127))));
                                var_23 = var_2;
                                var_24 = (min((((arr_1 [i_9] [i_10]) % var_4)), var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
