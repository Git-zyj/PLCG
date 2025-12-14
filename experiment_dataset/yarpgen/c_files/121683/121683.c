/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((min(11, var_4)) ^ (((min(var_14, var_11)))))))));
    var_19 += (max(((var_4 ? var_6 : ((max(var_5, -32))))), var_7));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (((-11 | (~var_15))))));
        var_21 = (min(var_21, (((~((max((arr_0 [i_0] [i_0]), var_7))))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_22 = var_5;
            var_23 = (min(((~(arr_1 [i_0]))), ((max((0 || var_14), (min(-32750, (arr_2 [i_0]))))))));
            var_24 = ((((-(arr_3 [i_0] [1] [i_1]))) != ((min(var_0, var_17)))));
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_9 [i_2] = (min((~0), (min(126, (arr_8 [8] [i_2] [i_2])))));
                arr_10 [i_2] [i_2] [i_2] = var_9;
                arr_11 [i_2] = min((max((max(var_8, var_2)), -32750)), var_2);
                arr_12 [i_2] [i_3] [1] |= (~-var_13);
            }
        }
    }
    #pragma endscop
}
