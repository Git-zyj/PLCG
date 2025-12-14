/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((30 == -var_7) ? var_11 : (((((var_3 ? var_8 : var_10))) ? (~var_10) : (min(var_1, var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 &= ((((((arr_3 [4]) ? var_4 : (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_3 [6]))) : (((arr_0 [i_0]) ? 3041965648 : (arr_5 [10] [10] [i_2] [i_0 - 3])))));
                    var_16 = 9098;
                    arr_7 [i_0] = ((((((arr_3 [i_0]) ? (~var_5) : (min((arr_6 [i_0] [i_1] [i_1]), var_6))))) ? -var_7 : (((((~(-127 - 1)))) ? 1751931463 : 16336114410990940652))));
                    arr_8 [i_0] [i_0 - 2] [i_0] = (-((min((arr_4 [i_0] [8] [i_0 - 2]), (arr_4 [i_0] [i_0] [i_0 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
