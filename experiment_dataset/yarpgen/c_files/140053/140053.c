/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_12 = (715437935072270970 ? ((23012 ? (var_1 || 8505449205627841962) : (var_8 & var_0))) : var_7);

        for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_0] = (min((((arr_3 [i_0] [i_0 - 2] [i_0]) ? var_3 : var_4)), (max(14599587018178262436, var_4))));
            arr_5 [i_0] = var_11;
            arr_6 [i_0] [i_0] [i_0] = (((max((((var_6 << (var_3 - 150)))), (arr_0 [i_1 - 2] [i_1 - 1]))) & (arr_2 [1] [i_0 + 1] [i_0])));
        }
        for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] [i_0] = ((var_5 ? var_2 : ((((((~(arr_13 [i_0] [i_0] [i_3] [i_2 - 1] [i_0])))) && (((463637462893492884 ? var_8 : 67))))))));
                        arr_15 [i_0] [i_0 + 1] = ((32767 ? (arr_1 [i_0]) : (max(8505449205627841962, ((min(var_5, 32767)))))));
                        arr_16 [i_4] [i_0] [2] = ((-(min((var_9 | var_5), ((29701 ? var_0 : var_10))))));
                    }
                }
            }
            var_13 = (((((min(var_6, var_1)))) >= (min((arr_10 [i_0] [i_2] [11]), ((var_4 ? 1 : (arr_0 [14] [i_0])))))));
        }
        var_14 = (max((min(((min((arr_3 [i_0] [i_0 - 1] [i_0]), var_5))), (((arr_3 [i_0] [i_0] [16]) & 32764)))), (((((~var_1) + 2147483647)) << (((max(var_2, var_11)) - 11828148883831190656))))));
        var_15 = (((((((((var_3 ? -32752 : 1)) + 2147483647)) << ((((((var_10 ? var_5 : var_3)) + 15892)) - 14))))) ? var_7 : ((~(arr_7 [i_0])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = ((-((var_1 ? var_9 : var_0))));
        arr_19 [5] = var_11;
    }
    var_17 = ((var_10 * var_1) && 8628767650249601325);
    #pragma endscop
}
