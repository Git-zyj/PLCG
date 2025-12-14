/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(-var_5, ((((min(var_10, var_8))) ? var_10 : (~0)))));
    var_14 = 189;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((((arr_4 [i_1]) / (arr_1 [i_0])))) ? (0 * 200) : (((arr_4 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                var_15 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((((1 ? -3840 : 1))) ? (--215) : ((1 ? (((arr_0 [i_2]) + 54)) : -66)));
                            arr_16 [i_1] = ((((var_4 ? (arr_5 [i_1]) : 4294950912)) / (min((arr_5 [i_1]), (arr_5 [i_1])))));
                        }
                    }
                }
                arr_17 [i_1] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
