/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((~((max(var_5, var_6))))) & var_5));
    var_12 = 2495724854742120;
    var_13 *= ((var_6 > (((var_4 >= var_1) ? 9223372036854775791 : (((-9223372036854775807 - 1) ? 2495724854742130 : -13843))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (((((-1999240133735456710 ? (arr_9 [i_4 - 1] [i_1] [i_4 - 2]) : 2339287709))) ? var_7 : 1));
                                var_15 = ((((((((arr_4 [i_1] [i_1]) ? -2495724854742115 : var_0)) | (min(-9223372036854775791, 2225926959))))) > (((arr_12 [i_0] [i_1] [i_2] [5] [i_3 - 2] [i_0]) * (2495724854742135 < var_9)))));
                                var_16 = ((1 ? (27 % var_7) : var_5));
                            }
                        }
                    }
                    var_17 = ((((((var_0 ? var_1 : var_2)) / (arr_6 [i_0] [i_1] [i_1])))));
                    arr_13 [i_0] [i_1] [i_1] = (((((127 ? (max(2069040333, 9427531398289135720)) : (3109544848 < 5)))) ? 3256536236 : ((var_9 ? (var_5 - var_10) : (arr_5 [i_2] [i_0] [i_0])))));
                    var_18 = ((((((((arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]) >> (9223372036854775807 - 9223372036854775777)))) ? -2495724854742125 : (arr_4 [i_0] [i_1]))) > ((max((-9223372036854775792 == 1), (((arr_4 [i_1] [i_0]) ? var_7 : -32753)))))));
                }
            }
        }
    }
    #pragma endscop
}
