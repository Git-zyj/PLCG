/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = -1074508161;
        arr_4 [i_0] [i_0] = -1074508160;
        arr_5 [i_0] = (((((-1074508143 ? 1074508164 : 1074508168)))));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = ((!(-1074508184 ^ 1074508172)));
        arr_9 [i_1] = ((!((max((arr_7 [i_1]), var_6)))));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_14 [i_2] [i_2] = (arr_12 [i_1] [i_1] [i_1]);
            var_12 *= (min((~var_3), (min(-1074508170, var_1))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_19 [i_3] [i_1] [i_1] = (min(((((((arr_6 [i_1]) ? (arr_18 [i_1] [i_1] [i_3]) : 1074508161))) ? ((((arr_16 [i_1] [i_3]) ^ 1074508160))) : (max((arr_17 [i_1] [14] [i_1]), 1074508162)))), var_1));
            var_13 = var_1;
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_24 [i_4] [i_3] [i_3] [i_4] = ((var_5 > ((((-1074508170 ? var_4 : (arr_11 [i_3] [i_4])))))));
                        arr_25 [i_4] [i_3] [i_3] [i_5] = (~-1074508168);
                        arr_26 [i_1] [i_1] [i_1] [i_4] = (((arr_18 [6] [i_1] [i_4 - 1]) ? -1074508168 : ((-(max(1074508155, var_10))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_14 = ((~(max(1074508156, (!var_9)))));
                arr_33 [i_7] = (~var_3);
            }
        }
    }
    #pragma endscop
}
