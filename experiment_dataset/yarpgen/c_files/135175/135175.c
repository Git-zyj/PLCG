/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [16] |= (((((52453364 % 11614013798754252390) ? var_13 : 1)) >> (-var_17 + 28870)));
        arr_3 [i_0] [i_0] = (((min(((var_9 << (arr_0 [i_0]))), (arr_0 [i_0]))) == ((((var_15 ? -38 : var_13)) | (max(var_6, var_5))))));
        var_18 = ((6832730274955299226 - ((((var_0 | 16005760392664503154) ? (max(var_11, var_8)) : var_1)))));
    }

    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_19 = ((64849 ? (arr_6 [i_1]) : (arr_6 [i_1 - 2])));

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_16 [i_1 + 1] [i_2] [i_3 - 1] [i_3 - 1] [i_5] [i_4] [i_5] &= var_1;
                            var_20 = (min(var_20, (arr_0 [i_3 - 1])));
                            arr_17 [i_1 - 2] [i_3] [i_3] [i_4] [i_2] = (((var_3 + 9223372036854775807) << ((((var_0 << (((arr_9 [i_1]) - 10933)))) - 13))));
                        }
                    }
                }
            }
            var_21 = 2440983681045048441;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (((((((arr_10 [i_1] [i_1] [1]) ? var_15 : -77))) ? (arr_1 [i_1]) : ((41 | (arr_14 [i_1 + 1] [i_1]))))))));
            var_23 += ((16005760392664503175 ? (var_1 | var_12) : (arr_8 [i_1 - 2])));
        }
    }
    #pragma endscop
}
