/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = 30483;
    var_16 = 30493;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 = 0;
                    var_18 += ((-91 ? -30483 : 127));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_11 [i_1] = -4123;
                        var_19 = (min(var_19, ((((((var_7 / var_7) ? (max(var_3, var_10)) : (max(-6, 106)))) != 254)))));
                        var_20 = (min(var_20, 116));
                        var_21 = ((((max((max((arr_0 [i_1]), (arr_4 [i_0] [i_1] [i_0]))), ((max(139, -91)))))) ? 1 : ((((31 ? 18446744073709551597 : 1322617507)) - -var_8))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [12] = ((~(arr_8 [i_0] [i_1 - 1] [i_4])));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_19 [i_4] [i_1 + 1] [i_1] [i_5] = 0;
                        var_22 = (min(var_22, var_12));
                        arr_20 [i_5] [i_1] [i_1] [i_1] [i_0] = (arr_18 [i_0] [i_1 - 2]);
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_23 += ((((((arr_21 [i_0] [11] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_1]) : 30485))) ? 0 : var_1));
                        var_24 += (arr_18 [12] [i_1]);
                    }
                }
                arr_23 [i_0] [i_1] [i_0] = (((((var_13 ? ((-(arr_10 [i_0] [i_1] [i_1]))) : (65535 < 250)))) ? (((max((arr_10 [i_1 - 2] [i_1] [i_0]), 30493)))) : (-32767 - 1)));
            }
        }
    }
    #pragma endscop
}
