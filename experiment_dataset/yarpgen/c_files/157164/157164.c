/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((637953627 ? 10137080909247395990 : (((var_1 ? (arr_4 [i_0]) : (arr_2 [i_0] [i_0]))))));
                var_19 = var_6;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 |= (((((var_2 ? 15518825618694531132 : (arr_2 [6] [i_3]))))) ? (-9223372036854775807 - 1) : (((31549 ? (min(21595, (arr_8 [i_1] [i_1]))) : 464480171))));
                                arr_15 [i_0] [i_2] [i_3] [i_3] = (max((arr_2 [i_0] [i_0]), (min((arr_12 [i_1] [i_1] [i_2] [i_3] [i_2 - 1] [i_3]), (((arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) + var_17))))));
                                arr_16 [i_0] [i_1] [i_0] [1] [i_0] = (95 > 71);
                                var_21 = (((arr_4 [i_2]) > (((arr_6 [i_0]) ? -1896218571 : (arr_0 [i_3] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_6;
    var_23 = var_18;
    #pragma endscop
}
