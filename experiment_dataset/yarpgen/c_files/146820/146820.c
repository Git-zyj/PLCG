/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_11 = (min((min(((((arr_2 [i_1]) && -1))), ((24 ? -483805468 : (arr_4 [i_1]))))), var_5));
            var_12 = ((((-9 + ((var_9 ? (arr_3 [i_0] [i_0]) : (arr_4 [i_0]))))) >= 1));
        }
        arr_7 [i_0] &= ((-(max(10510004492712316115, (arr_3 [i_0] [i_0])))));
        var_13 &= (((min((arr_1 [i_0]), var_6))) ? (arr_4 [i_0]) : (((arr_4 [i_0]) / (arr_2 [i_0]))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_14 = (((((var_8 ? (arr_8 [i_2]) : (arr_10 [i_2])))) ? (min(var_6, ((var_8 ? 1 : (arr_10 [i_2]))))) : (((~((1 ? -50 : 1)))))));
        var_15 -= (max((min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))), (((!(arr_9 [i_2] [i_2]))))));
        arr_11 [i_2] |= 1;
        var_16 += (max((!-2147483646), (((((~(arr_8 [8])))) ? ((-29 ? var_9 : var_8)) : (max(-114, 3915605977))))));
    }
    var_17 = (var_4 ? 10246961248858620486 : ((((1 && var_5) ? (max(var_0, var_4)) : ((var_5 ? 37 : var_4))))));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_3 + 3] [i_3] = (((arr_8 [i_3]) ? ((36 ? (arr_12 [i_3]) : (arr_12 [i_3]))) : ((((min(24389, var_1)) * 1)))));
                arr_18 [i_3] = (max((((arr_12 [i_3]) & 81)), (arr_12 [i_3])));
                var_18 += (((arr_9 [i_3 + 1] [i_3 + 1]) || 3894320988));
                arr_19 [i_3] [i_3] [2] = ((((((arr_14 [i_3] [i_3] [i_3]) && -4968446359224368098)))) ? ((2777204069 << (arr_13 [i_3] [i_3]))) : (arr_8 [i_4]));
            }
        }
    }
    #pragma endscop
}
