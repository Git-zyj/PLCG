/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((!(((-((1 ? 1 : 58984)))))));
    var_19 += 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_17 != (1 / 1)));
                arr_6 [i_0] [i_1] = (((min(((min(1, var_16))), (58982 * 0))) < (((var_12 > ((var_13 ? var_8 : var_16)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] [i_4] = (min((((1 < (!1)))), (((~1) ? 0 : 50786))));
                                var_20 = (((((((max(var_15, var_0))) * var_15))) ? (max(((var_14 ? var_0 : var_0)), var_14)) : ((max(1, (min(var_12, var_3)))))));
                                var_21 = ((1 ? 1 : 1));
                                var_22 = (max(6550, var_11));
                            }
                            var_23 = (((min(((1 ? var_7 : 1)), ((1 ? var_13 : var_13)))) <= ((min((0 >= var_1), var_9)))));
                            var_24 = (((((!(((var_5 ? 1 : var_13)))))) % 1));
                        }
                    }
                }
                var_25 -= var_4;
                arr_16 [i_0] = 0;
            }
        }
    }
    var_26 ^= ((((min((63106 ^ 9), -0))) ? ((((min(1, 3586))) ^ ((var_14 ? var_12 : var_11)))) : ((((4088 ? 1 : 1)) & (var_14 | 1)))));
    var_27 = (((((var_4 ? ((var_17 ? 39142 : var_6)) : ((var_15 ? var_0 : var_1))))) ? var_2 : (((((var_6 ? 1 : var_2)) == ((var_9 ? 65535 : var_10)))))));
    #pragma endscop
}
