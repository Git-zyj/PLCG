/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((~((var_7 ? 2147483640 : var_14)))), var_14);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [16] |= max(((min(2147483647, 2147483640))), (min((~var_8), (((arr_0 [i_0]) ? var_16 : var_18)))));
        arr_3 [i_0] = (((max(var_8, (arr_0 [i_0])))) ? ((((arr_0 [i_0]) && var_15))) : ((var_5 ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_20 = 46;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = -var_15;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_22 = ((-(((arr_10 [i_0] [i_2 + 1] [i_3 - 2]) ? (arr_10 [i_0] [i_2 - 4] [i_3 - 1]) : 2724548634))));
                            var_23 = ((!(arr_12 [i_2] [i_2 - 4] [i_2] [i_3 - 2] [i_3 - 2] [i_0])));
                        }
                    }
                }
            }
            var_24 = (((arr_5 [i_1]) + (max(((max(31, var_4))), (min((arr_13 [i_0] [i_1] [i_0] [i_1] [i_1]), 14835479689308664037))))));
            var_25 = (var_11 ? (max(((62 ? 4294967295 : 128)), (arr_6 [i_0] [i_1]))) : (((((((arr_7 [i_1] [2]) && (arr_11 [i_0] [i_1]))))) | (min(976011634, var_17)))));
        }
    }
    #pragma endscop
}
