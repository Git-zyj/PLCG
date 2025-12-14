/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_1]);
                    arr_8 [i_0] = (min((arr_5 [i_0] [i_1] [i_1] [9]), ((-(min((arr_2 [i_1 + 1]), var_1))))));
                    var_16 -= (((((((min(0, var_10))) * (((arr_7 [i_0] [2] [i_0]) / var_7))))) ? var_11 : (((arr_3 [i_0] [i_0]) * (arr_2 [i_1 - 1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_17 -= ((((-(min(var_9, 1280639444978617625)))) / ((((((var_13 ? 6906 : var_5)) != var_4))))));
                    var_18 = (min(var_18, ((((((var_3 ? (arr_10 [i_3]) : (min(var_4, 3184178547))))) ? (((arr_9 [i_3]) ? var_7 : (((-(arr_3 [i_4] [i_3])))))) : ((((var_11 <= (4207220775 / 278248545))))))))));
                }
            }
        }
    }
    #pragma endscop
}
