/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = ((var_11 ? ((((var_8 ? var_0 : var_7)))) : ((248 ? 246 : 5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] |= (((var_8 || var_7) == (!var_4)));
                arr_5 [4] [i_0] [i_1] = ((((((((60 ? (arr_1 [7]) : var_3))) ? (((0 && (arr_1 [i_0])))) : ((144 ? 0 : 116))))) ? ((max(128, 128))) : ((min(var_11, (arr_0 [7]))))));
            }
        }
    }
    #pragma endscop
}
