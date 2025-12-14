/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = 25;
                var_21 = max((((arr_0 [i_0] [i_1]) ? (arr_0 [i_0] [i_1 + 2]) : var_1)), ((((arr_0 [i_1] [i_1]) > (arr_0 [i_0] [i_1 + 1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] = (max((max(1, 1909612464)), ((max((arr_7 [i_2] [2]), (arr_7 [i_0] [i_1 + 2]))))));
                                var_22 = (((((max(2385354831, (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) || var_19)));
                                var_23 = (max((max((max((arr_6 [i_0]), (arr_7 [i_3] [i_1]))), (max(1909612464, 2385354831)))), ((max((((arr_11 [i_0] [16] [i_2] [i_3] [i_4] [16] [i_2]) ? var_9 : (arr_0 [i_1] [i_1]))), (max((arr_0 [i_3] [i_1]), (arr_11 [i_4] [i_3] [i_0] [i_2] [i_1 + 1] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((1487348135 ? 3080075244694504604 : 4294967295));
    #pragma endscop
}
