/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_2, var_5));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (225 / 1394234218));
        var_15 = ((var_9 ? (var_12 | 30146) : ((-1 ? 119 : 30))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((arr_1 [i_0]) ? (((!(arr_1 [i_0])))) : ((~(var_12 | -603187006))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = (arr_6 [i_1 + 2]);
        var_16 = (max(var_16, ((((222 <= -17) ? (arr_6 [i_1 - 1]) : (((arr_6 [i_1 - 1]) ^ var_11)))))));
        var_17 = 22635;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_4] = (min(((-(arr_12 [i_2] [i_3] [i_4]))), ((44204607 / (arr_14 [i_2] [9] [i_4] [8])))));
                    var_18 = 213;
                }
            }
        }
        var_19 = arr_8 [i_2] [i_2];
    }
    #pragma endscop
}
