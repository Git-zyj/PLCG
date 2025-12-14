/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = ((31695 ? -29 : 248));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_17 = (~14046701209202295574);
                    var_18 = (((((-117 & (((arr_3 [1] [i_1]) ? 1 : -12))))) ? (((((arr_5 [i_2] [i_1] [i_0]) ? 52 : -96)))) : ((((~146) != (arr_5 [i_2] [i_1] [i_0]))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2 - 1] = ((((arr_2 [i_0] [i_2 - 1]) - var_13)));
                }
                var_19 = (min((((!((((arr_5 [i_0] [i_1] [5]) ? 31 : -157276464)))))), ((((((arr_2 [i_0] [i_0]) ? 6 : (arr_3 [i_1 - 1] [i_0])))) ? (-1449583523077320647 & var_14) : (arr_1 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_20 = (((arr_22 [i_7 + 1] [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_7]) ? 32 : (arr_24 [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 2])));
                                var_21 = (arr_19 [i_5] [i_6] [i_7]);
                                var_22 = ((!(((~(-13895 / var_12))))));
                            }
                        }
                    }
                    var_23 = ((((arr_10 [i_3]) || 29759)));
                }
            }
        }
    }
    var_24 = (65534 > var_8);
    #pragma endscop
}
