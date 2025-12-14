/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((((4294967295 ? 0 : 6447580551555243990)) != ((((!((min(59046, 6481)))))))));
                    arr_8 [i_2] [i_2] [i_2] = ((((arr_3 [i_1]) ? (min(var_10, var_3)) : (((var_5 ? 0 : var_1))))) >> (((((arr_1 [i_0 + 1]) ? (var_0 | var_6) : var_8)) + 4630027654924369985)));
                    arr_9 [i_2] &= (arr_3 [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = -24724;
        arr_14 [i_3] = -1322930944;
        arr_15 [i_3] [i_3] = (arr_11 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_3] [i_5] [i_5] = ((+(((40811 * 31396) ? 31396 : (arr_16 [i_3] [i_3])))));
                    arr_22 [4] = ((31388 == ((min(8403251858739035648, var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
