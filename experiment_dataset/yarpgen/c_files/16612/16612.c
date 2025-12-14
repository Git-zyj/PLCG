/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_0 [i_0] [i_1]);
                var_19 = ((-(((((-24272 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? ((205 ? 14 : (arr_3 [i_0]))) : (arr_3 [i_0])))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    var_20 = ((1030231077 ? 1030231083 : 8191));
                    var_21 = var_5;
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_22 = (((((-(arr_15 [i_0] [i_5 + 1] [i_5 - 2] [i_5 - 1] [i_5 - 2] [i_5])))) ? (((((32767 ? -1 : 251))) ? var_12 : (((arr_15 [i_0] [8] [i_0] [i_5] [i_5 + 2] [i_5]) ? (arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) : 14)))) : (arr_1 [i_0])));
                                var_23 = -13385;
                            }
                        }
                    }
                    var_24 = ((((arr_9 [i_0]) ? var_12 : var_13)));
                    var_25 = ((4135942187075943725 * (((1 ? (arr_15 [i_0] [i_1] [i_1] [i_3 + 1] [4] [i_3 - 1]) : 1)))));
                }
            }
        }
    }
    var_26 = var_9;
    var_27 = (((~-13) ? (((var_11 * ((min(var_3, 1)))))) : ((1 ? var_6 : (~var_6)))));
    var_28 = -var_8;
    #pragma endscop
}
