/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [15] = (max((arr_2 [i_1]), ((4453961407577743919 ? (min(var_8, var_14)) : (var_1 && var_11)))));
                var_15 = (max(var_15, var_5));
                arr_8 [i_0] = (min((((-1 + 2147483647) >> (((17119765203172063591 >> 1) - 8559882601586031781)))), ((((min(-1, 4294967295))) ? ((var_2 ? (arr_0 [i_0]) : 1)) : var_14))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_4] [i_3] [7] = var_11;
                    arr_16 [1] [i_3] [1] = (((arr_6 [i_4]) > ((223 ? (!14) : 4))));
                    arr_17 [1] [i_4] [i_4] = (arr_14 [2] [i_4] [i_4]);
                    var_16 = (max(var_16, ((((max((~101), var_10)) | var_1)))));
                    arr_18 [i_2] [i_2] [i_3] [i_4] = var_9;
                }
            }
        }
    }
    var_17 -= (max((((((9 ? var_14 : var_2))) ? var_9 : (4712072602589316536 < var_13))), (min(((max(var_4, var_10))), (max(268304384, 2514545868279097691))))));
    #pragma endscop
}
