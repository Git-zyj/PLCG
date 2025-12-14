/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((!(!18446744073709551602)));
    var_16 = var_3;
    var_17 = 0;
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (arr_5 [i_1 + 1] [i_0 - 1] [i_0 - 1]);
                var_19 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 = var_8;
                            var_21 = (arr_6 [i_0] [8] [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
