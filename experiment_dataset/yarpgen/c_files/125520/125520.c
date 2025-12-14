/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((-(var_4 ^ 0)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((max(var_8, (arr_4 [i_0 - 2]))) >= (((arr_4 [i_0 - 4]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 += (max((((!(arr_8 [i_2])))), (max((arr_1 [i_2 - 1]), (arr_8 [i_0 - 3])))));
                            arr_11 [i_1] [i_1] = ((~(((!(arr_7 [i_0 + 2]))))));
                            var_14 -= (max((arr_10 [i_0 - 3] [i_0]), (max(var_0, (((arr_8 [i_1 - 1]) ? (arr_8 [20]) : var_3))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
