/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_9 ? (((9223372036854775807 != var_2) ? (var_13 - var_10) : var_3)) : ((min((min(255, 254)), ((max(var_10, var_10)))))))))));
    var_17 |= (var_15 / var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += ((+((((arr_2 [i_1] [i_1] [i_1 - 1]) >= (arr_3 [i_1 - 1]))))));
                arr_4 [i_0] [i_0] = (((((11905 ? var_11 : (arr_2 [2] [i_0 - 1] [i_0])))) ? (((arr_2 [i_0] [i_0 - 1] [i_0 - 1]) ? 8761095510880651081 : 3172563656)) : (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                var_19 = ((!(((-(arr_1 [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_20 = 2104399687;
                    arr_8 [i_0] [i_1] [i_2] |= var_7;
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
