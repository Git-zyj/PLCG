/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((-44 ^ 65535) ^ var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_20 = 23;
                        arr_9 [i_2] = var_7;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_21 = (((26 ? (((arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2]) ? (arr_7 [i_0] [i_0] [i_0] [i_2]) : (arr_12 [i_0] [i_1] [i_2] [i_4] [i_0] [i_2]))) : (~var_10))));
                                var_22 *= ((-(((!(arr_13 [16] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))));
                            }
                        }
                    }
                    arr_15 [i_0 + 2] [i_1] [i_2] [i_1] = var_5;
                    var_23 = (~10560372830824933799);
                }
            }
        }
    }
    #pragma endscop
}
