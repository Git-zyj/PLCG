/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (((127 >= -2902082134238626350) * ((-((var_1 ? 0 : 0))))));
                        var_18 = (max(var_18, ((~(max((max(-14586, var_7)), ((min(var_10, 25593)))))))));
                        arr_12 [i_0] [i_0] [i_0] = ((((min(((30 ? -1 : -76)), (min(-1681042733, -62))))) ? ((((((var_4 ? 4052542058 : var_16))) ? 4294967272 : var_3))) : (max(((min(1, var_14))), ((115 ? var_7 : var_7))))));
                    }
                    arr_13 [i_0] [i_2] = (max((((max(var_4, var_3)))), ((~((19 ? 3324055823 : var_13))))));
                }
            }
        }
    }
    var_19 = (((((((var_2 ? 36 : var_1))) ? (((134 ? var_0 : 2147483629))) : (18410715276690587648 / -21))) % ((((2648461095565450965 ? var_7 : var_7))))));
    var_20 = min((((((var_1 ? 0 : 40)) / ((10 ? 1761598703 : var_2))))), (min((!1), var_1)));
    #pragma endscop
}
