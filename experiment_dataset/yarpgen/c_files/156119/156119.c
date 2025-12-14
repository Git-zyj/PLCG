/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max((max(var_12, 3966917853407686373)), 1)))));
                arr_7 [i_1] = (((((3450997038 / (((var_3 ? 26 : 0)))))) ? 45 : ((((0 ? 4132490203841041154 : 11605241859989649922)) - 0))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = 9223372036854775807;
                                var_17 = max(-98, (!140));
                                var_18 = (min(var_18, ((((~1354205346605931474) | var_8)))));
                                var_19 = (max(var_8, ((2010530196 ? 11605241859989649922 : (2 >= var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(((max((var_12 || var_2), (~var_15)))), ((max(400062970, 14500891206349171957)))));
    var_21 = (((((-(max(2847973942, 576460477425516544))))) ? 247 : (!var_11)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_22 = ((var_9 / ((((!var_0) || (var_1 % 98))))));
                    var_23 = 56;
                    arr_23 [i_5] [i_6] [i_7] [i_7] = (min((((-7255846489804463986 > var_2) ? var_0 : 6841502213719901694)), (((~246) | (~18446744073709551615)))));
                    var_24 = (min(var_24, ((((!6841502213719901722) ? (var_7 && 635036256) : (0 <= 11605241859989649922))))));
                    arr_24 [i_5] [i_6] [i_7] = min(-1161361495130179351, 0);
                }
            }
        }
    }
    #pragma endscop
}
