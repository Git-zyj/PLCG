/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (min(var_14, var_4));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = (4294967286 / var_3);
                            var_15 = 32747;
                            arr_12 [i_3] [i_0] [i_2] [i_0] [i_0 - 2] = arr_2 [i_2 - 1] [i_0 - 3] [i_2];
                            var_16 = (-2147483647 - 1);
                            arr_13 [i_0] [22] [i_2] [i_1] [i_0] = (((0 / (max(4294967295, (arr_5 [i_0] [i_1] [i_2 + 3] [i_0]))))));
                        }
                    }
                }
                var_17 = (32 ? 4294967295 : (arr_4 [i_0]));
                var_18 = (min(var_18, ((max(((((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]) > ((var_10 ? 65535 : var_5))))), 0)))));
            }
        }
    }
    var_19 = (min(var_19, (((((((((var_3 ? var_2 : var_4))) + var_0))) ? (var_3 ^ var_4) : (4 / 536870908))))));
    var_20 = 15;
    #pragma endscop
}
