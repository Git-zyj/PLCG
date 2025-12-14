/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_8 / -45);
    var_16 = (max(var_14, ((119 * (16879164344494441684 * 51869)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_17 = (((((~(arr_1 [i_0 + 4])))) ? ((max((arr_0 [i_0]), ((8008363094669935236 ? 22 : 51855))))) : (((~57) / var_1))));
        var_18 ^= ((~(arr_0 [i_0 + 3])));
        arr_2 [13] = (max(((0 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1]))), (3 + 128)));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_11 [i_1] [2] [i_3] = (((((~(!-1943585299)))) ? (((~(arr_8 [4])))) : (((((-1305841948 ^ (arr_5 [7])))) ? (max(-49, (arr_1 [i_3]))) : (arr_10 [i_1] [i_2] [i_3])))));
                    var_19 = (max(((var_9 & (arr_3 [i_1]))), (((arr_3 [i_1]) ? var_5 : (arr_3 [i_1])))));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = (arr_8 [i_1]);
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
