/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_11 ? var_6 : var_7))) ? (max(-6554614509951446205, -38)) : (!var_5)));
    var_13 = (max((((((var_10 << (((var_4 + 27) - 10))))) ? ((min(var_0, -24))) : ((var_9 ? var_8 : var_6)))), -var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((-32640 ? ((max(var_3, (max(var_6, var_4))))) : (((!1) ? ((max(var_7, (arr_0 [i_0] [i_1])))) : (((arr_2 [i_1]) ? (arr_3 [i_1] [i_0]) : var_11))))));
                arr_5 [i_0] [i_1] [i_0] = (((((-((max(var_10, (arr_0 [i_0] [i_1]))))))) && (((18162 ? 32895 : 37)))));
            }
        }
    }
    var_14 = ((max((!18168), var_7)));
    #pragma endscop
}
