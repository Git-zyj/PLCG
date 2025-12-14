/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2])))) && ((((((var_14 ? (arr_4 [i_0] [i_0]) : var_10))) / (~var_11))))));
                var_18 += (((min(var_16, ((~(arr_5 [i_0 + 1] [i_1 + 1] [i_1 + 1]))))) != ((((var_12 ? var_4 : var_4)) >> (((arr_3 [i_0 - 1] [i_0]) - 8406450347684440968))))));
                arr_7 [i_0] [i_0 - 1] [i_0] = (min((max(0, 2147483647)), ((var_1 % (arr_4 [i_1 - 3] [i_0 + 1])))));
                var_19 = ((((max((arr_0 [i_1 + 1] [i_0 - 1]), var_14))) ? var_13 : var_3));
                var_20 = (min(var_20, ((max((min((arr_3 [i_1 - 2] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 - 1]))), (((var_12 ? (((arr_2 [i_0]) ? (arr_4 [i_0] [i_1 - 1]) : (arr_6 [i_0 - 1] [i_1]))) : var_16))))))));
            }
        }
    }
    var_21 = (max(((((var_0 || var_7) ? ((var_9 ? var_2 : var_4)) : ((var_12 ? var_14 : var_4))))), (((var_11 || var_1) ? ((var_13 ? var_9 : var_14)) : var_12))));
    #pragma endscop
}
