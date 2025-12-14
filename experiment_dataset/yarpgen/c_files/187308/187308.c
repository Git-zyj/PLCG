/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [4] [0] |= ((!((((var_11 + var_6) + (65535 + var_1))))));
                arr_7 [i_0] = ((55615 * (9921 && var_3)));
                arr_8 [i_0] [i_1] [i_0] = 2417434072;
                arr_9 [i_0] [i_0] = ((-(min(((13884513805219975015 << (-8 + 54))), 25975))));
                arr_10 [i_0] = (((((~(18124 ^ -1)))) ? var_1 : var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_12 = 1071433825;
                                var_13 = (max(var_13, 55615));
                            }
                        }
                    }
                }
                arr_23 [i_2] = 511327946885470506;
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
