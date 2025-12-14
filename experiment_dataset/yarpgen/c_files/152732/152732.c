/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (min(var_16, (((-(var_5 >= 1))))));
                        var_17 = (max(-2147483647, 4173387435));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_18 = (min(var_18, (((-var_7 ? (arr_6 [i_2] [i_0]) : (1 - -36))))));
                        var_19 = var_5;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_20 = -743581457;
                        var_21 = ((((((arr_4 [i_1 - 1] [i_1] [i_1 + 3]) ? (((min(103, var_8)))) : ((var_4 ? var_1 : var_0))))) ? (arr_4 [i_0] [i_1] [4]) : ((-32435 ? 83 : (-2147483647 - 1)))));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = (min(4173387442, -var_8));
                        arr_20 [i_5] |= ((1 ? 148 : ((-118 ? 1 : 14671379087141271457))));
                        var_22 -= (((arr_3 [i_0] [i_0] [i_0]) << ((((0 ? (-32767 - 1) : 13242082193889297855)) - 13242082193889297850))));
                    }

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_23 = ((43 ? -26853 : -9223372036854775798));
                        arr_23 [i_2] [i_6] = ((((((arr_15 [i_1 + 1] [i_2] [i_2] [i_2 + 2] [i_1 + 1]) % (arr_15 [i_1] [i_1] [i_1] [i_2 + 2] [i_2])))) ? 4173387452 : ((min(-60, -3389319596094968644)))));
                        var_24 = ((743581469 & ((4294967293 ? 2548010025164016688 : 1))));
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        var_25 |= ((((5510368369102455470 ? 178 : 61)) * (((arr_3 [i_1 + 3] [i_2 - 1] [i_7 - 1]) >> var_4))));
                        var_26 = (arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7]);
                    }
                }
            }
        }
    }
    var_27 = var_4;
    var_28 |= var_11;
    var_29 = ((177 ? 13802499833244750619 : 111));
    #pragma endscop
}
