/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 -= (min((arr_1 [i_2]), (max(-192, ((261632 ? (arr_2 [i_0]) : (arr_5 [i_0])))))));
                    var_19 = (arr_0 [i_2]);
                    arr_8 [i_0] = (((min(0, (arr_1 [i_0]))) / ((((arr_1 [i_2]) ? -526072160 : (arr_1 [i_1]))))));
                }
            }
        }
    }
    var_20 = (max(var_0, ((var_0 ? ((var_11 ? var_12 : 17704773868248107193)) : var_16))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            {
                var_21 = (~1721444044);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 = ((min((max((arr_7 [i_4 + 1] [i_4 + 1]), 3768895135)), 1702)) + 0);
                                var_23 = ((((((20971 + (arr_22 [i_7] [i_4 + 1] [i_5 + 1] [i_5] [i_7] [i_3]))) + (arr_12 [i_4 - 2] [i_7]))) == ((-(arr_18 [i_3] [i_4] [i_5] [i_4])))));
                                arr_25 [i_3] [i_4 - 1] [i_5] [i_6] [i_5] = (arr_6 [i_3] [i_3] [i_3]);
                                arr_26 [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] = ((1189852265 ? (17704773868248107193 + 8978312352374797249) : -42137));
                            }
                        }
                    }
                }
                var_24 = (((((((((arr_9 [i_3]) + 8978312352374797249)) != (((-8978312352374797249 ? -337671154 : (arr_21 [i_4 + 1])))))))) > (arr_0 [i_4 - 2])));
            }
        }
    }
    #pragma endscop
}
