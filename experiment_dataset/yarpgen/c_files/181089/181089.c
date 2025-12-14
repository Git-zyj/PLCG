/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(var_7, ((((max(59, var_4))) ? var_0 : (min(var_4, var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((var_8 ? ((~(arr_0 [i_0]))) : -25508));
        var_14 = ((~(arr_1 [i_0])));
    }
    var_15 += (max(((var_2 ? ((min(var_10, var_12))) : var_12)), (min(var_4, var_4))));

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 *= ((-var_1 || (((-3456 ? (((min(-25508, -25508)))) : ((var_0 ? 127 : var_5)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, (((-((((arr_5 [i_1]) < (((arr_8 [23] [i_4]) ? 25507 : (arr_8 [i_1] [i_1])))))))))));
                        var_18 = (max(var_18, -25507));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_16 [i_5] = (arr_11 [i_5] [i_5] [i_5] [i_5]);
        var_19 = (arr_6 [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_20 += (arr_8 [i_6] [i_6]);
        arr_19 [i_6] = ((-((var_9 + (arr_8 [i_6] [9])))));
        var_21 = (max(var_21, -var_5));
        var_22 = ((-1624717388 ? -10 : 25502));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_23 = (-((min((arr_23 [i_7]), ((min(1, var_11)))))));
                var_24 = ((((min(var_10, (((arr_6 [i_7] [i_7]) ? 1 : -9))))) ? ((((((arr_0 [i_7]) ? (arr_13 [i_7] [i_8] [i_8] [i_8] [i_7]) : (arr_8 [i_7] [i_7])))) ? (arr_25 [i_7] [i_8] [i_8]) : (arr_21 [i_7]))) : (((((arr_5 [i_7]) ? var_10 : 1))))));
                arr_26 [i_7] [i_7] [i_7] = ((~(((arr_1 [i_7]) ? var_12 : 3924970264))));
                arr_27 [i_7] = ((((min(var_3, (arr_21 [i_7])))) ? ((max((arr_21 [i_7]), (arr_21 [i_8])))) : var_3));
            }
        }
    }
    #pragma endscop
}
