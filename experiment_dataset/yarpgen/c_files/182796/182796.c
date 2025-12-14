/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = 139;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 = ((-(((-2118411511 ? -8032960218282198083 : 32758)))));
                                var_23 = (min(var_23, (!1023)));
                                var_24 ^= (max((((var_14 == (!var_14)))), 1416448745));
                                var_25 = (max(var_25, (((((((var_4 | var_18) ? (arr_2 [i_0 + 2]) : (arr_11 [i_1] [i_3 + 4] [i_3 + 4])))) ? ((9223372036854775807 ? -110 : (min(8940175797404607039, 1023)))) : -502922756)))));
                            }
                        }
                    }
                }
                arr_13 [i_0 + 3] = (arr_9 [i_0] [i_1] [i_1 - 1] [i_1] [i_0] [i_0 + 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_5] [i_5] = (min(29555, 8486));
                var_26 = (((arr_8 [i_5] [i_6] [i_6] [i_6] [19] [i_5]) ? (var_18 <= 31) : 3431424433));
            }
        }
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_27 = ((!(arr_5 [i_7] [i_7] [i_7])));
        arr_22 [i_7] [i_7] = (-32767 - 1);
    }
    #pragma endscop
}
