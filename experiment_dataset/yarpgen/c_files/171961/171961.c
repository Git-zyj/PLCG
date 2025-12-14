/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [14] [i_1] [i_0] &= ((-(!var_5)));
                    arr_9 [i_0] [i_0] [i_0] = ((-(~253)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [3] [i_2] [i_3] [3] = (((((~var_2) <= 4742573321827657432)) || 0));
                        arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = ((((((!(!0))))) + ((var_11 ? (((arr_4 [i_0] [i_0]) ? -1486026761 : 4742573321827657432)) : (arr_7 [i_0] [i_2 - 1] [i_1])))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = (!0);
                        arr_16 [i_0] [14] = ((-var_13 ? (!var_2) : (!0)));
                    }
                }
            }
        }
    }
    var_16 = -var_5;
    var_17 = var_4;
    var_18 = ((12304 ? var_13 : var_4));
    #pragma endscop
}
