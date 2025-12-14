/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((-62 ? var_0 : var_6)))));
    var_18 ^= var_4;
    var_19 = (min(var_19, var_16));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 ^= ((!((max(((var_5 ? -2439526808943150508 : 2439526808943150514)), ((max((arr_0 [16]), (arr_1 [1])))))))));
        var_21 ^= ((~(((((var_4 ? -72 : var_5))) ? 124 : -72))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_11 [i_0] = (((~0) ? (((arr_0 [i_0]) * ((2439526808943150507 ? (arr_0 [i_0]) : (arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]))))) : ((min(2, (((arr_0 [i_0]) ? -124 : (arr_8 [i_0] [i_4]))))))));
                            arr_12 [i_3] [i_3] [8] [i_3] &= ((arr_7 [i_3] [i_3] [i_2] [i_3] [i_2]) != ((((!-3780) || ((max(var_8, var_1)))))));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_1] [i_1] = ((((((arr_6 [i_0 + 1] [0] [i_0]) ? (min(var_10, 8885221733797023721)) : -33))) ? (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_0 [i_0]))) : (((var_0 ? (((arr_7 [i_0 - 1] [1] [i_0] [i_0] [i_1]) ? -202640254 : (arr_5 [12] [1] [i_0]))) : (arr_6 [i_0] [i_1] [i_0]))))));
            var_22 = (1569869959 ? (((((10052 ? 1 : 0))))) : ((-124 ? ((((arr_6 [i_0] [i_1] [i_0]) ? (arr_0 [i_0]) : (arr_7 [i_1] [i_0] [5] [i_0] [i_0])))) : (arr_6 [i_0 - 1] [i_0] [i_0]))));
        }
        arr_14 [i_0] = (arr_2 [i_0]);
        arr_15 [i_0] = 1512765496;
    }
    var_23 = var_12;
    #pragma endscop
}
