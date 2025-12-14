/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [14] [i_0] = (((((max(var_8, 0)) != var_11)) ? (min(var_7, ((0 ? 32 : var_4)))) : (((arr_0 [i_0 - 2]) ? 0 : (arr_1 [i_0 - 1] [i_0 - 3])))));
        arr_5 [i_0] = 32;
    }

    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = min((arr_9 [i_1 - 1]), (((arr_8 [i_1 + 3]) ? (arr_9 [i_1 + 2]) : (arr_9 [i_1 + 3]))));
        var_12 |= 2274190815;
        var_13 = (max((min(var_1, ((var_9 ? 430057263 : var_6)))), 539497901));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_14 = (min(var_14, ((((!(arr_12 [i_2]))) ? (max(var_2, (arr_6 [i_2]))) : (((((((26 ? 4294967292 : var_4))) && (((530288723 ? var_3 : 4046424506)))))))))));
        var_15 = (((arr_8 [i_2]) ? (arr_11 [i_2]) : 16383));
        arr_13 [i_2] = var_8;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 |= (var_8 & ((min(3233367424, var_2))));
                    var_17 = ((((min((arr_12 [i_3]), var_9))) ? (arr_15 [i_2]) : (arr_17 [i_4] [i_4])));
                }
            }
        }
    }
    var_18 = (max(var_18, (min(((max(2552944767, 3852626338))), (min((127 * 32), (min(2020776480, var_4))))))));
    var_19 = var_2;
    #pragma endscop
}
