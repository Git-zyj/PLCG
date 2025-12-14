/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 *= 1;

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_19 = ((!((max(var_1, var_11)))));
                        var_20 = var_2;
                        var_21 |= (arr_4 [i_0] [i_3 - 1]);
                        var_22 = (max((((arr_8 [i_2] [i_1] [i_2 + 1] [6] [11] [i_2]) ? (~var_13) : (arr_5 [i_0] [i_1] [i_2 - 1] [10]))), (arr_6 [i_0] [i_0])));
                        arr_11 [i_0] [i_3] [i_2] [i_2] [i_2] = 1093980945;
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_2] [i_0] [i_2] = (1093980945 + var_7);
                        var_23 = (~((~(!var_0))));
                        var_24 -= (!-13565);
                        var_25 = min((min((arr_3 [i_1] [i_1] [i_1]), var_8)), (max((((arr_6 [i_1] [i_4]) ? var_7 : var_4)), ((var_15 ? var_0 : var_16)))));
                        var_26 = var_17;
                    }
                }
            }
        }
    }
    var_27 = var_4;
    var_28 = ((var_1 ? var_3 : (min(((var_13 ? var_4 : var_3)), ((var_14 ? var_16 : 31))))));
    var_29 = (((((56 ? var_6 : var_13))) ? (((max(7, (max(var_9, var_5)))))) : var_12));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_30 = ((min((arr_22 [i_7] [i_7] [i_6 + 1] [i_5]), (((arr_21 [0] [1] [i_7] [i_7]) ? var_3 : var_16)))));
                    var_31 |= max((min(((4093989649854099975 ? 67 : 7)), (((arr_16 [i_7]) ^ var_4)))), (((((arr_17 [i_7]) ? var_7 : var_16)))));
                    var_32 = (max(var_32, 1));
                }
            }
        }
    }
    #pragma endscop
}
