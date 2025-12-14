/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((min((((!var_15) ? (arr_4 [i_0] [i_1]) : (min((arr_3 [i_0 - 2]), -1616)))), 3968090936836321688)))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (((((!var_3) || var_0)) ? (min(688418517, 13629073108672288327)) : (((255 ? 3845 : 688418522)))));
                        arr_10 [i_0] [i_1] [i_0] [i_3 + 1] = ((1616 ? (arr_8 [i_3 + 2] [i_3] [i_3 - 1] [16]) : (-1993078416 + var_15)));
                        arr_11 [i_0] [i_1 - 2] = ((((-var_6 % (3777715625 || var_18)))) * (min(var_6, var_17)));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0 + 1] [i_0] [i_3] [i_3] [i_4] = (min((((arr_9 [i_3 + 2] [i_2 + 1]) ? (arr_9 [i_3 + 2] [i_2 + 1]) : var_16)), (min(0, -1619))));
                            var_21 = (((~(var_7 | var_6))));
                        }
                        var_22 = (!(~-var_10));
                    }
                }
            }
        }
    }
    var_23 = 1545157033;
    #pragma endscop
}
