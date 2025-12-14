/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_10 = var_6;
                                var_11 -= (-9223372036854775807 - 1);
                                var_12 -= (((((((arr_9 [i_0] [i_1] [i_2] [i_3] [7] [i_4]) == 82)) ? ((-1 ? (arr_7 [i_0] [i_3] [i_2] [i_2]) : var_4)) : (1 > -23))) & 0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_13 = var_7;
                            arr_16 [i_0] [i_5] [i_5] [i_1] [i_0 + 4] [i_0] = (((((((arr_10 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [i_6]) == (!17834992130105513208))))) == (max(((var_5 ? var_9 : var_7)), ((255 ? 4294967280 : 0))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_7 && ((((((1 ? 0 : 1986578368674686808))) - ((196391557 ? -2031645358 : 65535)))))));
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_15 ^= (var_9 == var_2);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_16 = var_5;
                                var_17 = -464114189;
                                var_18 = var_0;
                            }
                        }
                    }
                    var_19 = 3527944296;
                }
            }
        }
    }
    #pragma endscop
}
