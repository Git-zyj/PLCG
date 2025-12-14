/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (((143833713099145216 < -28117) & (max(var_2, (max(var_6, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [i_1] [i_3] = (min((((((var_11 ? -28117 : var_6)) >= 2089055147))), (1244 | var_6)));
                        arr_11 [i_3] [i_2] [i_2] [i_0] = var_0;
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_0] = var_1;
                    arr_13 [i_2] = (+((var_8 << (((arr_4 [i_1] [i_1] [i_0]) - 26186)))));

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_1] [i_2] [i_0] = ((-28117 + (min(4299346226986843029, (arr_15 [i_0] [i_0] [i_1] [i_2] [i_4 + 1] [i_4 - 1])))));
                        arr_18 [i_2] = 2047;
                    }
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
