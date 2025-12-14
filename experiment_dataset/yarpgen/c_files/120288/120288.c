/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((max(((max(var_7, 2762326446))), var_2))) ? var_8 : -var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((+(max((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_4 [7] |= (((min((arr_2 [i_0]), 1532640849)) + (((-1 - (arr_2 [i_0]))))));
                arr_5 [i_0] = (((!106) ? (min((arr_3 [i_0] [i_1]), ((var_7 ? var_8 : var_3)))) : ((+((((arr_2 [i_0]) || (arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = ((((((arr_0 [i_3]) ? (arr_0 [i_2]) : (arr_0 [i_0])))) ? (min((arr_0 [i_2]), var_7)) : ((126 ? var_6 : (arr_0 [i_0])))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((((((min((arr_3 [i_0] [i_1]), 224))) ? (((155 && (arr_10 [10] [10] [9] [i_3])))) : (arr_6 [8] [8] [i_3]))) < (max(((((arr_9 [i_0] [i_1]) != (arr_10 [i_0] [i_1] [i_2] [7])))), var_8))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((-(((arr_8 [i_3]) ? 65531 : var_5))));
                            arr_13 [i_3] [i_1] [i_1] [i_0] = (((arr_3 [i_2] [i_2]) < (((arr_6 [i_0] [i_2] [i_3]) - (((arr_3 [i_1] [i_3]) ? -36 : var_10))))));
                        }
                    }
                }
                var_15 &= ((var_9 | ((((min(var_3, var_0))) ? (arr_7 [i_0] [0] [i_1]) : (arr_3 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                arr_21 [i_4] [15] |= (((((arr_16 [i_4]) & (arr_16 [i_4]))) | var_8));
                var_16 += ((((min((arr_19 [i_5] [i_4]), (var_1 ^ 32983224)))) | (min((arr_16 [i_4]), (1532640849 ^ 65514)))));
            }
        }
    }
    var_17 ^= var_5;
    #pragma endscop
}
