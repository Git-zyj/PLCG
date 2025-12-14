/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_10 + var_11), ((max(-254, -var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((arr_1 [i_0]) == (!2565));
                var_18 = (max(((248 + (arr_3 [i_1] [i_0]))), (arr_1 [i_1])));
                arr_4 [15] = (((((((var_11 ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0] [i_1]))) / (min(15268442904297791509, var_11))))) ? (((-(arr_0 [i_1] [i_0 + 1])))) : var_3));
                var_19 = (((var_2 >= 3178301169411760107) ? (((arr_3 [i_0 - 1] [i_0 - 1]) ? (max((arr_1 [i_0 + 1]), 13941709138434876513)) : (arr_3 [i_0 - 1] [i_0]))) : (((4505034935274675103 ? -0 : 0)))));
            }
        }
    }
    var_20 = (~var_7);
    var_21 = (min(var_11, var_0));
    #pragma endscop
}
