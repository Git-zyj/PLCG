/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = ((!(((~((var_2 ? 4 : var_7)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (-1 ? ((~(arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_3] = (((0 < 1971359320939453176) < (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = -3654357704555166094;
                        arr_11 [i_0] [4] [i_1] [5] = ((1 ? 19026068 : 185435082967936142));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((max(-19026054, -2))) ? ((max((max(4, 4238785670)), (((1971359320939453172 ? var_12 : 4)))))) : 9223372036854775807);
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, (((min(var_5, var_0)) * ((((var_3 ? var_7 : 120))))))));
    #pragma endscop
}
