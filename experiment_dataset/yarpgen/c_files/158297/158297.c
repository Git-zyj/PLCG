/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = 37;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_17 += ((1 ? 0 : -1));
                    var_18 = var_15;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 = (min(var_19, ((((arr_8 [i_0] [i_0] [i_0] [i_0]) <= (((-(arr_1 [i_1 + 1] [8])))))))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_1] [i_0] [i_1] = (((((5394296873736193166 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_13))) ? (arr_11 [i_0] [i_3]) : (arr_4 [i_4 + 1])));
                        arr_15 [i_0] [i_0] [1] &= ((var_14 - (arr_12 [i_1 + 1] [i_3] [i_4 - 1] [i_4 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] = (((max(1055697595, 10)) - ((((2047 != (arr_6 [i_1 + 1] [i_1])))))));
                        var_20 = (min(var_20, (((max(var_16, var_11))))));
                        arr_20 [i_0] [i_0] [8] [i_0] [i_5] [i_0] &= var_7;
                    }
                    var_21 = ((((min(1055697595, 458364098))) ? (((arr_4 [i_3]) ? 4026531840 : 458364098)) : (arr_4 [i_1 - 1])));
                }
                arr_21 [i_0] [i_1] = (min((max(var_14, (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))), (((-12 == ((3836603197 ? 3 : 5159972051722058870)))))));
                var_22 += ((((min(((var_8 ? 3022058096149474943 : 0)), 15))) ? (((!((max((arr_18 [i_0]), 512821436609864863)))))) : ((((max(4294967295, (arr_18 [i_0])))) ? (arr_6 [i_0] [i_1 + 1]) : (arr_9 [i_0] [i_0] [i_0] [2])))));
                arr_22 [i_0] [i_0] [i_1] = (((((max((arr_16 [i_1 - 1] [i_1] [i_1 + 1] [i_0]), 133))) ? (((arr_6 [i_0] [i_1]) | var_4)) : 15424685977560076672)));
            }
        }
    }
    var_23 += 12505181159216461339;
    #pragma endscop
}
