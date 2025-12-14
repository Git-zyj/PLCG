/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 -= var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((((((((arr_6 [i_0] [i_1] [10] [10]) ? var_2 : 16171657529752693212))) ? 43 : -43))) ? ((-(arr_1 [i_0 + 2]))) : (arr_4 [i_1] [1])));
                    arr_8 [i_0] [12] [i_2] |= (+(min((arr_5 [4] [i_0 + 2] [i_2]), ((((arr_3 [i_0] [i_1] [6]) > (arr_4 [i_0] [i_1])))))));
                }
            }
        }
    }
    var_12 &= (max((var_3 & var_0), var_2));
    var_13 = (min(var_13, var_6));
    #pragma endscop
}
