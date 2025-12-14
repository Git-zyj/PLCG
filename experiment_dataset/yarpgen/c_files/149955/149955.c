/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~-var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_0 + 1] [i_1] &= (((arr_0 [i_0 - 1] [i_0 - 1]) ? 1 : (~65535)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 = var_3;
                    arr_8 [i_2] [i_0 + 1] [i_1] [i_0 + 1] = (((~1) * (2006 > -1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_22 = 23598;
                    var_23 = (!var_12);
                }
                arr_11 [i_0] = ((~(arr_6 [i_0] [i_0 + 1] [i_1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    arr_22 [0] = arr_14 [i_4 + 1];
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 = (((~-23599) < (((arr_24 [i_4 - 1] [i_6 - 1] [i_7 + 1] [i_7 + 4]) & var_7))));
                                arr_29 [i_8] [i_7 + 1] [i_6 + 1] [i_5] [i_8] = arr_17 [i_4];
                            }
                        }
                    }
                    arr_30 [14] [i_5] [i_5] = (max((((~((max((arr_27 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]), var_2)))))), 443864493));
                    arr_31 [i_6] = 1;
                }
            }
        }
    }
    var_25 = (min(var_25, (~var_19)));
    var_26 = max(((63 ? var_7 : 1)), ((min((45010 < var_10), var_4))));
    #pragma endscop
}
