/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(((var_9 ? 2572658200 : var_4)), var_10)), ((max(-124666900, ((var_17 ? 0 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = (((3362242427 ? 4286727440 : ((max(309365755, var_3))))));
                                var_20 = (((((((97 ? -10 : var_16))) ? (min(var_11, 4294967284)) : (~2147483647)))) ? (max(var_17, -113)) : var_15);
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((max((min(var_11, var_11)), var_5))) ? (((!var_5) ? ((var_8 ? var_13 : var_16)) : ((var_0 ? var_7 : 81433356)))) : (((arr_2 [i_3 - 1]) ? (max(var_15, 2726531056)) : (!var_9)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(max(-18499, ((2957972057 ? 144 : -38))))));
                                var_21 -= ((18446744073709551615 ? (min(39, ((6 ? 0 : 207)))) : (max(((min(var_7, var_14))), (max(1072060968, 2049174032))))));
                            }
                            for (int i_5 = 1; i_5 < 22;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [11] [i_0] = var_9;
                                arr_21 [i_3] [i_5] = ((var_17 ? 2019199720 : var_3));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_22 += 255;
                                var_23 = (max(51, (131889092 ^ 28)));
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_6] |= (((max(7627847919074687916, ((max(var_6, var_8))))) ^ (((20 ? (4 < -1051238234) : (min(var_7, var_17)))))));
                                var_24 ^= (~1776260630);
                                var_25 = var_7;
                            }
                            arr_26 [9] [9] [i_2] [i_3] = var_0;
                        }
                    }
                }
                arr_27 [i_0] = (max(-24, (max((var_1 ^ var_9), ((3 ? 209 : 3204012187))))));
            }
        }
    }
    #pragma endscop
}
