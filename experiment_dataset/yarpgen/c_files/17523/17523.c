/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (var_10 < var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [6] [1] [i_2] [6] = ((19362 ? (~var_7) : ((0 ? (arr_6 [i_2] [9] [i_2]) : var_8))));
                    var_14 = var_11;
                }
                var_15 = (min(var_15, ((min(((~(arr_3 [i_1] [i_1] [i_0]))), ((6975077434275087187 ? 43691 : -9441)))))));
                arr_8 [i_0] [i_0] = (min(9441, 14870));
                var_16 = (((1317909967 == 134217728) ? 65535 : ((-var_6 ? ((var_3 ? (arr_0 [4] [i_0]) : (arr_4 [i_1]))) : (arr_0 [i_1] [i_0])))));
                arr_9 [1] [1] = ((((((((arr_3 [i_0] [i_0] [i_1]) + 2147483647)) >> (((arr_4 [i_0]) - 88))))) / var_6));
            }
        }
    }
    #pragma endscop
}
