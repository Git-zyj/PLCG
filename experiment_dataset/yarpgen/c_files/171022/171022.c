/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 = ((((max(var_2, (arr_0 [i_0] [i_0])))) ? ((+(((arr_0 [3] [3]) << (255 - 237))))) : ((((arr_0 [i_0] [15]) == ((var_1 ? (arr_0 [7] [7]) : (arr_1 [i_0]))))))));
        arr_3 [i_0] = (((((max(226, (arr_1 [i_0])))) ? (min(226, var_6)) : (arr_0 [i_0] [i_0]))));
        arr_4 [14] = -30682;
    }
    var_11 = (min(var_11, 1931974054));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    arr_15 [i_2] [i_2] [i_2] = (25 ^ 4294965248);
                    arr_16 [i_2] [i_2 + 2] [i_2] [i_3 - 2] = ((2047 ? (arr_11 [i_3 - 1] [i_2] [i_2] [i_1 + 1]) : (arr_11 [i_1 - 1] [i_2] [i_3 - 1] [i_2 + 2])));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_12 = (((arr_19 [i_2] [i_2 + 2] [i_2]) / ((-12508 / (arr_13 [i_1])))));
                    var_13 = (arr_11 [i_1 - 2] [i_2] [i_1 - 2] [i_2]);

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_14 = var_8;
                        arr_23 [i_1] [i_2 + 1] [i_4] [i_2] = 9223372036854775807;
                    }
                }
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_15 *= (min((arr_24 [17] [17] [3] [6]), var_0));
                    var_16 = 2;
                }
                arr_26 [i_2] [i_2] = (((arr_11 [12] [i_2] [i_1 - 2] [15]) ? (((var_3 & -761105165) & (arr_6 [i_2 + 2]))) : (65535 & 98)));
            }
        }
    }
    #pragma endscop
}
