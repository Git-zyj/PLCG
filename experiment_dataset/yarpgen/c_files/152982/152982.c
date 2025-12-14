/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] = (arr_7 [i_0]);

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 = (((arr_7 [i_1]) || (((1 ? ((min(1, -111))) : var_19)))));
                    var_21 *= -9259;
                }

                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_22 ^= (((arr_0 [14] [i_1]) ? ((min((arr_7 [i_1]), (arr_7 [i_1])))) : ((996916356 ? (arr_7 [i_1]) : (arr_0 [i_1] [i_1])))));
                    arr_13 [i_0] = (max((((arr_10 [4] [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? 0 : 0)), 1));
                }
            }
        }
    }
    var_23 = var_10;
    var_24 = (!var_14);
    #pragma endscop
}
