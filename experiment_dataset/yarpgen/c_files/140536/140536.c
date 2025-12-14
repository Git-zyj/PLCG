/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = var_9;
                var_13 = -2038587915;
            }
        }
    }

    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_5 [i_2]);
        var_14 = var_3;
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((1420951160 ? 32740 : 27277));
        var_15 = (arr_8 [i_3]);
    }

    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_16 = -var_3;
        var_17 = max((max((arr_13 [14]), (arr_7 [i_4] [i_4]))), (((-(arr_7 [i_4 + 1] [i_4])))));
        var_18 = (max((arr_7 [i_4] [i_4]), ((1420951157 ? -6593025443886705818 : -3939604691127428609))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_19 = (((((-(1914036777 & 6015317834489772930)))) ? (max((-1420951160 | var_5), (-32740 < -1420951153))) : ((((max(var_2, (arr_16 [i_5] [i_5])))) ? (var_4 <= var_0) : (((1420951152 >= (-9223372036854775807 - 1))))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = 2147483647;
                    var_20 = (max((arr_5 [i_5]), (max((min(var_0, (arr_14 [i_5]))), (arr_16 [i_6] [i_6 + 2])))));
                    arr_24 [i_5] [i_6] [i_6] [i_7] |= (1420951160 | -553396307692217826);
                    var_21 = (((arr_17 [i_7 - 1] [i_6 + 2] [i_6]) >= (arr_13 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
