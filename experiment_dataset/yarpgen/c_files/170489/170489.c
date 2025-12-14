/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(238, 113))));
    var_14 = (max((((117 | (var_7 ^ 7)))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (117 ? var_4 : var_12);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [4] [i_0] = var_6;
                            var_15 += ((((104 ? 92 : 153)) + ((((var_9 && 2544745) && (var_6 || var_2))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] = (min((255 | -115398860), (~var_8)));
                            arr_21 [i_0] [i_1] [i_0] = (((min(((max(var_8, 65535))), (min(var_11, 153)))) + (min((max(var_8, var_11)), (var_1 / var_1)))));
                        }
                    }
                }
                arr_22 [i_0] [0] [i_1] = var_9;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 &= ((((max(143, var_0))) || ((max((((var_2 ? 255 : 162))), (min(var_11, var_12)))))));
                                arr_30 [10] [i_0] [4] [4] [i_8] = 113;
                                var_17 += (min(124, var_1));
                                var_18 ^= (min((((!(min(var_10, 1))))), (((var_5 ? 162 : var_12)))));
                                var_19 = (max(var_19, (((max(var_0, (139 ^ 117)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((max(1022, var_8))) ? (min(9102751702804901366, 153)) : var_0)) <= 123);
    var_21 = (min(var_21, 47150));
    #pragma endscop
}
