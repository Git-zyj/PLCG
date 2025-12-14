/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65519;
    var_21 += var_13;
    var_22 = (((max(var_15, (max(var_1, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_23 = ((-(((arr_3 [i_1 - 1]) / 2901499685))));
                    var_24 &= 595000765;
                    var_25 = ((~((-(arr_3 [i_1 + 1])))));
                }
                var_26 = (min(((~(arr_2 [i_1 - 1]))), ((max(var_15, (arr_2 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
