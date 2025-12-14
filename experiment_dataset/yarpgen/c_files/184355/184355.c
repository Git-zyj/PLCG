/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [10] [2] [i_0] [i_1] = (min(var_11, (!805306368)));
                    var_17 = ((+(max((11800 == var_11), var_10))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 ^= (((arr_12 [i_3]) ? (arr_10 [i_3]) : ((var_6 ? (arr_11 [i_3] [i_3]) : ((var_13 & (arr_11 [i_3] [i_3])))))));
        var_19 = (max(var_19, (arr_12 [i_3])));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_16 [7] = ((var_10 ? ((-((259054759 ? var_12 : 1918823059556837557)))) : (((var_11 ? -11800 : (1918823059556837557 == 1))))));
        var_20 = var_2;
        arr_17 [i_4] = ((-17176 ? (arr_11 [i_4] [i_4]) : ((1918823059556837559 ? 259054749 : (arr_13 [i_4])))));
    }

    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] = (((((max(4276, -813460163)))) ? (!var_7) : (((((((arr_11 [i_5 + 1] [i_5]) ? (arr_15 [i_5]) : var_8))) == (arr_13 [i_5 - 2]))))));
        var_21 = (arr_14 [i_5 + 2]);
    }
    var_22 = (max(var_22, 1073741823));
    #pragma endscop
}
