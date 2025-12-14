/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_2] [i_2] [15] [i_2 - 1] [3] [i_2 - 1] = ((((((arr_8 [i_0]) ? (((arr_10 [i_0] [1] [i_0]) & 16305681485554359477)) : (arr_5 [i_0])))) && (~9360444548887305659)));
                            var_11 = ((var_8 | ((((((arr_6 [i_0] [i_0] [i_2] [16]) ? (arr_3 [i_2]) : (arr_6 [i_0] [i_0] [i_2] [i_2])))) ^ (((arr_2 [i_0] [i_0]) | (arr_1 [i_0])))))));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (((((((arr_1 [i_1]) / 1688347700909061042)) & (((16758396372800490573 ? 41829 : -4))))) ^ ((((arr_10 [i_0] [2] [i_1]) & ((max((arr_1 [i_0]), var_2))))))));
                arr_16 [i_0 + 1] [i_0] = (((((((var_7 ? (arr_13 [i_0] [i_0] [6] [i_0] [i_0] [i_0]) : (-127 - 1)))) ? (((arr_5 [i_0]) * 23706)) : 511)) >= (((((4294967295 < (arr_5 [i_0]))) && (((-7 ? var_2 : (arr_0 [i_0])))))))));
                arr_17 [i_0] [i_0] [i_0] = 8467993405606886908;
            }
        }
    }
    var_12 = var_10;
    #pragma endscop
}
