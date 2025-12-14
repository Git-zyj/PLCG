/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = -27477;
                            arr_10 [i_0] [i_1] = ((!((!(arr_2 [i_0])))));
                            var_15 += var_7;
                        }
                    }
                }
                var_16 += var_6;
                arr_11 [i_0] [i_0] [i_0] = ((!((max(((min(var_3, var_8))), (((arr_3 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_0]))))))));
                var_17 = 255;
            }
        }
    }
    var_18 = ((((-((var_10 ? var_9 : var_13))))) ? 1 : ((var_9 ? var_7 : ((var_4 ? var_7 : var_10)))));
    #pragma endscop
}
